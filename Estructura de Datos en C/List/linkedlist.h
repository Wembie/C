#ifndef LINKEDLIST
#define LINKEDLIST

#include <stdio.h>
#include <stdlib.h>

typedef struct List List;
typedef struct Node Node;

struct Node{
   int item;
   Node * next;
};

struct List{
   Node * firstNode;
   int n;
   void ( *add ) ( List *, int, int );
   void ( *delete ) ( List *, int );
   int ( *get ) ( List *, int );
   int ( *search ) ( List *, int );
   void ( *display ) ( List * );
   int ( *size ) ( List * );
   int ( *empty ) ( List * );
   void ( *killall ) ( List * );
};

void add( List * x, int index, int e ){
   int i;
   if( index < 0 || index > x->n ){
      fprintf( stderr, "Error : invalid index\n" );
      return;
   }
   Node * y = malloc( sizeof( Node ) );
   y->item = e;
   if( index == 0 ){
      y->next = x->firstNode;
      x->firstNode = y;
   }
   else{
      Node * p = x->firstNode;
      for( i = 0; i < index - 1; i++ )
         p = p->next;
      y->next = p->next;
      p->next = y;
   }
   x->n++;       
   return;
}

void delete( List * x, int index ){
   int i;
   if( index < 0 || index >= x->n ){
      fprintf( stderr, "Error : invalid index\n" );
      return;
   }
   if( empty( x ) ){
      fprintf( stderr, "Error : list is empty\n" );
      return;
   }
   Node * y;
   if( index == 0 ){
      y = x->firstNode;
      x->firstNode = x->firstNode->next;
   }
   else{
      Node * p = x->firstNode;
      for( i = 0; i < index - 1; i++ )
         p = p->next;
      y = p->next;
      p->next = p->next->next;
   }
   free( y );
   x->n--;
   return;
}

int get( List * x, int index ){
   int i;
   if( index < 0 || index >= x->n ){
      fprintf( stderr, "Error : invalid index\n" );
      return;
   }
   Node * p = x->firstNode;
   for( i = 0; i < index; i++ )
      p = p->next;
   return p->item;
}

int search( List * x, int e ){
   int i;
   Node * p = x->firstNode;
   for( i = 0; i < x->n; i++ ){
      if( p->item == e )
         return i;
      p = p->next;
   }
   return -1;
}

void display( List * x ){
   int i;
   printf( "List: " );
   Node * y = x->firstNode;
   for( i = 0; i < x->n; i++ ){
      printf( "%d ", y->item );
      y = y->next;
   }
   printf( "\n" );
   return;
}

int size( List * x ){
   return x->n;
}

int empty( List * x ){
   return x->n == 0;
}

void killall( List * x ){
   while( !empty( x ) )
      delete( x, 0 )
   return;
}

List createList( ){
   List l;
   l.firstNode = NULL;
   l.n = 0;
   l.add = &add;
   l.delete = &delete;
   l.get = &get;
   l.search = &search;
   l.display = &display;
   l.size = &size;
   l.empty = &empty;
   l.killall = &killall;
   return l;
}

#endif
