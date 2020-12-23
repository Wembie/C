#ifndef ARRAYQUEUE
#define ARRAYQUEUE

#include <stdio.h>
#include <stdlib.h>
#define CAP 100

typedef struct Queue Queue;

struct Queue{
   int a[ CAP ];
   int front, rear, n;
   void (*put) ( Queue *, int );
   void (*delete) ( Queue * );
   int (*getFront) ( Queue * );
   int (*getRear) ( Queue * );
   void (*display) ( Queue * );
   int (*empty) ( Queue * );
};

void put( Queue * x, int e ){
   if( x->n == CAP ){
      fprintf( stderr, "Error: Queue is full\n" );
      return;
   }
   x->rear = ( x->rear + 1 ) % CAP;
   x->a[ x->rear ] = e;
   x->n++;
   return;
}

void delete( Queue * x ){
   if( empty( x ) ){
      fprintf( stderr, "Error: Queue is empty\n" );
      return;
   }
   x->front = ( x->front + 1 ) % CAP;
   x->n--;
   return;
}

int getFront( Queue * x ){
   if( empty( x ) ){
      fprintf( stderr, "Error: Queue is empty\n" );
      exit( 1 );
   }
   return x->a[ ( x->front + 1 ) % CAP ];
}

int getRear( Queue * x ){
   if( empty( x ) ){
      fprintf( stderr, "Error: Queue is empty\n" );
      exit( 1 );
   }
   return x->a[ x->rear ];
}

void display( Queue * x ){
   int i; 
   printf( "Queue: [front] " );
   for( i = 1; i <= x->n; i++ )
      printf( "%d ", x->a[ ( x->front + i ) % CAP ] );
   printf( "[rear]\n" );
   return;
}

int empty( Queue * x ){
   return !x->n;
}

Queue createQueue( ){
   Queue q;
   q.front = q.rear = q.n = 0;
   q.put = &put;
   q.delete = &delete;
   q.getFront = &getFront;
   q.getRear = &getRear;
   q.display = &display;
   q.empty = &empty;
   return q;
} 

#endif
