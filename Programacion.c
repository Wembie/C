#include <stdio.h>

void imprimirCalificacionIfAnidado(float nota){
	/* Use solo if sin else */
	if (nota >= 0 && nota <=5){
		if (nota >= 4.5 && nota <= 5){
			printf("Es un exelente estudiante");
		}		
		if (nota >= 4 && nota <= 4.5){
			printf("Es muy buen estudinte");
		}
		if (nota >= 3.5 && nota <= 4){
			printf("Es un buen estudiante");
		}		
		if (nota >= 3 && nota <= 3.5){
			printf("Es un estudiante aceptable");
		}		
		if (nota < 3){
			printf("Paila Perdio");
		}			
	}	
	if (nota <= 0 && nota >= 5){
		printf("lo siento el valor de la calificación está por fuera del rango");
	}	
}

void imprimirCalificacionElseIf(float nota){
/* Use else if */
	if (nota >= 0 && nota <=5){		
		if (nota >= 4.5 && nota <= 5){
			printf("Es un exelente estudiante");
		}		
		else if (nota >= 4 && nota <= 4.5){
			printf("Es muy buen estudiante");
		}		
		else if (nota >= 3.5 && nota <= 4){
			printf("Es un buen estudiante");
		}		
		else if (nota >= 3 && nota <= 3.5){
			printf("Es un estudiante aceptable");
		}
		else if (nota < 3){
			printf("Paila Perdio");	
		}
	}
	else{
		printf("lo siento el valor de la calificación está por fuera del rango")
	}	
}
void obtenerDiaSemana( int diaSemana){
	//TODO completar con lo escrito en el tercer punto
	switch(diaSemana){
		case 1:
			printf("Es Lunes\n");
			break
		case 2:
			printf("Es Martes\n");
			break
		default:
			printf("No es ningun dia de la semana\n");
			break
	}
}
int main(){

	float nota=0.0;
	printf("Digite la nota: \n");
	while (1 != 0){
		scanf("%o",&nota);
		if (nota >= 0 && nota <=5){
			break
		}
	}
	//Solicite la nota
	//Valide que se encuentre en el rango indicado
	//Si se encuentra en el rango indicado invoque los procedimientos
	// 	 imprimirCalificacionElseIf  e  imprimirCalificacionIfAnidado
	
	//TODO llamar a obtenerDiaSemana
	return 0;
}

///////
#include <stdio.h>

int main()
{
	printf("Hola Mundo\n");
	printf("Wembie");
	return 0;	
}

void NombreProcedimiento(){ 
}

int variableGlobal = 50; //Ambito de tipo programa
int Prueba(){
	variableGlobal = variableGlobal + 5; // o variableGlobal += 5
	printf("%d es el valor de la variable global", variableGlobal);
	return 0;
}

int sumar(){
	int x,y,suma;
	x = 10;
	y = 20;
	suma = x+y;
	return suma;
}
int main(){
	int valor = sumar();
	printf("%d es el valor de la suma\n", valor);
	return 0;
}
int main(){
	int valor = sumar();
	printf("%d es el valor de la suma\n", valor);
	return 0;
}
/////////////

//Incluyo biblioteca de entrada/salida.
#include <stdio.h>


int funcionUno(int x, int y){
  return x+y;
}
int funcionDos(int x, int y){
  return x-y;
}
int funcionTres(int x, int y){
  return x*y;
}
float funcionCuatro(int x, int y){
  float result=0.0;
  if(y>0){
	result= (float)x/ (float)y;
  }else{
	printf("No se puede hacer esta operacion para los numeros %d--%d \n", x,y);
  }
  return result;
}

int main(){
  int a,b,c;
  float d;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el num uno \n");
  scanf("%d",&a);
  printf("Ingrese el num dos \n");
  scanf("%d",&b);
  
  //Operaciones
  c=funcionUno(a,b);
  printf("Resultado operacion uno %d \n", c);
  
   c=funcionDos(a,b);
  printf("Resultado operacion dos %d \n", c);
  
   c=funcionTres(a,b);
  printf("Resultado operacion tres %d \n", c);
  
   d=funcionCuatro(a,b);
  printf("Resultado operacion cuatro %f \n", d);
  
  return 0;

}
/////////
#include <stdio.h>

int Sumar(int x, int y){
  return x+y;
}
int Restar(int x, int y){
  return x-y;
}
int Multiplicar(int x, int y){
  return x*y;
}
float Dividir(int x, int y){
  float result=0.0;
  if(y>0){
	result= (float)x/ (float)y;
  }else{
	printf("No se puede hacer esta operacion para los numeros %d--%d \n", x,y);
  }
  return result;
}
int Invertir(int Numero){ //// INVERTIR NUMERO
	int A, B, Voltear = 0;
	while(Numero != 0){
		A = Numero % 10;
		B = Numero / 10;
		Voltear = Voltear*10+A;
		Numero = B;
	}
	return Voltear;
}
int Bisiesto(int Year){
  if (Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0){
		printf("%d Es un Year Bisiesto y mi nombre es Juan Esteban Acosta Lopez\n", Year);
		return 1;
  }
  else{
		printf("%d No es Year Bisiesto y Tengo 3 Hermanos\n", Year);
		return 0;
  }
}

int main(){
  int Numero_Uno,Numero_Dos,Resultado, Numero, Year; 
  float Resultado_Decimal;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el Numero uno: \n");
  scanf("%d",&Numero_Uno);
  printf("Ingrese el Numero dos: \n");
  scanf("%d",&Numero_Dos);
  printf("Ingrese el Numero a Invertir: \n");
  scanf("%d", &Numero);
  printf("Ingrese un Year: \n");
  scanf("%d", &Year);
  
  //Operaciones
  Resultado=Sumar(Numero_Uno,Numero_Dos);
  printf("Resultado operacion de la suma es: %d \n", Resultado);
  
  Resultado=Restar(Numero_Uno,Numero_Dos);
  printf("Resultado operacion de la resta es: %d \n", Resultado);
  
  Resultado=Multiplicar(Numero_Uno,Numero_Dos);
  printf("Resultado operacion de la multiplicacion es: %d \n", Resultado);
  
  Resultado=Dividir(Numero_Uno,Numero_Dos);
  printf("Resultado operacion de la division es: %f \n", Resultado_Decimal);

  Resultado=Invertir(Numero);
  printf("El Numero %d al invertirlo da: %d\n",Numero, Resultado);
  if(Numero == Resultado){
	printf("El numero %d, Es Palindromo\n", Numero);
  }
  else{
  	printf("El numero %d, No es Palindromo\n", Numero);
  }
  Resultado=Bisiesto(Year);
  printf("Resultado es %d,\n",Resultado);
  return 0;
}
////////
///TALLER///
//1//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand (time(NULL));
	int aleatorio, numero, jugadas = 0;
	aleatorio = rand() % (5000+1);
	printf( "Numero Aleatorio GENERADO\n" );
	//printf("%d Es el Numero aleatorio\n", aleatorio);//
	while ( numero != aleatorio ){
		printf("Digite un Numero del 0 al 5000: "); scanf( "%d", &numero );
		if( numero >= 0 && numero <= 5000 ){
			jugadas++;
			if( numero < aleatorio ){
				printf( "Too small, Intentalo de nuevo.\n" );
			}
			else if( numero > aleatorio ) {
				printf( "Too big, Intentalo de nuevo.\n" );
			}
			else{
				printf( "Ganaste y te tomo %d intentos\n", jugadas );
			}
			if( jugadas == 5 ){
				printf( "Lo siento, acertaste pero eres muy lento, tendras que jugar de nuevo\n" );
				break;
			}
		}
		else{
			printf( "Numero Invalido.\n" );
		}
	}
	return 0;
}
//2//
#include <stdio.h>

