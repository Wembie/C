#include <stdio.h>
#include "arrayqueue.h"

int main(){
   Queue maria = createQueue( );
   maria.put( &maria, 100 );
   maria.put( &maria, 80 );
   maria.put( &maria, 15 );
   maria.put( &maria, 24 );
   maria.put( &maria, 135 );
   maria.display( &maria );
   maria.delete( &maria );
   maria.display( &maria );
   printf( "Front element is %d\n", maria.getFront( &maria ) );
   printf( "Rear element is %d\n", maria.getRear( &maria ) );
   while( !maria.empty( &maria ) ){
      printf( "Deleting front element %d\n", maria.getFront( &maria ) );
      maria.delete( &maria );
   }
   return 0;
}