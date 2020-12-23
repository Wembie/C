#ifndef ARRAYLIST
#define ARRAYLIST

#include <stdio.h>
#include <stdlib.h>
#define CAP 100

typedef struct List List;

struct List{
   int a[ CAP ], n;
   void (*add) ( List *, int, int );
   void (*delete) ( List *, int );
   int (*get) ( List *, int );
   int (*search) ( List *, int );
   void (*display) ( List * );
   int (*size) ( List * );
   int (*empty) ( List * );
};

void add( List * x, int index, int e ){
   int i;
   if( index < 0 || index > x->n ){
      fprintf( stderr, "Error : invalid index\n" );
      return;
   }
   if( x->n == CAP ){
      fprintf( stderr, "Error : list is full\n" );
      return;
   }
   for( i = x->n - 1; i >= index; i-- )
      x->a[ i + 1 ] = x->a[ i ];
   x->a[ index ] = e;
   x->n++;
   return;
}

void delete( List * x, int index ){
   int i;
   if( index < 0 || index >= x->n ){
      fprintf( stderr, "Error : invalid index\n" );
      return;
   }
   for( i = index; i < x->n - 1; i++ )
      x->a[ i ] = x->a[ i + 1 ];
   x->n--;
   return;
}

int get( List * x, int index ){
   if( index < 0 || index >= x->n ){
      fprintf( stderr, "Error : invalid index\n" );
      return;
   }
   return x->a[ index ];
}

int search( List * x, int e ){
   int i;
   for( i = 0; i < x->n; i++ )
      if( x->a[ i ] == e )
         return i;
   return -1;
}

void display( List * x ){
   int i;
   printf( "List: " );
   for( i = 0; i < x->n; i++ )
      printf( "%d ", x->a[ i ] );
   printf( "\n" );
   return;
}

int size( List * x ){
   return x->n;
}

int empty( List * x ){
   return x->n == 0;
}

List createList( ){
   List l;
   l.n = 0;
   l.add = &add;
   l.delete = &delete;
   l.get = &get;
   l.search = &search;
   l.display = &display;
   l.size = &size;
   l.empty = &empty;
   return l;
}

#endif