int main(){
	int hasta, numero, bandera = 0, desde = 1, promedio = 0;
	printf( "Cuantas veces desea repetir los numeros: " ); scanf( "%d", &hasta );
	while ( desde <= hasta ){
		printf( "Digite un Numero del 50 al 80: " ); scanf( "%d", &numero );
		if( numero >= 50 && numero <= 80 ){
			if( numero == 71 && bandera == 0 ){
				printf("Felicidades Loka\n");
				bandera++;
			}
			else if( numero == 71 && bandera == 1 ){
				printf( "Felicidades Loka, y venga por el premio tomorrow que se lo GANOOO OME\n" );
				bandera++;
			}
			else if( numero == 71 && bandera == 2 ){
				printf( "Esta loka me esta haciendo trampa o que?\n" );
				bandera++;
			}
			else if( numero != 71 ){
				promedio += numero;
			}
		}
		else{
			printf( "Numero Invalido.\n" );
		}
		desde++;
	}
	printf( "El promedio es de : %d\n", promedio / hasta );
	return 0;
}
//3//
#include <stdio.h>

int camionA(){
	int cuantosA, inicio = 1, bultos, sumaBultos = 0;
	printf( "CAMIONES (A)\n" );
	printf( "Cuantos camiones (A) vinieron hoy?:\n" ); scanf( "%d", &cuantosA );
	while( inicio <= cuantosA  ){
		printf("Cuantos bultos de papa trajo el camion%d (A)?:\n", inicio ); scanf( "%d", &bultos );
		sumaBultos += bultos;
		inicio++;
	}
	printf( "Bultos totales de %d camiones (A) que vinieron hoy son de: %d\n", cuantosA, sumaBultos );
	return 0;
}
int camionB(){
	int cuantosB, inicio = 1, cuantosProductos, tomate, cebolla, naranja ,mango, kilosTomate = 0, kilosCebolla = 0, kilosNaranja = 0, kilosMango = 0, camiones_3_4 = 0;
	printf( "CAMIONES (B)\n" );
	printf( "Cuantos camiones (B) vinieron hoy?:\n" ); scanf( "%d", &cuantosB );
	while( inicio <= cuantosB  ){
		printf("Cuantos productos trae el camion%d (B)?:\n", inicio ); scanf( "%d", &cuantosProductos );
		if( cuantosProductos == 2 ){
			printf("Cuantos kilos de tomate trae el camion%d (B)?:\n", inicio ); scanf( "%d", &tomate);	
			printf("Cuantos kilos de cebolla trae el camion%d (B)?:\n", inicio ); scanf( "%d", &cebolla);
			kilosTomate += tomate;
			kilosCebolla += cebolla;
		}
		else if( cuantosProductos == 3 ){
			printf("Cuantos kilos de tomate trae el camion%d (B)?:\n", inicio ); scanf( "%d", &tomate);	
			printf("Cuantos kilos de cebolla trae el camion%d (B)?:\n", inicio ); scanf( "%d", &cebolla);
			printf("Cuantos kilos de naranja trae el camion%d (B)?:\n", inicio ); scanf( "%d", &naranja);
			kilosTomate += tomate;
			kilosCebolla += cebolla;
			kilosNaranja += naranja;
			camiones_3_4++;
		}
		else if( cuantosProductos == 4 ){
			printf("Cuantos kilos de tomate trae el camion%d (B)?:\n", inicio ); scanf( "%d", &tomate);	
			printf("Cuantos kilos de cebolla trae el camion%d (B)?:\n", inicio ); scanf( "%d", &cebolla);
			printf("Cuantos kilos de naranja trae el camion%d (B)?:\n", inicio ); scanf( "%d", &naranja);
			printf("Cuantos kilos de mango trae el camion%d (B)?:\n", inicio ); scanf( "%d", &mango);
			kilosTomate += tomate;
			kilosCebolla += cebolla;
			kilosNaranja += naranja;
			kilosMango += mango;
			camiones_3_4++;
		}
		else{
			printf( "Numero Invalido.\n" );
		}
		inicio++;
	}
	printf( "La cantidad de camiones de 3 y 4 productos son de: %d\n", camiones_3_4++ );
	printf( "Kilos de Tomate: %d\n", kilosTomate );
	printf( "Kilos de Cebolla: %d\n", kilosCebolla );
	printf( "Kilos de Naranja: %d\n", kilosNaranja );
	printf( "Kilos de Mango: %d\n", kilosMango );
	return 0;
}

int main(){
	int camionesA, camionesB;
	printf(" SOFTWARE DE CAMIONES LA FARRA // BY: WEMBIE\n" );
	camionesA = camionA();
	camionesB = camionB();
	printf("CERRANDO...\n");
	return 0;
}
//4//
#include <stdio.h>

int cifras( int entero ){
	int cifras = 1;
	while( entero >= 10 ){
		entero /= 10;
		cifras++;
	}
	return cifras;
}
int primos( int entero ){
	int si = 0, no = 1, i, cousin = 0;
	for ( i = 2; i < entero && cousin == 0; ++i ){
		if( entero % i == 0 ){
			cousin = 1;
		}
	}
	if( cousin == 1 ){
		return no;
	}
	else{
		return si;
	}
}
int sumaDigitos( int entero ){
	int suma = 0, residuo;
	while( entero > 0 ){
		residuo = entero % 10;
		entero /= 10;
		suma += residuo;
	}
	return suma;
}
int main(){
	int cuantasCifras, primo, inicio = 1, n, digitos, suma = 0;
	printf( "Digite un numero no menor a 1000: "); scanf( "%d", &n );
	while( inicio <= n ){
		cuantasCifras = cifras( inicio );
		primo = primos( inicio );
		digitos = sumaDigitos( inicio );
		if( primo == 0 ){
			printf("%d\n", inicio );
			if( cuantasCifras == 3 ){
				suma++;
			}
			primo = primos(digitos);
			if( primo == 0 ){
				printf("La suma de los digitos de %d, da un numero primo el cual es: %d\n", inicio, digitos );
			}
		}
		inicio++;
	}
	printf("Los numeros primos que tienen 3 digitos son: %d\n", suma );
	return 0;
}
//apuntadores
#include <stdio.h>

int sumaPorValor(int num1, int num2){
    return num1 + num2;
}

void operacionesBasicasPorReferencia(int num1, int num2, int *resultado){
    *resultado = num1 + num2;
}

int main(){
    int numero1, numero2, sumaValor, sumaRef;

    printf("numero 1: ");
    scanf("%d", &numero1);
    printf("numero 2: ");
    scanf("%d", &numero2);

    sumaValor = sumaPorValor(numero1, numero2);
    printf("Suma por valor: %d\n", sumaValor);

    sumaPorReferencia(numero1, numero2, &sumaRef);
    printf("Suma por referencia: %d\n", sumaRef);

    return 0;
}
///////////

#include <stdio.h>

void modificarArreglo( int arreglo[], int size, int subIndice, int nuevoValor ){
	int i;
	if( size > subIndice){
		arreglo[subIndice] = nuevoValor;
	}
	else{
		printf( "Rango no encontrado\n" );
	}
}

int main(){
	int arreglo[10] = {0};
	printf( "ORIGINAL\n" );
	for( int i = 0; i < 10; i++ ){
		printf( "%d\n", arreglo[i] );
	}
	//printf( "AGREGANDO VALORES\n" );
	//for( int i = 0; i < tam; i++ ){
	//	arreglo[i] = i;
	//}
	modificarArreglo( arreglo, 10, 2, 1000 );
	printf( "MODIFICADO\n" );
	for( int i = 0; i < 10; i++ ){
		printf( "%d\n", arreglo[i] );
	}
	return 0;
}
/////////


//Leer datos y guardarlos en el arreglo
for(i=0; i<=hasta; i++){
	printf("\nEscriba el valor %d", i);
	scanf("%f", &nombre[i]);
}

///TALLER 3///

//1//

#include <stdio.h>

