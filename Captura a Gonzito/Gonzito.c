#include "Gonzito.h"

void mostrarTablero( int tablero[  ][ 5 ], int filas, int columnas ){
	int i, j, indice;
	printf( "|   | 0 | 1 | 2 | 3 | 4 |\n" );
	for( i = 0; i < filas; i++ ){
		indice = 0;
		while( indice <= 24 ){
			printf("%c", 196);
			indice += 1;
		}
		printf( "\n| %d | ", i );
		for( j = 0; j < columnas; j++ ){
			printf( "%d | ", *( *(tablero + i )+ j ) );
		}
		printf( "\n" );		
	}

	return;
}

void moverGonzito( int tablero[  ][ 5 ] ){
	int x, y;
	srand ( time ( NULL ) );
	x = rand() % ( 4 + 1 );
	y = rand() % ( 4 + 1 );
	if( tablero[ y ][ x ] == 0 )
		tablero[ y ][ x ] = 1;
	printf("Y = %d, X =  %d\n", y, x ); //Para Activar el Hack de GANAR :D 
	return;
}