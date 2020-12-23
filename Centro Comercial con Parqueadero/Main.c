#include "Funciones.h"

void menu(){
	int opcionMenuPrincipal, filas, columnas; 
	FILE * f;
	do{
		mostrarMenuPrincipal(); scanf( "%d", &opcionMenuPrincipal );
		switch( opcionMenuPrincipal ){
			case 0: //Salir
				break;
			case 1: //Nuevo centro comercial
				printf( "\nDigite la cantidad de pisos: " ); scanf( "%d", &filas );
				printf( "Digite la cantidad de locales: " ); scanf( "%d", &columnas );
				nuevoCentroComercial( filas, columnas );
				break;
			case 2: //Continuar centro comercial
				f = fopen( "centroComercial.dat", "rb" );
				if( f != NULL ){
					cargarCentroComercial();
				}
				else{
					printf( "\nNo hay ningun archivo para cargar\n\n" );
				}
				fclose( f );
				break;
			default:
				printf( "\nNumero erroneo, intentalo de nuevo\n\n" );
				break;
		}
	}while( opcionMenuPrincipal != 0 );
	printf( "Has salido con exito!.\n" );
	return;
}

int main(){
	menu();
	return 0;
}