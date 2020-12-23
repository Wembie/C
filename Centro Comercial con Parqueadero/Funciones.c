#include "Funciones.h"

void guardarCentroComercial( Local ** centroComercial, int filas, int columnas ){
	int i;
    FILE * f;
    f = fopen( "centroComercial.dat" , "wb" );
    if( f != NULL ){
        fwrite( &filas, sizeof( int ), 1, f );
        fwrite( &columnas, sizeof( int ), 1, f );
        for( i = 0; i < filas; i++ ){
             fwrite( centroComercial[ i ], sizeof( Local ), columnas, f );
        }
        fclose( f );
    }
    else{
        printf( "\nERROR -> No existen datos\n" );
    }
	return;
}

void mostrarMenuPrincipal(){
	printf( "Software by Wembie\n\n" );
	printf( "1. Crear nuevo centro comercial\n" );
	printf( "2. Continuar centro comercial\n" );
	printf( "0. Salir\n\n" );
	printf( "Opcion: " );
	return;
}

void mostrarMenuCentroComercial(){
	printf( "\nCentro Comercial\n\n" );
	printf( "1. Alquilar local\n" );
	printf( "2. Ordenar un piso\n" );
	printf( "3. Crear reporte\n" );
	printf( "4. Mostrar centro comercial\n" );
	printf( "5. Modificar locales\n" );
	printf( "6. Desocupar locales\n" );
	printf( "7. Ir a parqueadero\n" );
	printf( "0. Volver\n\n" );
	printf( "Opcion: " );	
	return;
}

void swap( Local ** centroComercial, int posicion1, int posicion2, int piso ){
	Local temporal;
	//
	strcpy( temporal.nombre, centroComercial[ piso ][ posicion1 ].nombre );
	temporal.codigo = centroComercial[ piso ][ posicion1 ].codigo;
	temporal.estado = centroComercial[ piso ][ posicion1 ].estado;
	temporal.costoArrendamiento = centroComercial[ piso ][ posicion1 ].costoArrendamiento;
	//
	strcpy( centroComercial[ piso ][ posicion1 ].nombre, centroComercial[ piso ][ posicion2 ].nombre );
	centroComercial[ piso ][ posicion1 ].codigo = centroComercial[ piso ][ posicion2 ].codigo;
	centroComercial[ piso ][ posicion1 ].estado = centroComercial[ piso ][ posicion2 ].estado;
	centroComercial[ piso ][ posicion1 ].costoArrendamiento = centroComercial[ piso ][ posicion2 ].costoArrendamiento;
	//
	strcpy( centroComercial[ piso ][ posicion2 ].nombre, temporal.nombre );
	centroComercial[ piso ][ posicion2 ].codigo = temporal.codigo;
	centroComercial[ piso ][ posicion2 ].estado = temporal.estado;
	centroComercial[ piso ][ posicion2 ].costoArrendamiento = temporal.costoArrendamiento;
	//
	return;
}

int verificiarCodigo( Local ** centroComercial, int filas, int columnas, int codigoLocal ){
	int i, j;
	for( i = 0; i < filas; i++ ){
		for( j = 0; j < columnas; j++ ){
			if( codigoLocal == centroComercial[ i ][ j ].codigo  ){
				return 1;
			}
		}
	}
	return 0;
}

void mostrarCodigos( Local ** centroComercial, int filas, int columnas ){
	int i, j, numeroLocales = 0;
	printf( "\n" );
	for( i = 0; i < filas; i++ ){
		printf( "Piso: %d\n\n", i );
		for( j = 0; j < columnas; j++ ){
			printf( "Local %d:\n", numeroLocales );
			printf( "Codigo: %d\n\n", centroComercial[ i ][ j ].codigo );
			numeroLocales++;
		}
	}	
	return;
}

