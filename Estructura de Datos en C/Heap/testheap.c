#include <stdio.h>
#include "maxheap.h"

int main(){
   int array[] = { 0, 8, 23, 89, 100, 35, 11, 52, 77, 44, 60 };
   Heap maria = createHeap( );
   maria.put( &maria, 100 );
   maria.put( &maria, 80 );
   maria.put( &maria, 15 );
   maria.put( &maria, 24 );
   maria.put( &maria, 135 );
   maria.display( &maria );
   printf( "Top element is %d\n", maria.top( &maria ) );
   maria.delete( &maria );
   maria.display( &maria );
   maria.initialize( &maria, array, 10 );
   maria.display( &maria );
   while( !maria.empty( &maria ) ){
      printf( "Deleting max element %d\n", maria.top( &maria ) );
      maria.delete( &maria );
   }
   return 0;
}