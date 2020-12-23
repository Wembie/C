#include <stdio.h>
#include "binarytree.h"

int main( ){
   Tree a = createTree( );
   Tree x = createTree( );
   Tree y = createTree( );
   Tree z = createTree( );
   y.makeTree( &y, 1, &a, &a );
   z.makeTree( &z, 2, &a, &a );
   x.makeTree( &x, 3, &y, &z );
   y.makeTree( &y, 4, &x, &a );
   printf( "Preorder sequence is " );
   y.preorder( y.root );
   printf( "\n" );
   printf( "Inorder sequence is " );
   y.inorder( y.root );
   printf( "\n" );
   printf( "Postorder sequence is " );
   y.postorder( y.root );
   printf( "\n" );
   printf( "Level sequence is " );
   y.levelorder( y.root );
   printf( "\n" );
   printf( "empty = %d\n", y.empty( y.root ) );
   printf( "size = %d\n", y.size( y.root ) );
   printf( "height = %d\n", y.height( y.root ) );
   return 0;
}
