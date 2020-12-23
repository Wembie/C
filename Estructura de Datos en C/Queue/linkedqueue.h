#ifndef LINKEDQUEUE
#define LINKEDQUEUE

#include <stdio.h>
#include <stdlib.h>

typedef struct Queue Queue;
typedef struct Node Node;

struct Node{
   int item;
   Node * next; 
};

struct Queue{
   Node *front, *rear;
   void (*put) ( Queue *, int );
   void (*delete) ( Queue * );
   int (*getFront) ( Queue * );
   int (*getRear) ( Queue * );
   void (*display) ( Queue * );
   int (*empty) ( Queue * );
};

void put( Queue * x, int e ){
   Node * y = malloc( sizeof( Node ) );
   y->item = e;
   y->next = NULL;
   if( empty( x ) )
      x->front = y;
   else
      x->rear->next = y;
   x->rear = y;
   return;
}

void delete( Queue * x ){
   if( empty( x ) ){
      fprintf( stderr, "Error: Queue is empty\n" );
      return;
   }
   Node * y = x->front;
   x->front = x->front->next;
   free( y );
   return;
}

int getFront( Queue * x ){
   if( empty( x ) ){
      fprintf( stderr, "Error: Queue is empty\n" );
      exit( 1 );
   }
   return x->front->item;
}

int getRear( Queue * x ){
   if( empty( x ) ){
      fprintf( stderr, "Error: Queue is empty\n" );
      exit( 1 );
   }
   return x->rear->item;
}

void display( Queue * x ){
   Node * y = x->front;
   printf( "Queue: [front] " );
   while( y ){
      printf( "%d ", y->item );
      y = y->next;
   }
   printf( "[rear]\n" );
   return;
}

int empty( Queue * x ){
   return x->front == NULL;
}

Queue createQueue( ){
   Queue q;
   q.front = q.rear = NULL;
   q.put = &put;
   q.delete = &delete;
   q.getFront = &getFront;
   q.getRear = &getRear;
   q.display = &display;
   q.empty = &empty;
   return q;
} 

#endif