void imprimir( int arreglo[], int n, char s[0]){
	int i;
	printf("Lista %s = ", s );
	for( i = 0; i < n; i++ ){
		printf( "%d ", arreglo[i] );
	}
	printf("\n");
	return;
}

int main(){
	int i, j, t, n = 0, k = 0; 
	int arregloA[20] = { 1,5,3,4,5,5,2,9,6,10,3,54,2,3,5,32,24,7,3,10 };
	int arregloB[20] = { 0,8,5,3,6,2,1,6,4,3,54,3,2,2,4,5,8,9,12,32 };
	int arregloC[20];
	imprimir( arregloA, 20, "A" );
	imprimir( arregloB, 20, "B" );
	for( i = 0; i < 20; i++ ){
		t = 0;
		for( j = 0; j < 20; j++ ){
			if( arregloA[i] == arregloB[j] ){
				t = 1;
			}
		}
		if( t == 0 ){
			arregloC[k++] = arregloA[i];
			n++;
		}
	}
	imprimir( arregloC, n, "C" );
	return 0;
}

//2//
#include <stdio.h>

void imprimir( int arreglo[], int n, char s[0]){
	int i;
	printf("Lista %s = ", s );
	for( i = 0; i < n; i++ ){
		printf( "%d ", arreglo[i] );
	}
	printf("\n");
	return;
}

int main(){
	int i, j, w, t, e, n = 0, k = 0, bandera = 0, encontro; 
	int arregloA[20] = { 1,5,3,4,5,5,2,9,6,10,3,54,2,3,5,32,24,7,3,10 };
	int arregloB[20] = { 0,8,5,3,6,2,1,6,4,3,54,3,2,2,4,5,8,9,12,32 };
	int arregloC[20] = { 5,3,5,67,2,1,56,3,23,5,12,35,21,36,7,89,0,16,6,20};
	int arregloD[20];
	imprimir( arregloA, 20, "A" );
	imprimir( arregloB, 20, "B" );
	imprimir( arregloC, 20, "C" );
	for( i = 0; i < 20; i++ ){
		t= 0;
		for( j = 0; j < 20; j++ ){
			if( arregloA[i] == arregloB[j]){
				for ( w = 0; w < 20 ; w++){
					if( arregloA[i] == arregloC[w] && arregloB[j] == arregloC[w]){
						t = 1;
					}
				}
			}
		}
		if( t == 1 ){
			if( bandera == 0 ){
				arregloD[k++] = arregloA[i];
				n++;
				bandera = 1;
			}
			else{
				encontro = 0;
				for( e = 0; e < n; e++){
					if( arregloA[i] == arregloD[e] ){
						encontro = 1;
					}
				}
				if( encontro == 0){
					arregloD[k++] = arregloA[i];
					n++;
				}
			}	
		}
	}
	imprimir( arregloD, n, "D" );
	return 0;
}
//3//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir( int arreglo[], int n, char s[0]){
	int i;
	printf("Lista %s = ", s );
	for( i = 0; i < n; i++ ){
		printf( "%d ", arreglo[i] );
	}
	printf("\n");
	return;
}

int main(){
	srand ( time( NULL ) );
	int aleatorio, tam, i, contador = 0, suma = 0, n = 0;
	printf( "Digite el size del arreglo: "); scanf( "%d", &tam );
	int arregloA[tam];
	int arregloB[tam];
	printf( "AGREGANDO VALORES....\n" );
	for( i = 0; i < tam; i++ ){
		aleatorio = rand() % (70+1);
		arregloA[i] = aleatorio;
	}
	imprimir( arregloA , tam, "A" );
	for( i = 0; i < tam; i++ ){
		if( suma < 100 ){
			contador++;
			suma += arregloA[i];
			if( suma + arregloA[i+1] > 100 ){
				arregloB[n++] = contador;
				arregloB[n++] = suma;
				contador = 0;
				suma = 0;
			}
		}
	}
	imprimir( arregloB , n, "B" );
	return 0;
}
void magic( List * x, List * y ){
   int i, temp = y->n, suma = 0, cantNumeros = 0;
   for(i = 0; i < temp; i++)
      delete(y, 0);
   for (i = 0; i < x->n; i++){
      if(suma + x->a[i] > 100){
         add(y, y->n, cantNumeros);
         add(y, y->n, suma);
         suma = 0;
          cantNumeros = 0;
         i--;
      }
   else{
      suma += x->a[i];
      cantNumeros++;
   }
   }
   add(y, y->n, cantNumeros);
   add(y, y->n, suma);
   suma = 0;
   cantNumeros = 0;
   return;
}
//2 68 3 92 2 43 1 69 2 78

#include <stdio.h>
#include <stdlib.h>

int main(){
	char cadena[20] = "Juan Esteban";
	char cadena2[20]; // digita con espacios para saber si sirve el scanf o fgets
	char cadena3[20]; // digita con espacios para saber si sirve el scanf o fgets
	char cadena4[20]; // digita con espacios para saber si sirve el scanf o fgets
	printf( "%s\n", cadena ); //IMPRIME LA CADENA COMPLETA hasta el primer espacio
	scanf( "%d\n", cadena2 ); // alguito normal se hace los saltos de lineas y ignora los "Enters" q quedan en el buffer
	fflush( stdin ); //LIMPIA EL BUFFER!!!
	printf( "%s\n", cadena2 );
	gets( cadena3 ); // como no tiene limite puede leer otras cosas aparte lee de forma libre y todo lo q haya y coge lo del buffer
	printf( "%s\n", cadena3 ); // asi q el get no es recomendable 
	fgets( cadena4, 20, stdin ); // tiene limite asi q no imprime diferentes cosas maso menos igual al scanf
	puts( cadena4 ); // lo obliga a colocar el \n
	printf( "%s\n", cadena4 ); //no obliga a colocarle el \n asi q es mas libre
	//o tambien para imprir hace un ciclo
	//en conclusion el mas recomendable es el fgets :D
	system( "PAUSE" ); //presione cualquier tecla para continuar
	return 0;
}
/////////////////////////
//CONCAT

int calcularTamCadena( c[]){
	int size = 0;
	while( c[size] != '\0' )
		size++;
	return size;
}
void miConcatenar(){
	char cadena1[100]= "soy", cadena2[100]= "estudiante", cadena3[200]; 
	int k=0;
	for(int i=0; i<(calcularTamCadena(cadena1)-1);i++){ // soy-
		cadena3[k] = cadena1[i];
		k++;
	}
	cadena3[k] = '-';
	k++;
	for(int i=0; i<calcularTamCadena(cadena2);i++){// estudiante\0
		printf("%c\n", cadena2[i]);
		cadena3[k] = cadena2[i];
		k++;
	}
	printf("%s\n",cadena3);
}

////

#include <stdio.h>

int calcularTamCadena( char c[]){
	int size = 0;
	while( c[size] != '\0' )
		size++;
	return size;
}

void concat( char c1[], char c2[], char c3[] ){
	int i = 0, j = 0;
	while( c1[ i ] != '\0'){
		c3[ i ] = c1[ i ];
		i++;
	}
	c3[ i ] = '-';
	i++;
	while( c2[ j ] != '\0'){
		c3[ i + j ] = c2[ j ];
		j++;
	}
	c3[ i + j ] = '\0';
	return;
}
int main(){
	char c1[ 4 ] = "Soy", c2[ 11 ] = "Estudiante", c3[15];
	printf("%d\n", calcularTamCadena(c1) );
	printf("%s\n", c1 );
	printf("%s\n", c2 );
	concat( c1, c2, c3 );
	printf("%s\n", c3 );
	return 0;
}
/////////////

/* Programa: Letra vocal */

#include <conio.h>
#include <stdio.h>

int main()
{
    char letra;

    printf( "\n   Introduzca una letra: " );
    scanf( "%c", &letra );

    if ( letra == 'a' || letra == 'A' ||
         letra == 'e' || letra == 'E' ||
         letra == 'i' || letra == 'I' ||
         letra == 'o' || letra == 'O' ||
         letra == 'a' || letra == 'U' )
        printf( "\n   ES UNA VOCAL" );
    else
        printf( "\n   NO ES UNA VOCAL" );

    getch(); /* Pausa */

    return 0;
}