void alquilarLocal( Local ** centroComercial, int filas, int columnas ){
	int piso, j, disponible = 0;
	while( 1 ){
		printf( "\nPD: Los pisos empiezan en 0\n" );
		printf( "\nEn que piso deseas el local? [ PISO MAX: %d ]: ", filas-1 ); scanf( "%d", &piso );
		if( piso <= filas - 1 && piso >= 0 ){
			break;
		}
		else{
			printf( "\nNumero invalido\n" );
		}
	}
	for( j = 0; j < columnas; j++ ){
		if( centroComercial[ piso ][ j ].estado == LIBRE ){
			printf( "\nIngrese el Nombre del local [ MAX: 25 ]: " ); fflush( stdin ); fgets( centroComercial[ piso ][ j ].nombre, 25, stdin );
			printf( "Tu codigo del local es: %d\n", centroComercial[ piso ][ j ].codigo );
			printf( "Tu piso del local es: %d\n", centroComercial[ piso ][ j ].piso );
			centroComercial[ piso ][ j ].estado = OCUPADO;
			printf( "Ingrese el Costo $$$ del arrendamiento: " ); fflush( stdin ); scanf( "%d", &centroComercial[ piso ][ j ].costoArrendamiento );
			return;
		}
		else{
			disponible = 1;
		}
	}
	if( disponible == 1 ){
		printf( "\nNo hay espacio en el piso %d\n", piso );
	} 
	return;
}

void ordenarPiso( Local ** centroComercial, int filas, int size ){
	//Por seleccion
	int i, j, posicionMinima, piso;
	while( 1 ){
		printf( "\nPD: Los pisos empiezan en 0\n" );
		printf( "\nQue piso deseas ordenar? [ PISO MAX: %d ]: ", filas-1 ); scanf( "%d", &piso );
		if( piso <= filas - 1 && piso >= 0 ){
			break;
		}
		else{
			printf( "\nNumero invalido\n" );
		}		
	}
	for( i = 0; i < size - 1; i++ ){
		posicionMinima = i;
		for( j = i + 1; j < size; j++ ){		
			if( centroComercial[ piso ][ j ].costoArrendamiento > centroComercial[ piso ][ posicionMinima ].costoArrendamiento )
				posicionMinima = j;
		}
		if( i != posicionMinima ){
			swap( centroComercial, i, posicionMinima, piso );
		}
	}
	return;
}

void crearReporte( Local ** centroComercial, int filas, int columnas ){
	int i, j, disponibilidadPiso;
	FILE *f;
	f = fopen( "reporte.txt", "w" );
	fprintf( f, "REPORTE:\n\n" );
	for( i = 0; i < filas; i++ ){
		disponibilidadPiso = 0;
		for( j = 0; j < columnas; j++ ){
			if( centroComercial[ i ][ j ].estado == LIBRE ){
				disponibilidadPiso++;
			}
		}
		fprintf( f, "Piso %d: Locales disponibles: %d\n", i, disponibilidadPiso );
	}
	fclose( f );
	system( "notepad reporte.txt" );
	return;
}

void mostrarCentroComercial( Local ** centroComercial, int filas, int columnas ){
	int i, j;
	printf( "\n" );
	for( i = 0; i < filas; i++ ){
		printf( "Piso: %d\n\n", i );
		for( j = 0; j < columnas; j++ ){
			printf( "Nombre: %s\n", centroComercial[ i ][ j ].nombre );
			printf( "Codigo: %d\n", centroComercial[ i ][ j ].codigo );
			printf( "Piso: %d\n", centroComercial[ i ][ j ].piso );
			if( centroComercial[ i ][ j ].estado == LIBRE ){
				printf( "Estado: Libre\n");
			}
			else{
				printf( "Estado: Ocupado\n");
			}
			printf( "Costo: $%d\n\n", centroComercial[ i ][ j ].costoArrendamiento );
		}
	}
	return;
}

