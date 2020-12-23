#ifndef MAXHEAP
#define MAXHEAP

#include <stdio.h>
#include <stdlib.h>
#define CAP 100

typedef struct Heap Heap;

struct Heap{
   int * a; 
   int n;
   void (*put) ( Heap *, int );
   void (*delete) ( Heap * );
   int (*top) ( Heap * );
   int (*initialize) ( Heap *, int *, int );
   void (*display) ( Heap * );
   int (*empty) ( Heap * );
};

void put( Heap * x, int e ){
   if( x->n == CAP ){
      fprintf( stderr, "Error: Heap is full\n" );
      return;
   }
   int p = ++x->n;
   while( p != 1 && x->a[ p / 2 ] < e ){
      x->a[ p ] = x->a[ p / 2 ];
      p /= 2;
   }
   x->a[ p ] = e;    
}

void delete( Heap * x ){
   if( empty( x ) ){
      fprintf( stderr, "Error: Heap is empty\n" );
      return;
   }
   int e = x->a[ x->n-- ];
   int p = 1, child = 2;
   while( child <= x->n ){
      if( child < x->n && x->a[ child ] < x->a[ child + 1 ] )
         child++;
      if( e >= x->a[ child ] )
         break;
      x->a[ p ] = x->a[ child ];
      p = child;
      child *= 2;
   }
   x->a[ p ] = e;
}

int top( Heap * x ){
   if( empty( x ) ){
      fprintf( stderr, "Error: Heap is empty\n" );
      exit( 1 );
   }
   return x->a[ 1 ];
}

int initialize( Heap * x, int * b, int size ){
   int root, rootElement, child;
   free( x->a );
   x->a = b;
   x->n = size;
   for( root = x->n / 2; root >= 1; root-- ){
      rootElement = x->a[ root ];
      child = 2 * root;
      while( child <= x->n ){
         if( child < x->n && x->a[ child ] < x->a[ child + 1 ] )
            child++;
         if( rootElement >= x->a[ child ] )
            break;
         x->a[ child / 2 ] = x->a[ child ];
         child *= 2;
      }
      x->a[ child / 2 ] = rootElement;
   }  
}

void display( Heap * x ){
   int i; 
   printf( "Heap: " );
   for( i = 1; i <= x->n; i++ )
      printf( "%d ", x->a[ i ] );
   printf( "\n" );
   return;
}

int empty( Heap * x ){
   return !x->n;
}

Heap createHeap( ){
   Heap h;
   h.n = 0;
   h.a = malloc( sizeof( int ) * CAP + 1 );
   h.put = &put;
   h.delete = &delete;
   h.top = &top;
   h.initialize = &initialize;
   h.display = &display;
   h.empty = &empty;
   return h;
} 

#endif