////////
//TALLER 4
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define CAP 100
#define CAP1 250
#define CAP2 350

int calcularTamCadena( char c[] ){
	int size = 0;
	while( c[ size ] != '\0' )
		size++;
	return size;
}

void punto1(){
	char cadena[ CAP ];
	printf( "Digite la cadena: " );
	fflush( stdin );
	fgets( cadena, CAP, stdin );
	printf( "La cadena tiene %d caracteres\n", calcularTamCadena( cadena ) );
	printf( "\n" );
	return;
}

void punto2(){
	int i, bandera = 0;
	char cadena[ CAP1 ] = "en un comienzo, gabriel garcia Marquez penso en titular su novela La Casa, pero se decidio por Cien anios de soledad para evitar confusiones con la novela La Casa Grande, publicada en 1954 por su amigo, Alvaro Cepeda Samudio.";
	for( i = 0; i <= calcularTamCadena( cadena ); i++ ){
		if( cadena[ i ] == 'e' && bandera == 0 ){
			cadena[ i ] = 'E';
			bandera = 1;
		}
		else if( cadena[ i ] == 'g' && bandera <= 3 ){
			cadena[ i ] = 'G';
			bandera++;			
		}
	}
	printf( "%s\n", cadena );
	printf( "\n" );
	return;
}

void cuantasVecesEsta( char cadena[], char vocal ){
	int i, contador = 0;
	for( i = 0; i <= calcularTamCadena( cadena ); i++ ){
		if( vocal == cadena[ i ] ){
			contador++;
		}
	}
	printf( "Las veces que '%c' se encuentra en la oracion son: %d\n", vocal, contador );
	return;
}

void cambiarMayuscula( char cadena[], char vocal ){
	int i, bandera = 0;
	for( i = 0; i <= calcularTamCadena( cadena ); i++ ){
		if( bandera == 0 ){
			if( vocal == cadena[ i ] ){
				cadena[ i ] = toupper( cadena[ i ] );
			}
			bandera = 1;
		}
	}
	printf( "%s\n", cadena );
	return;
}

void cambioLoko( char cadena[], char vocal ){
	int i, bandera = 0; 
	for( i = 0; i <= calcularTamCadena( cadena ); i++){
		if( bandera == 0 ){
			if( vocal == cadena[ i ] ){
				cadena[ i ] = toupper( cadena[ i ] );
			}
			bandera = 1;
		}
	 	else{
			if( vocal == cadena[ i ] ){
				cadena[ i ] = tolower( cadena[ i ] );
			}
			bandera = 0;
		}	
	}
	printf( "%s\n", cadena );	 
	return;
}

void punto3(){
	char vocal, cadena[ CAP1 ] = "En un comienzo, Gabriel Garcia Marquez penso en titular su novela La Casa, pero se decidio por Cien anios de soledad para evitar confusiones con la novela La Casa Grande, publicada en 1954 por su amigo, Alvaro Cepeda Samudio.";
	printf( "Digite la vocal: " );
	fflush( stdin );
	scanf( "%c", &vocal );
	/*3.1*/cuantasVecesEsta( cadena, vocal );
	/*3.2*/cambiarMayuscula( cadena, vocal );
	/*3.3*/cambioLoko( cadena, vocal );
	printf("\n");
	return;
}

void punto4(){
	char otraCadena[ CAP2 ], cadena[ CAP2 ] = "Mi profe consiguio una camara vieja antes de la pandemia, pero como ahora es un profe digital, el profe se consiguio una camara nueva mas bonita. Pasado el tiempo se dio cuenta que la camara nueva aunque bonita era una camara mala, pero que bobada, al fin y al cabo, ya sea con una camara vieja o una camara nueva, nunca la muestra en clase.";
	int i, j;
	printf( "%s\n", cadena );
	for( i = 0, j = 0; i <= calcularTamCadena( cadena ); i++, j++){
		if( cadena[ i ] == 'c' )
			if( cadena[ i + 1 ] == 'a' )
				if( cadena[ i + 2 ] == 'm' )
					if( cadena[ i + 3 ] == 'a' )
						if( cadena[ i + 4 ] == 'r' )
							if( cadena[ i + 5 ] == 'a' )
								i += 7;
		otraCadena[ j ] = cadena[ i ]; 
	}
	printf( "%s\n", otraCadena );
	printf("\n");
	return;
}

void menu(){
	printf("Taller que siempre pone el CRACK\n");
	printf("1. Punto 1.\n");
	printf("2. Punto 2.\n");
	printf("3. Punto 3.\n");
	printf("4. Punto 4.\n");
	printf("0. Salir.\n");
	return;
}

int main(){
	int opc;
	do{
		menu();
		printf("Digite la opcion: ");
		scanf( "%d", &opc );
		switch( opc ){
			case 1:
				punto1();
				break;
			case 2:
				punto2();
				break;
			case 3:
				punto3();
				break;
			case 4:
				punto4();
				break;
		}
	}while( opc != 0 );
	return 0;
}
void matrizmostrar( int matriz[   ][ 4 ], int fila, int columna ){
	int i, j;
	for( i = 0; i < fila; i++ )
		for( j = 0; j < columna; j++ ){
			printf( "%d ", matriz[ i ][ j ] );
		printf("\n");
	}
	return;
}

void matrizllenar( int matriz[    ][ 4 ], int fila, int columna ){
	int i, j;
	for( i = 0; i < fila; i++ )
		for( j = 0; j < columna; j++ ){
			printf( "Ingrese un numero un numero: " );
			scanf( "%d\n", matriz[ i ][ j ] );
		}
		printf("\n");
	return;
}