void modificarLocales( Local ** centroComercial, int filas, int columnas ){
	int i, j, y, cuantosLocalesAModificar, codigoLocalesAModificar, no;
	while( 1 ){
		printf( "\nCuantos Locales deseas modificar?: " ); fflush( stdin ); scanf( "%d", &cuantosLocalesAModificar );
		if( cuantosLocalesAModificar > 0 && cuantosLocalesAModificar <= columnas ){
			break;
		}
		else{
			printf( "\nNumero invalido\n" );
		}
	}
	for( i = 0; i < cuantosLocalesAModificar; i++ ){
		mostrarCodigos( centroComercial, filas, columnas );
		printf( "Digita ( 0 ) para salir\n\n" );
		while( 1 ){
			printf( "Digite el codigo del local a modificar: " ); fflush( stdin ); scanf( "%d", &codigoLocalesAModificar );
			if( codigoLocalesAModificar == 0 ){
				return;
			}
			else{
				if( verificiarCodigo( centroComercial, filas, columnas, codigoLocalesAModificar ) ){
					break;
				}
				else{
					printf( "\nCodigo no encontrado\n\n" );
				}
			}
		}
		no = 0;
		for( y = 0; y < filas; y++ ){
			for( j = 0; j < columnas; j++ ){
				if( centroComercial[ i ][ j ].codigo == codigoLocalesAModificar ){
					if( centroComercial[ i ][ j ].estado == OCUPADO && no == 0 ){
						printf( "\nIngrese el Nombre del local nuevamente[ MAX: 25 ]: " ); fflush( stdin ); fgets( centroComercial[ i ][ j ].nombre, 25, stdin );
						printf( "Ingrese el Costo $$$ del arrendamiento nuevamente: " ); fflush( stdin ); scanf( "%d", &centroComercial[ i ][ j ].costoArrendamiento );
						no = -1;
						printf( "\nLocal con codigo %d ha sido modificado\n", centroComercial[ i ][ j ].codigo );
						break;
					}
					else{
						if( no == 0 ){
							no = 1;
						}
						break;
					}
				}
			}
		}
		if( no == 1 ){
			printf( "\nNo puedes modificar un local sin haberlo comprado o alquilado\n" );
		}
	}
	return;
}

void desocuparLocales( Local ** centroComercial, int filas, int columnas ){
	int i, j, y, cuantosLocalesADesocupar, codigoLocalesADesocupar , no;
	char texto[] = "Sin Nombre";
	while( 1 ){
		printf( "\nCuantos Locales deseas desocupar?: " ); fflush( stdin ); scanf( "%d", &cuantosLocalesADesocupar );
		if( cuantosLocalesADesocupar > 0 && cuantosLocalesADesocupar <= columnas ){
			break;
		}
		else{
			printf( "\nNumero invalido\n" );
		}
	}
	for( i = 0; i < cuantosLocalesADesocupar; i++ ){
		mostrarCodigos( centroComercial, filas, columnas );
		printf( "Digita ( 0 ) para salir\n\n" );
		while( 1 ){
			printf( "Digite el codigo del local a desocupar: " ); fflush( stdin ); scanf( "%d", &codigoLocalesADesocupar );
			if( codigoLocalesADesocupar == 0 ){
				return;
			}
			else{
				if( verificiarCodigo( centroComercial, filas, columnas, codigoLocalesADesocupar ) ){
					break;
				}
				else{
					printf( "\nCodigo no encontrado\n\n" );
				}
			}
		}
		no = 0;
		for( y = 0; y < filas; y++ ){
			for( j = 0; j < columnas; j++ ){
				if( centroComercial[ i ][ j ].codigo == codigoLocalesADesocupar  ){
					if( centroComercial[ i ][ j ].estado == OCUPADO && no == 0 ){
						strcpy( centroComercial[ i ][ j ].nombre, texto );
						centroComercial[ i ][ j ].estado = LIBRE;
						centroComercial[ i ][ j ].costoArrendamiento = 0;
						no = -1;
						printf( "\nLocal con codigo %d ha sido desocupado\n", centroComercial[ i ][ j ].codigo );
						break;
					}
					else{
						if( no == 0 ){
							no = 1;
						}
						break;
					}
				}
			}
		}
		if( no == 1 ){
			printf( "\nNo puedes desocupar un local sin haberlo comprado o alquilado\n" );
		}
	}
	return;
}

void mostrarMenuParqueadero(){
	printf( "\nParqueadero\n\n" );
	printf( "1. Ingresar vehiculo\n" );
	printf( "2. Aumentar parqueadero\n" );
	printf( "3. Mostrar estado\n" );
	printf( "0. Salir\n\n" );
	printf( "Opcion: " );
	return;
}

