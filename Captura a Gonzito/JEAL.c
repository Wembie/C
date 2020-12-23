#include "Gonzito.h"

void mostrarMenu(){
	int opcion = -1, vidasGonzito = 3, x, y, filas = 5, columnas = 5, intentos = 10;
	int tablerovisible[ 5 ][ 5 ] = { { 0, 0, 0, 0, 0} , { 0, 0, 0, 0, 0}, { 0, 0, 0, 0, 0}, { 0, 0, 0, 0, 0}, { 0, 0, 0, 0, 0} };
	int tableroinvisible[ 5 ][ 5 ] = { { 0, 0, 0, 0, 0} , { 0, 0, 0, 0, 0}, { 0, 0, 0, 0, 0}, { 0, 0, 0, 0, 0}, { 0, 0, 0, 0, 0} };
	printf( "!!!!!!!!!! Bienvenido !!!!!!!!!!\n" );
	printf( "Al juego del Gonzito Escurridizo.\n" );	
	printf( "\nDeveloped by: Wembie\n" );
	do{
		printf( "\n1. Jugar\n" );
		printf( "0. Salir\n\n" );
		printf( "Opcion: " );
		scanf( "%d", &opcion );
		printf("\n");
		switch( opcion ){
			case 1:
				if( intentos == 0 )
					break;
				moverGonzito( tableroinvisible );
				while( vidasGonzito != 0 ){
					if( intentos == 0 ){
						printf( "Has perdido :c.\n" );
						break;
					}						
					else{
						mostrarTablero( tablerovisible, filas, columnas );
						while( 1 ){
							printf( "\nDigita la posicion Y: " );
							scanf( "%d", &y );
							if( y >= 0 && y <= 4 )
								break;
							else
								printf( "\nNumero invalido., prueba del 0 al %d.\n", filas-1 );																				
						}
						while( 1 ){
							printf( "\nDigita la posicion X: " );
							scanf( "%d", &x );	
							if( x >= 0 && x <= 4 )
								break;		
							else
								printf( "\nNumero invalido., prueba del 0 al %d.\n", filas-1 );				
						}
						if( tableroinvisible[ y ][ x ] == 0 ){
							printf( "\nNo le has pegado a Gonzito :C.\n" );
						}
						else{
							printf( "\nFelicidades!!!.\n" );
							printf( "Le has pegado a Gonzito!!!.\n\n" );
							tableroinvisible[ y ][ x ] = 1;
							mostrarTablero( tableroinvisible, filas, columnas ); //Para ver donde ha quedado el raton
							printf("\n");
							moverGonzito( tableroinvisible );
							vidasGonzito -= 1;
						}
						if( vidasGonzito == 0){
							printf( "!!!!!!!!!!!!!!!!!!!!!HAS GANADO!!!!!!!!!!!!!!!!!!!!!\n" );
							break;
						}
						else{
							intentos -= 1;
							printf( "\nIntentos restantes: %d.\n", intentos );
							printf( "Vidas de Gonzito restantes: %d.\n\n", vidasGonzito );							
						}
					}
				}
				break;
			default: 
				printf( "Lo sentimos, la opcion ingresada no es valida.\n" ); 
				break;
		}
	}while( opcion != 0 );
	printf( "Has salido con exito!.\n" );
	return;
}

int main(){
	mostrarMenu();
	return 0;
}