void imprimirAlReves(int matriz [][4] , int fil, int col){
	int i,j;
	for (i = fil-1; i >= 0; i--) {
		for (j = col-1; j >= 0; j--) {
			printf(" %d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return;
}
///
#include <stdio.h>
#define MAX 4

void imprimirMatrizUnCiclo(int matriz[MAX][MAX], int filas, int columnas){
	int * pMatriz = matriz[0];
	for(int i =0; i<filas*columnas;i++){
		printf("%d ", *pMatriz);
		if(*pMatriz%MAX == 0){
			printf("\n");
		}
		*pMatriz++;
	}
}

int main(){

	int filas = MAX, columnas = MAX;
	int matriz[MAX][MAX] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	imprimirMatrizUnCiclo(matriz,filas,columnas);
	return 0;
}
////////////
/////////
/////////
//////////
//////////
/////////
//////////
///////////
///////////
#include "Matrices.h"

void llenarMatriz( int matriz[   ][ 4 ],  int fil, int col ){
	int i, j;
	for( i = 0; i < fil; i++ )
		for( j = 0; j < col; j++ ){
			printf( "Ingrese un numero un numero " );
			scanf( "%d", &matriz[ i ][ j ] );
		}
	return;
}

void mostrarMatriz( int matriz[   ][ 4 ],  int fil, int col ){
	int i, j;
	for( i = 0; i < fil; i++ ){
		for( j = 0; j < col; j++ )
			printf( " %d ", matriz[ i ][ j ] );
		printf( "\n" );
	}
	printf( "\n" );
	return;
}

void imprimirAlReves( int matriz[   ][ 4 ] , int fil, int col ){
	int i, j;
	for( i = fil-1; i >= 0; i-- ){
		for( j = col-1; j >= 0; j-- )
			printf( " %d ", matriz[ i ][ j ] );
		printf( "\n" );
	}
	printf( "\n" );
	return;
}

int esCuadrada( int fil, int col ){
	return fil == col;
}

void mostrarDiagonal( int matriz[][4] , int fil, int col ) {
	int i;
	if( esCuadrada( fil, col ) ){
		for( i = 0; i <= fil-1; i++ )
			printf( " %d ", matriz[ i ][ 0 ] );
		printf( "\n" );
	}
	else
		printf("No es es cuadrada\n");
	return;
}
void imprimirFilaFinalColumnaFinal( int matriz[   ][ 4 ] , int fil, int col ){
	int i, j;
	for( i = fil-1; i >= 0; i-- ){
		for( j = 0; j <= col-1; j++ )
			printf( " %d ", matriz[ i ][ j ] );
		printf( "\n" );
	}
	printf( "\n" );	
	return;
}

void imprimirFilaInicialColumnaFinal( int matriz[   ][ 4 ] , int fil, int col ){
	int i, j;
	for( i = 0; i <= fil-1; i++ ){
		for( j = col-1; j >= 0; j-- )
			printf( " %d ", matriz[ i ][ j ] );
		printf( "\n" );
	}
	printf( "\n" );	
	return;	
}

/*typedef struct Punto Punto;

struct Punto{
	int x, y;
};

void swap( int matriz[   ][ 4 ], int index1, int index2 ){
	int i, temp, encontro = 0, n = 0, lista[ 100 ]; 
	Punto punto;
	punto.x = index1;
	punto.y = index2;
	return;
	for ( i = 0; i <= n; i++ ){
		if( n = 0 ) break;
		if( punto.x == lista[ i ].x && punto.y == lista[ i ].y )
			encontro = 1;
	}
	if( encontro == 0 ){
		lista[ n ] = punto;
		n++;
		temp = matriz[ index1 ][ index2 ];
		matriz[ index1 ][ index2 ] = matriz[ index2 ][ index1 ];
		printf("Matriz[%d][%d]= %d\n", index1, index2, matriz[ index1 ][ index2 ] );
		matriz[ index2 ][ index1 ] = temp;
		printf("Matriz[%d][%d] = %d\n", index2, index1, matriz[ index2 ][ index1 ]);
		printf("\n");
	}
}*/

void transponerMatriz( int matriz [   ][ 4 ] , int fil, int col ){
	int i, j, transpuesta[ fil ][ col ];
	if( esCuadrada( fil, col ) ){
		for( i = 0; i <= fil-1; i++ )
			for( j = 0; j <= col-1; j++ )
				transpuesta[ j ][ i ] = matriz[ i ][ j ];
		printf("Original:\n");			
		mostrarMatriz( matriz, fil, col );
		printf("Transpuesta:\n");
		mostrarMatriz( transpuesta, fil, col );
	}
	else
		printf("No es es cuadrada\n");
	return;
}

void mostrarMatrizAritmPunt( int matriz [   ][ 4 ] , int fil, int col ){
	int * pMatriz = matriz[0], i, max = fil * col;
	for( i = 0; i < max; i++ ){
		printf( "%d ", *pMatriz );
		if( *pMatriz % max == 0 ){
			printf( "\n" );
		}
		*pMatriz++;
	}
	return;
} 

/////////////////////

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
							/*mostrarTablero( tableroinvisible, filas, columnas ); //Para ver donde ha quedado el raton
							printf("\n");*/
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
	//printf("Y = %d, X =  %d\n", y, x ); //Para Activar el Hack de GANAR :D 
	return;
}

//////////////////////OTROOOOO PERO FALLLLTAAAAAAAAAAAAAAAAAAAAAAAAA/////////////////////////
#include "Gonzito.h"

void mostrarMenu(){
	int opcion = -1, vidasGonzito = 3, x, y, filas = 5, columnas = 5, intentos = 10, i, encontroX, encontroY, rangoJugadas = 0;
	int tablerovisible[ 5 ][ 5 ] = { { 0, 0, 0, 0, 0} , { 0, 0, 0, 0, 0}, { 0, 0, 0, 0, 0}, { 0, 0, 0, 0, 0}, { 0, 0, 0, 0, 0} };
	int tableroinvisible[ 5 ][ 5 ] = { { 0, 0, 0, 0, 0} , { 0, 0, 0, 0, 0}, { 0, 0, 0, 0, 0}, { 0, 0, 0, 0, 0}, { 0, 0, 0, 0, 0} };
	int jugadasY[ 5 ];
	int jugadasX[ 5 ];
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
									printf( "\nNumero invalido., prueba del 0 al %d.\n", columnas-1 );				
							}
							encontroY = 0;
							encontroX = 0;
							for( i = 0; i <= rangoJugadas; i++ ){
								if( jugadasY[ i ] == y )
									encontroY = 1;
								else if( jugadasX[ i ] == x )
									encontroX = 1;
							}
							if( encontroY == 1 && encontroX == 1)
								printf( "Ya has hecho esa jugada.\n" );
							else{
								jugadasY[ rangoJugadas ] = y;
								jugadasX[ rangoJugadas ] = x;
								rangoJugadas++;
							}
							break;
						}
						if( tableroinvisible[ y ][ x ] == 0 ){
							printf( "\nNo le has pegado a Gonzito :C.\n" );
						}
						else{
							printf( "\nFelicidades!!!.\n" );
							printf( "Le has pegado a Gonzito!!!.\n\n" );
							tableroinvisible[ y ][ x ] = 1;
							/*mostrarTablero( tableroinvisible, filas, columnas ); //Para ver donde ha quedado el raton
							printf("\n");*/
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

/////////////////////

#include <stdio.h>

typedef struct Fish Fish;

struct Fish{
	char nombre[ 25 ];
	char especie[ 20 ];
	int numDientes;
	int edad;	
};

/*
typedef struct Fish{
	char nombre[ 25 ];
	char especie[ 20 ];
	int numDientes;
	int edad;	
}Fish;
*/

Fish llenarFish(){
	Fish fish;
	printf( "Ingrese el nombre del pez max 24 caracteres:\n" );
	fflush( stdin );
	fgets( fish.nombre, 25, stdin );
	printf( "Ingrese la especie del pez max 19 caracteres:\n" );
	fflush( stdin );
	fgets( fish.especie, 20, stdin );
	printf( "Ingrese el numero de dientes:\n" );
	scanf( "%d", &fish.numDientes );
	printf( "Ingrese la edad del pez:\n" );
	scan( "%d", &fish.edad )

	return fish;	
}

int main(){
	Fish tiburon;
	tiburon = llenarFish();
	return 0;
}
/////////////////////////////
#include <stdio.h>

typedef struct Netflix Netflix;

struct Netflix{
	char nombre[ 25 ];
	char genero[ 20 ];
	int yearProduccion;
	char tipo[ 12 ];	
};

Netflix llenarNetflix(){
	Netflix netflix;
	printf( "Ingrese el nombre de la pelicula, max 24 caracteres:\n" );
	fflush( stdin );
	fgets( netflix.nombre, 25, stdin );
	printf( "Ingrese el genero de la pelicula, max 19 caracteres:\n" );
	fflush( stdin );
	fgets( netflix.genero, 20, stdin );
	printf( "Ingrese el year de produccion de la pelicula:\n" );
	scanf( "%d", &netflix.yearProduccion );
	printf( "Ingrese el tipo de la pelicula, max 11 caracteres:\n" );
	fflush( stdin );
	fgets( netflix.tipo, 12, stdin );
	return netflix;	
}

Netflix  * llenarNetflixDinamica(){
	Netflix * pNetflix = malloc( sizeof( Netflix ) );
	if( pNetflix != NULL ){
		printf( "Ingrese el nombre de la pelicula, max 24 caracteres:\n" );
		fflush( stdin );
		fgets( pNetflix->nombre, 25, stdin );
		printf( "Ingrese el genero de la pelicula, max 19 caracteres:\n" );
		fflush( stdin );
		fgets( pNetflix->genero, 20, stdin );
		printf( "Ingrese el year de produccion de la pelicula:\n" );
		scanf( "%d", &pNetflix->yearProduccion );
		printf( "Ingrese el tipo de la pelicula, max 11 caracteres:\n" );
		fflush( stdin );
		fgets( pNetflix->tipo, 12, stdin ); 
		return pNetflix;		
	}
	else{
		return NULL;
	}
	//Despues de asignarla liberarla siempre	
}

void llenarNetflixByReferencia( Netflix * produccion ){
	printf( "Ingrese el nombre de la pelicula, max 24 caracteres:\n" );
	fflush( stdin );
	fgets( produccion->nombre, 25, stdin );
	printf( "Ingrese el genero de la pelicula, max 19 caracteres:\n" );
	fflush( stdin );
	fgets( produccion->genero, 20, stdin );
	printf( "Ingrese el year de produccion de la pelicula:\n" );
	scanf( "%d", produccion->yearProduccion );
	printf( "Ingrese el tipo de la pelicula, max 11 caracteres:\n" );
	fflush( stdin );
	fgets( produccion->tipo, 12, stdin );	
	return;
}

void llenarNetflixFull( Netflix arreglo[  ] , int veces ){
	int i;
	for( i = 0; i < veces; i++ ){
		printf( "Ingrese el nombre de la pelicula %d, max 24 caracteres:\n", i + 1 );
		fflush( stdin );
		fgets( arreglo[ i ].nombre, 25, stdin );
		printf( "Ingrese el genero de la pelicula %d, max 19 caracteres:\n", i + 1 );
		fflush( stdin );
		fgets( arreglo[ i ].genero, 20, stdin );
		printf( "Ingrese el year de produccion de la pelicula %d:\n", i + 1 );
		scanf( "%d", &arreglo[ i ].yearProduccion );
		printf( "Ingrese el tipo de la pelicula %d, max 11 caracteres:\n", i + 1 );
		fflush( stdin );
		fgets( arreglo[ i ].tipo, 12, stdin );
	}
	return;
}

void imprimirYearProduccion( Netflix arreglo[  ] , int veces ){
	int i;
	for( i = 0; i < veces; i++ ){
		if( arreglo[ i ].yearProduccion >= 2010 && arreglo[ i ].yearProduccion <= 2015 )
			printf("%s\n", arreglo[ i ].nombre );
	}	
	return;
}

int main(){
	Netflix * pNetflix = llenarNetflixDinamica();
	free( pNetflix );
	Netflix arregloNetflix[ 5 ];
	llenarNetflixByReferencia( &arregloNetflix[ 1 ])
	return 0;
}

/////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void usoMalloc(){
	int *p;
	p = malloc( sizeof ( int ) );
	if( p != NULL){
		*p = 5;
		printf( "Valor: %d, Direccion: %p", *p, p );
		free( p );
	}
}

int * retornoArreglomalloc(){
	//int arreglo[ 5 ];
	int * arreglo = malloc( sizeof( int ) * 5 );
	int i;
	if( arreglo == NULL )
		printf( "No pude reservar la memoria\n" );
	else{
		for( i = 0; i < 5; i++ ){
			arreglo[ i ] = i + i
		}
	}
	return arreglo;	
}

void arrayTamDinamico(){
	int tamArray, i = 0;
	int *pArray;
	do{
		printf( "Ingrese el tamaño del array: " );
		scanf( "%d", &tamArray );
	}while( tamArray <= 0 );
	pArray = malloc( tamArray * sizeof( int ) );
	if( pArray != NULL ){
		for( i = 0; i < tamArray; i++ ){
			printf( "Ingrese un numero: " );
			scanf( "%d", &pArray[ i ] )
		}
		for( i = 0; i < tamArray; i++ ){
			printf( "%d", pArray[ i ] );
		}
		free( pArray )
	}
	else{
		printf("No hay memoria");
	}
}
void arregloConRealloc(){
	int n = 10, i = 0;
	int * arreglo = malloc( n * sizeof( int ) );
	if( arreglo == NULL ){
		printf( "No es posible reservar la memoria\n" );
	}
	else{
		for( i = 0; i < n; i++ ){
			arreglo[ i ] = i; 
		}
		for( i = 0; i < n; i++ ){
			printf( "%d ", arreglo[ i ] ); 
		}
		print("\n");
		n = 5
		arreglo = ( int * ) realloc( arreglo, n * sizeof( int ) );
		for( i = 0; i < n; i++ ){
			printf( "%d ", arreglo[ i ] ); 
		}
		print("\n");		
	}
	free( arreglo );
}

void arregloConCalloc(){
	int n = 10, i = 0;
	int * arreglo = calloc( n, sizeof( int ) );
	if( arreglo == NULL ){
		printf( "No es posible reservar la memoria\n" );
	}
	else{
		for( i = 0; i < n; i++ ){
			printf( "%d ", arreglo[ i ] ); 
		}
		print("\n");
	}
	free( arreglo );

}

int main(){
	int * arreglo;
	arreglo = retornoArreglomalloc();
	printf( "%d", arreglo[ 1 ] );
	system( "PAUSE" );
	free( arreglo );
	usoMalloc()
	return 0;
}
////////////

#include <stdio.h>
#include <stdlib.h>

typedef struct Tienda Tienda;

struct Tienda{
	int codigo;
	char nombre[ 25 ];
	int referencia;
	int venta;
	int precio;
	int memoriaRam;
	int almacenamiento;
	int yearProduccion;
};

void agregarCelular( Tienda * celular, int n ){
	printf("\n");
	printf( "Ingrese el codigo del celular %d: ", n + 1 );
	fflush( stdin );
	scanf( "%d", &celular->codigo );
	printf( "Ingrese el nombre del celular %d, max 24 caracteres: ", n + 1 );
	fflush( stdin );
	fgets( celular->nombre, 25, stdin );
	printf( "Ingrese la referencia del celular %d: ", n + 1 );
	fflush( stdin );
	scanf( "%d", &celular->referencia );
	printf( "Ingrese el precio de venta del celular %d: ", n + 1 );
	fflush( stdin );
	scanf( "%d", &celular->venta );
	printf( "Ingrese el costo del celular %d: ", n + 1 );
	fflush( stdin );
	scanf( "%d", &celular->precio );
	printf( "Ingrese la memoria ram en GB del celular %d: ", n + 1 );
	fflush( stdin );
	scanf( "%d", &celular->memoriaRam );
	printf( "Ingrese el almacenamiento en GB del celular %d: ", n + 1 );
	fflush( stdin );
	scanf( "%d", &celular->almacenamiento );
	printf( "Ingrese el year de produccion del celular %d: ", n + 1 );
	fflush( stdin );
	scanf( "%d", &celular->yearProduccion );
	return;
}

void imprimirCelular( Tienda * celular ){
	printf( "  Codigo: %d\n", celular->codigo );
	printf( "  Nombre: %s", celular->nombre );
	printf( "  Referencia: %d\n", celular->referencia );
	printf( "  Precio de Venta: $%d\n", celular->venta );
	printf( "  Costo: $%d\n", celular->precio );
	printf( "  Memoria Ram: %d\n", celular->memoriaRam );
	printf( "  Almacenamiento: %d\n", celular->almacenamiento );
	printf( "  Year de Produccion: %d\n", celular->yearProduccion );
	printf( "\n" );
	return;
}

void mostrarUtilidad( Tienda * celular ){
	printf( "Referencia: %d\n", celular->referencia );
	printf( "\n" );
	return;
}

void mostrarYear( Tienda * celular ){
	printf( "Nombre: %s", celular->nombre );
	printf( "Precio de Venta: $%d\n", celular->venta );	
	printf( "\n" );
	return;
}	

void menu(){ 
	int tam = 10, n = 0, opcion, cuantosCelulares, i;
	Tienda * celulares;
	celulares = malloc( 10 * sizeof( Tienda ) );
	do{
		printf("Wembie's Telephones Company\n");
		printf( "\n1. Agregar Celulares\n" );
		printf( "2. Mostrar Celulares\n" );
		printf( "3. Adicionar Celulares\n" );
		printf( "4. Mostrar Mayor Utilidad\n" );
		printf( "5. Mostrar Nombre / Precio\n" );
		printf( "0. Salir\n\n" );
		printf( "Opcion: " );
		scanf( "%d", &opcion );
		printf("\n");
		switch( opcion ){
			case 0:
				break;
			case 1:
				if( n < tam ){
					printf( "Cuantos celulares deseas ingresar?: " );
					scanf( "%d", &cuantosCelulares );
					if( cuantosCelulares <= tam && ( cuantosCelulares + n ) <= tam){
						for( i = 0; i < cuantosCelulares; i++ ){
							agregarCelular( &celulares[ n ], n );
							n++;
						}
					}
					else{
						printf( "\nNo se puede exceder en la totalidad que es: %d\n\n", tam );
					}
				}
				else{
					printf( "No hay espacio dispobile\n" );
					printf( "Por favor adicina mas celulares en la opcion 3\n\n" );
				}
				break;
			case 2:
				if( n > 0){
					printf( "Mostrando Celulares: \n\n" );
					for( i = 0; i < n; i++ ){
						printf("Celular %d:\n", i + 1 );
						imprimirCelular( &celulares[ i ] );
					}
				}
				else{
					printf( "No has agregado ningun celular\n\n" );
				}
				break;
			case 3:
				if( n == tam ){
					int plusTam;
					printf( "Cuantos celulares deseas adicionar?: " );
					scanf( "%d", &plusTam );
					tam += plusTam;
					celulares = ( Tienda * ) realloc( celulares, tam * sizeof( Tienda ) );
					if( plusTam == 1){
						printf( "Se han colocado %d espacio mas\n", plusTam );
						printf( "Total: \n", tam );						
					}
					else if( plusTam > 1){
						printf( "Se han colocado %d espacios mas\n", plusTam );
						printf( "Total: \n", tam );	
					}
					else{
						printf( "No se ha colocado ningun espacio mas\n" );
					}
				}
				else{
					printf( "Todavia hay espacio.\n" );
					printf( "\nEspacio dispobile: %d\n\n", tam - n );
				}
				break;
			case 4:
				if( n > 0){
					int mayor = 0;
					printf( "Mostrando Referencia: \n\n" );
					for( i = 0; i < n; i++ ){
						if( ( celulares[ i ].venta - celulares[ i ].precio ) > mayor ){
							mayor = celulares[ i ].venta - celulares[ i ].precio;
						}
					}
					for( i = 0; i < n; i++ ){
						if( ( celulares[ i ].venta - celulares[ i ].precio ) == mayor ){
							mostrarUtilidad( &celulares[ i ] );
						}
					}
					printf( "\n" );
				}
				else{
					printf( "No has agregado ningun celular\n\n" );
				}
				break;
			case 5:
				if( n > 0){
					int yProduccion, mayorYear = 0;
					printf( "Digita el year de produccion: " );
					scanf( "%d", &yProduccion );
					for( i = 0; i < n; i++ ){
						if( celulares[ i ].yearProduccion > mayorYear ){
							mayorYear = celulares[ i ].yearProduccion;
						}
					}
					if( yProduccion > mayorYear){
						printf( "\nNo hay ningun celular con estos datos\n\n" );
					}
					else{
						printf( "\nMostrando Nombre / Precio: \n\n" );
						for( i = 0; i < n; i++ ){
							if( celulares[ i ].yearProduccion >= yProduccion && celulares[ i ].yearProduccion <= mayorYear ){
								mostrarYear( &celulares[ i ] );
							}
						}
					}
				}
				else{
					printf( "No has agregado ningun celular\n\n" );
				}
				break;
			default:
				printf( "Numero erroneo, intentalo de nuevo\n\n" );
				break;
		}
	}while( opcion != 0 );
	free( celulares );
	printf( "Has salido con exito!.\n" );
	return;
}

int main(){
	menu();
	return 0;
}
////////////////////////////////////////////////////////////////////////
//DINAMICO
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void print_matrix1(int *m, int r, int c);
void print_matrix2(int **m,int r,int c);

void print_matrix1(int *m,int r,int c)
{
    int y,x;

    for(y=0;y<r;y++) {
        for(x=0;x<c;x++) {
            printf("(%2d,%2d) = %04d; ",y+1,x+1,m[y*c+x]);
        }
    }
}

void print_matrix2(int **m,int r,int c)
{
    int y,x;

    for(y=0;y<r;y++) {
        for(x=0;x<c;x++) {
            printf("(%2d,%2d) = %04d; ",y+1,x+1,m[y][x]);
        }
    }
}

int main(void)
{
    int * matrix_memory;

    int **matrix; /* for example 2 */

    int rows=11,columns=5,x,y;

    matrix_memory = malloc(sizeof(*matrix_memory) * rows * columns);
    if (matrix_memory==NULL)
        return errno;

    /* Example one */
    for(y=0;y<rows;y++)
        for(x=0;x<columns;x++)
            matrix_memory[y*columns+x]=(y+1)*100+(x+1);

    print_matrix1(matrix_memory,rows,columns);
    puts("--------------------------------------------");

    /* Example two */
    matrix=malloc(sizeof(*matrix)*rows);
    if (matrix!=NULL) {
        for(y=0;y<rows;y++)
            matrix[y]=matrix_memory+y*columns;

        /* Enable to print the data of example 1 using matrix[y][x]
        print_matrix2(matrix,rows,columns);
        puts("--------------------------------------------");
        */

        for(y=0;y<rows;y++)
            for(x=0;x<columns;x++)
                matrix[y][x]=(rows-y)*100+(columns-x);

        print_matrix2(matrix,rows,columns);
    }

    /* end and free memory */
    free(matrix_memory);

    if (matrix!=NULL) {
        free(matrix);
        return 0;
    }

    return errno;
}

///////////////////////////////////////////////////////////////////////
//ESTATICO

#include<stdio.h>
int main()
{int mat[100][100];
int row,column,i,j;
printf("enter how many row and colmn you want:\n \n");
scanf("%d",&row);
scanf("%d",&column);
printf("enter the matrix:");

for(i=0;i<row;i++){
    for(j=0;j<column;j++){
        scanf("%d",&mat[i][j]);
    }

printf("\n");
}

for(i=0;i<row;i++){
    for(j=0;j<column;j++){
        printf("%d \t",mat[i][j]);}

printf("\n");}
}

///////////////////////////////////////////////////

//typedef enum{
	//ROPA = 0, JOYAS = 1, DIVERSION = 2, ALIMENTOS = 3
//} tipo_local_e;

typedef enum{
	LUNES, //0
	MARTES, //1
	MIERCOLES, //2
	JUEVES, //3
	VIERNES, //4
	SABADO, //5
	DOMINGO// 6
}diaSemana;

int main(){
	printf( "%d\n", MIERCOLES );
	diaSemana dia = 0;
	switch( dia ){
		case LUNES:
			printf( "Soy Lunes\n" );
			break;
		case MARTES:
			printf( "Soy Martes\n" );
			break;
		case MIERCOLES:
			printf( "Soy Miercoles\n" );
			break;
		default:
			printf("\n");
	}
	return 0;
}

////////////////////////////////

///QUICK SORT///

#include <stdio.h>

void qs(int lista[],int limite_izq,int limite_der)
{
    int izq,der,temporal,pivote;

    izq=limite_izq;
    der = limite_der;
    pivote = lista[(izq+der)/2];

    do{
        while(lista[izq]<pivote && izq<limite_der)izq++;
        while(pivote<lista[der] && der > limite_izq)der--;
        if(izq <=der)
        {
            temporal= lista[izq];
            lista[izq]=lista[der];
            lista[der]=temporal;
            izq++;
            der--;

        }

    }while(izq<=der);
    if(limite_izq<der){qs(lista,limite_izq,der);}
    if(limite_der>izq){qs(lista,izq,limite_der);}

}

void quicksort(int lista[],int n)
{
    qs(lista,0,n-1);
}

int main(int argc, const char * argv[])
{

    int lista[] ={100,56,0,1,-45,2,46,5,9,6,67,23,5};
    int size = sizeof(lista)/sizeof(int);

    printf("Lista Desordenada \n");

    for (int i=0; i<size; i++) {
        printf("%d",lista[i]);
        if(i<size-1)
            printf(",");
    }

    printf("\n");
    quicksort(lista,size);

    printf("Lista Ordenada \n");
    for (int i=0; i<size; i++) {
        printf("%d",lista[i]);
        if(i<size-1)
            printf(",");
    }

    return 0;
}

///MERGE SORT///

/* C program for Merge Sort */
#include <stdio.h>
#include <stdlib.h>
 
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}
 
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 
/* Driver code */
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    printf("Given array is \n");
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}