void ingresarVehiculo( Parqueadero * estacionamiento, int sizeParqueadero ){
	int i, hayLugarDisponible = 0, tipo, porcentaje = 0;
	for( i = 0; i < sizeParqueadero; i++ ){
		if( estacionamiento[ i ].estado == LIBRE ){
			hayLugarDisponible = 1;
			break;
		}
	}
	if( hayLugarDisponible == 1 ){
		while( 1 ){
			printf( "\nQue tipo de vehiculo es? [ MOTO = 1, CARRO = 2 ]: " ); scanf( "%d", &tipo );
			if( tipo == 1 || tipo == 2 ){
				break;
			}
			else{
				printf( "\nNumero invalido\n" );
			}
		}
		for( i = 0; i < sizeParqueadero; i++ ){
			if( estacionamiento[ i ].estado == LIBRE ){
				if( tipo == 1 ){
					estacionamiento[ i ].tipo = MOTO;
				}
				else if( tipo == 2 ){
					estacionamiento[ i ].tipo = CARRO;
				}
				estacionamiento[ i ].estado = OCUPADO;
				printf( "\nSu vehiculo ha sido estacionado en el puesto: %d\n", estacionamiento[ i ].id );
				break;
			}
		}
		for( i = 0; i < sizeParqueadero; i++ ){
			if( estacionamiento[ i ].estado == OCUPADO ){
				porcentaje++;
			}
		}
		if( ( ( sizeParqueadero * 80 ) / 100 ) == porcentaje ){
			printf( "\nHas igualado el 80%, del size del parqueadero CUIDADO!\n" );
		}
		else if( ( ( sizeParqueadero * 80 ) / 100 ) < porcentaje ){
			printf( "\nHas Sobrepasado el 80%, del size del parqueadero CUIDADO!\n" );
		}
	}
	else{
		printf( "\nNo hay espacio en el parqueadero\n" );
	}
	return;
}

void mostrarEstadoParqueadero( Parqueadero * estacionamiento, int sizeParqueadero ){
	int i;
	printf( "\nLugares Disponibles:\n\n" );
	for( i = 0; i < sizeParqueadero; i++ ){
		if( estacionamiento[ i ].estado == LIBRE ){
			printf( "Id: %d\n", estacionamiento[ i ].id );
		}
	}	
	return;
}

void parqueadero( int sizeParqueadero, int codigoParqueadero, int n ){
	int i, opcionMenuParqueadero, plusTam;
	Parqueadero * estacionamiento;
	estacionamiento = malloc( sizeParqueadero * sizeof( Parqueadero ) );
	for( n = n; n < sizeParqueadero; n++ ){
		estacionamiento[ n ].id = 100 + codigoParqueadero;
		estacionamiento[ n ].tipo = NINGUNO;
		estacionamiento[ n ].estado = LIBRE;
		codigoParqueadero++;
	}
	do{
		mostrarMenuParqueadero(); fflush( stdin ); scanf( "%d", &opcionMenuParqueadero );
		switch( opcionMenuParqueadero ){
			case 0:
				break;
			case 1:
				ingresarVehiculo( estacionamiento, sizeParqueadero );
				break;
			case 2:
				printf( "\nCuantos espacios deseas adicionar al parqueadero?: " ); scanf( "%d", &plusTam );
				sizeParqueadero += plusTam;
				estacionamiento = ( Parqueadero * ) realloc( estacionamiento, sizeParqueadero * sizeof( Parqueadero ) );
				for( n = n; n < sizeParqueadero; n++ ){
					estacionamiento[ n ].id = 100 + codigoParqueadero;
					estacionamiento[ n ].tipo = NINGUNO;
					estacionamiento[ n ].estado = LIBRE;
					codigoParqueadero++;
				}
				break;
			case 3:
				mostrarEstadoParqueadero( estacionamiento, sizeParqueadero );
				break;
			default:
				printf( "Numero erroneo, intentalo de nuevo\n\n" );
				break;	
		}
	}while( opcionMenuParqueadero != 0 );
	free( estacionamiento );
	return;
}

