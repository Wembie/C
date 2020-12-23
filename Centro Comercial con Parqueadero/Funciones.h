#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum{
	LIBRE, //0
	OCUPADO //1
}estadoLocal;

typedef struct Local{
	char nombre[ 25 ];
	int codigo;
	int piso;
	estadoLocal estado;
	int costoArrendamiento;
}Local;

typedef enum{
	NINGUNO, //0
	MOTO, //1
	CARRO //2
}tipoVehiculo;

typedef struct Parqueadero{
	int id;
	tipoVehiculo tipo;
	estadoLocal estado;
}Parqueadero;

void guardarCentroComercial( Local ** centroComercial, int filas, int columnas );

void mostrarMenuPrincipal();

void mostrarMenuCentroComercial();

void swap( Local ** centroComercial, int posicion1, int posicion2, int piso );

int verificiarCodigo( Local ** centroComercial, int filas, int columnas, int codigoLocal );

void mostrarCodigos( Local ** centroComercial, int filas, int columnas );

void alquilarLocal( Local ** centroComercial, int filas, int columnas );

void ordenarPiso( Local ** centroComercial, int filas, int size );

void crearReporte( Local ** centroComercial, int filas, int columnas );

void mostrarCentroComercial( Local ** centroComercial, int filas, int columnas );

void modificarLocales( Local ** centroComercial, int filas, int columnas );

void desocuparLocales( Local ** centroComercial, int filas, int columnas );

void mostrarMenuParqueadero();

void ingresarVehiculo( Parqueadero * estacionamiento, int sizeParqueadero );

void mostrarEstadoParqueadero( Parqueadero * estacionamiento, int sizeParqueadero );

void parqueadero( int sizeParqueadero, int codigoParqueadero, int n );

void cargarParqueadero( int sizeParqueadero, int codigoParqueadero, int n );

void nuevoCentroComercial( int filas, int columnas );

void cargarCentroComercial();