//swap

void swap_arrays(int *y, int *z)
{
    int x,temp;

    for(x=0;x<SIZE;x++)
    {
        temp = y[x];
        y[x] = z[x];
        z[x] = temp;
    }
}

//ORDENAMIENTO BURBUJA/////////////////

/*
 * Escrito por Jesús Manuel Mager Hois 
 * 
 * Descripción: Programa que genera listas
 *     aleatorias para después 
 *     ordenarlas por burguja.
 *
 * Lenguaje: ANSI C99
 *
 * Bajo licencia GPL 3
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define V_SIZE 10

int cont;

// Herramientas
void gen_rand(int v[], int size);
void print_vect(int v[], int size);
void swap(int v[], int o, int d);

//Algoritmos
void bubble_sort(int v[], int size);

int main(int argc, char *argv[])
{
 int v[V_SIZE];

 printf("############ Ordenando con Burbuja ############\n");
 gen_rand(v, V_SIZE);
 printf("No. Aleatorios: ");
 print_vect(v, V_SIZE);

 bubble_sort(v, V_SIZE);
 printf("No. Ordenados : ");

 print_vect(v, V_SIZE);
 return 0;
}


void gen_rand(int v[], int size)
{
 int i;

 cont = cont + 1;
 srand(time(NULL)*cont);
 for(i=0; i<size; i++)
  v[i]=rand()%100;
}


void print_vect(int v[], int size)
{
 int i;
 printf("[ ");
 for(i=0; i<size; i++)
  printf("%d ", v[i]);
 printf("]\n");
}

void swap(int v[], int o, int d)
{
 int temp;
 temp=v[d];
 v[d]=v[o];
 v[o]=temp;
}

void bubble_sort(int v[], int size)
{
 int i, j;
 for (j=0; j<size; j++)
  for (i=0; i<size-1; i++)
   if(v[i]>v[i+1])
    swap(v, i, i+1);
}

//////////////////////////////////////////////////////

void ordenarBurbujaBasicoAscendente(int arreglo[], int size) {
	int i, j, numIteraciones=0, numIntercambios=0;
	//Completar condiciones FOR
	for (i = 1;i<size; i++) {
		for (j = 0;j<size-1; j++) {
			numIteraciones++;
			if (arreglo[j]>arreglo[j+1]) {
				intercambiarElemento(arreglo,j,j+1);
				numIntercambios++;
				//Llamar a la operación intercambiar
					// [4,3,2,6,7,5,3]
			}
		}
	}
	printf("Numero de iteraciones del algoritmo %d: y de intercambios %d: \n" , 
		numIteraciones, numIntercambios);
}

/////////////////////////////////

//ARCHIVOS//

///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	FILE *fp;
	fp = fopen ( "fichero.in", "r" );        
	if (fp==NULL) {fputs ("File error",stderr); exit (1);}
	fclose ( fp );

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *archivo;
	char caracter;
	
	archivo = fopen("prueba.txt","r");
	
	if (archivo == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
        else
        {
            printf("\nEl contenido del archivo de prueba es \n\n");
            while((caracter = fgetc(archivo)) != EOF)
	    {
		printf("%c",caracter);
	    }
        }
        fclose(archivo);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 	FILE *archivo;
 	
 	char caracteres[100];
 	
 	archivo = fopen("prueba.txt","r");
 	
 	if (archivo == NULL)
 		exit(1);
 	else
        {
 	    printf("\nEl contenido del archivo de prueba es \n\n");
 	    while (feof(archivo) == 0)
 	    {
 		fgets(caracteres,100,archivo);
 		printf("%s",caracteres);
 	    }
            system("PAUSE");
        }
        fclose(archivo);
	return 0;
}

#include <stdio.h>

 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char buffer[100];
 	
 	fp = fopen ( "fichero.txt", "r" );
 	
 	fscanf(fp, "%s" ,buffer);
 	printf("%s",buffer);
 	
 	fclose ( fp );
 	
 	return 0;
}

#include <stdio.h>
 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char caracter;
 		
 	fp = fopen ( "fichero.txt", "a+t" ); //parámetro para escritura al final y para file tipo texto
 	
 	printf("\nIntroduce un texto al fichero: ");
 	
 	while((caracter = getchar()) != '\n')
 	{
 		printf("%c", fputc(caracter, fp));
 	}
 	
 	fclose ( fp );
 	
 	return 0;
}
#include <stdio.h>

int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char cadena[] = "Mostrando el uso de fputs en un fichero.\n";
 	
 	fp = fopen ( "fichero.txt", "r+" );
 	
 	fputs( cadena, fp );
 	
 	fclose ( fp );
 	
 	return 0;
}

#include <stdio.h>
 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char cadena[] = "Mostrando el uso de fwrite en un fichero.\n";
 	
 	fp = fopen ( "fichero.txt", "r+" );
 	
 	fwrite( cadena, sizeof(char), sizeof(cadena), fp ); //char cadena[]... cada posición es de tamaño 'char' 
 	
 	fclose ( fp );
 	
 	return 0;
}

#include <stdio.h>
 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char buffer[100] = "Esto es un texto dentro del fichero.";
 	
 	fp = fopen ( "fichero.txt", "r+" );
 	
 	fprintf(fp, buffer);
 	fprintf(fp, "%s", "\nEsto es otro texto dentro del fichero.");
 	
 	fclose ( fp );
 	
 	return 0;
}

/////////////////// VOLVIENDO//////////////////////////////// 

void ordenarSeleccion(int arreglo[], int size) {
	int i, j, posMinima,numIteraciones=0;
	for (i = 0; i < size - 1; i++) {
		//Indica la posicion del menor de todos los elementos
		posMinima = i;
		//Se inicia j una posición adelante de la i para
		// no comparar dos veces el mismo campo
		for (j = i + 1; j < size; j++) {		
			//Para ordenamiento ascendente. 
			//Si el valor del arreglo en la posición J es mayor
			//al de la posición i, entonces la posición j es el nuevo
			//elemento de la posMinima. 
			//Completar
			if( arreglo[j] < arreglo[posMinima])
				posMinima = j;
			numIteraciones++;
		}
		//Si hubo cambios en la posicion
		if (i != posMinima) {
			intercambiar(arreglo, i, posMinima);
		}
		
	}
	printf("Numero de iteraciones %d \n", numIteraciones);
}

//////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
int main() {
    char cadena1 [] = "Aprender a programar (linea 1)\n";
    char cadena2 [] = "requiere esfuerzo (linea 2)\n";
    char cadena3 [] = "y dedicacion (linea 3)";
    FILE* fichero;
    fichero = fopen("reporte.txt", "wt");
    fputs(cadena1, fichero);
    fputs(cadena2, fichero);
    fputs(cadena3, fichero);
    fclose(fichero);
    system( "notepad reporte.txt" );
    printf("Proceso completado");
    return 0; // Ejemplo aprenderaprogramar.com
}


//
//
//
//
//
//
//

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

//////////////////////////////////

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
///////

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