void nuevoCentroComercial( int filas, int columnas ){
	int i, j, codigosLocales = 0, codigoParqueadero = 0, sizeParqueadero, n = 0, opcionMenuCentroComercial;
	char texto[] = "Sin Nombre";
	Local ** centroComercial;
	centroComercial = ( Local ** )malloc( filas * sizeof( Local * ) ); //Pisos
	if( centroComercial != NULL ){
		for( i = 0 ; i < filas ; i++ ){
			centroComercial[ i ] = ( Local * )malloc( columnas * sizeof( Local ) ); //Locales
		}
	}
	for( i = 0; i < filas; i++ ){
		for( j = 0; j < columnas; j++ ){
			strcpy( centroComercial[ i ][ j ].nombre, texto );
			centroComercial[ i ][ j ].codigo = 100 + codigosLocales;
			centroComercial[ i ][ j ].piso = i;
			centroComercial[ i ][ j ].estado = LIBRE;
			centroComercial[ i ][ j ].costoArrendamiento = 0;
			codigosLocales++;
		}
	}
	do{
		guardarCentroComercial( centroComercial, filas, columnas );
		mostrarMenuCentroComercial(); scanf( "%d", &opcionMenuCentroComercial );
		switch( opcionMenuCentroComercial ){
			case 0: //Volver
				printf( "\n" );
				return;
			case 1: //Alquilar local
				alquilarLocal( centroComercial, filas, columnas );
				break;
			case 2: //Ordenar un piso
				ordenarPiso( centroComercial, filas, columnas );
				break;
			case 3: //Crear reporte
				crearReporte( centroComercial, filas, columnas );
				break;
			case 4: //Mostrar centro comercial
				mostrarCentroComercial( centroComercial, filas, columnas );
				break;
			case 5: //Modificar locales
				modificarLocales( centroComercial, filas, columnas );
				break;
			case 6: //Desocupar locales
				desocuparLocales( centroComercial, filas, columnas );
				break;
			case 7: //Ir a parqueadero
				printf( "\nDigite el size del parqueadero: " ); fflush( stdin ); scanf( "%d", &sizeParqueadero);
				parqueadero( sizeParqueadero, codigoParqueadero, n );
				break;
			default:
				printf( "\nNumero erroneo, intentalo de nuevo\n" );
				break;			
		}
	}while( opcionMenuCentroComercial != 0 );
	free( centroComercial );
	return;
}

void cargarCentroComercial(){
	int i, j, filas, columnas, codigosLocales = 0, codigoParqueadero = 0, sizeParqueadero, n = 0, opcionMenuCentroComercial;
	char texto[] = "Sin Nombre";
	Local ** centroComercial;
	FILE * f;
	f = fopen( "centroComercial.dat" , "rb" );
	centroComercial = ( Local ** )malloc( filas * sizeof( Local * ) ); //Pisos
	if( f != NULL ){
		fread( &filas, sizeof( int ), 1, f );
        fread( &columnas, sizeof( int ), 1, f );
		for( i = 0 ; i < filas ; i++ ){
			centroComercial[ i ] = ( Local * )malloc( columnas * sizeof( Local ) ); //Locales
			for( j = 0; j < columnas; j++ ){
            	fread( &centroComercial[ i ][ j ], sizeof( Local ), 1, f );
            }
		}
		fclose( f );
    }
    else{
        printf( "\nERROR -> No existen datos\n" );
    }
	do{
		guardarCentroComercial( centroComercial, filas, columnas );
		mostrarMenuCentroComercial(); scanf( "%d", &opcionMenuCentroComercial );
		switch( opcionMenuCentroComercial ){
			case 0: //Volver
				printf( "\n" );
				return;
			case 1: //Alquilar local
				alquilarLocal( centroComercial, filas, columnas );
				break;
			case 2: //Ordenar un piso
				ordenarPiso( centroComercial, filas, columnas );
				break;
			case 3: //Crear reporte
				crearReporte( centroComercial, filas, columnas );
				break;
			case 4: //Mostrar centro comercial
				mostrarCentroComercial( centroComercial, filas, columnas );
				break;
			case 5: //Modificar locales
				modificarLocales( centroComercial, filas, columnas );
				break;
			case 6: //Desocupar locales
				desocuparLocales( centroComercial, filas, columnas );
				break;
			case 7: //Ir a parqueadero
				printf( "\nDigite el size del parqueadero: " ); fflush( stdin ); scanf( "%d", &sizeParqueadero);
				parqueadero( sizeParqueadero, codigoParqueadero, n );
				break;
			default:
				printf( "Numero erroneo, intentalo de nuevo\n\n" );
				break;			
		}
	}while( opcionMenuCentroComercial != 0 );
	free( centroComercial );
	return;
}