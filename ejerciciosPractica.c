/*
//Problema 1
#include <stdio.h>
int main(){
	int n1;
	int n2;
	printf("Introduce el numero 1: \n");
	scanf("%d",&n1);
	printf("Introduce el numero 2: \n");
	scanf("%d",&n2);
	printf("La suma es: %d",n1+n2);
	return 0;
}
*/
/*
// Problema 2
#include <stdio.h>
#include <math.h>

int main(){
	float area;
	float radio;
	printf("Introduce el radio de tu circulo: ");
	scanf("%f",&radio);
	area = M_PI * pow(radio , 2);
	printf("El area es %.2f ", area);
	
	return 0;
}
*/
// Problema 3
/*
#include <stdio.h>
int main(){
	float cel;
	printf("Introduce la cantidad de grados celsius: ");
	scanf("%f",&cel);
	float fah = ((9.0/5)*(cel)+32);
	printf("el resultado son %.2f grados Fahrenheit",fah);
	
	
	return 0;
}
*/
// Problema 4
/*
#include <stdio.h>
int main(){
	int n;
	printf("introduce el numero que quieres saber si es par o impar: ");
	scanf("%d",&n);
	if (n % 2 == 0)
		printf("el numero es par");
	else
		printf("el numero es impar");
	return 0;
}
*/
// Problema 5
/*
#include <stdio.h>
int main(){
	int n,i;
	int fact = 1;
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		fact = fact * i;
	}
	printf("%d",fact);
	return 0;
}
*/
// Problema 6
/*
#include <stdio.h>
int main(){
	int i,n;
	printf("introduce el numero del que te gustaria la tabla: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		printf("%d x %d = %d\n",n,i,n*i);
	}
	
	return 0;
}

*/
// Problema 7
/*#include <stdio.h>
int main(){
	int n,i,cont=0;
	printf("Introduce un numero para saber si es primo: "); scanf("%d",&n);
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			cont ++;
		}
	}
	if (cont > 2)
		printf("%d no es primo",n);
	else
		printf("%d es primo",n);
	return 0;
}
*/
//problema 8 salario
/*#include <stdio.h>
int main(){
	float salario;
	float porcentaje = 0.10;
	printf("Introduce tu salario: "); scanf("%f",&salario);
	porcentaje = salario * porcentaje;
	printf("Felicidades, tu nuevo salario es: %.2f",salario + porcentaje);
	
	return 0;
}
*/
//problema 9 switch case
/*
#include <stdio.h>
int main(){
	int caso;
	printf("Introduce el caso: "); scanf("%d",&caso);
	switch(caso){
		case 1:
			printf("Caso 1");
			break;
		case 2:
			printf("Caso 2");
			break;
		default:
			printf("default");
	}
}
*/
//problema 10 menor de dos numeros con el if corto
/*#include <stdio.h>
int main(){
	int n1,n2;
	printf("Introduce el primer numero: "); scanf("%d",&n1);
	printf("Introduce el segundo numero: "); scanf("%d",&n2);
	(n1>n2) ? printf("%d es mayor a %d",n1,n2) : printf("%d es mayor a %d",n2,n1);
	return 0;
}
*/

//problema 11 numeros enteros a romanos
/*
#include <stdio.h>
int main(){
	
	int numero, millar, centena, decena, unidad;
	printf("Introduce el numero que quieres convertir: "); scanf("%d",&numero);
	unidad = numero % 10;
	numero = numero / 10;
	decena = numero % 10;
	numero = numero / 10;
	centena = numero % 10;
	numero = numero / 10;
	millar = numero % 10;
	
	
	switch(millar){
		case 1: printf("M");break;
		case 2: printf("MM");break;
		case 3: printf("MMM");break;
	}
	
	switch(centena){
		case 1: printf("C");break;
		case 2: printf("CC");break;
		case 3: printf("CCC");break;
		case 4: printf("CD");break;
		case 5: printf("D");break;
		case 6: printf("DC");break;
		case 7: printf("DCC");break;
		case 8: printf("DCCC");break;
		case 9: printf("CM");break;
	}
	
	switch(decena){
		case 1: printf("X");break;
		case 2: printf("XX");break;
		case 3: printf("XXX");break;
		case 4: printf("XL");break;
		case 5: printf("L");break;
		case 6: printf("LX");break;
		case 7: printf("LXX");break;
		case 8: printf("LXXX");break;
		case 9: printf("XC");break;
	}
	
	switch(unidad){
		case 1: printf("I");break;
		case 2: printf("II");break;
		case 3: printf("III");break;
		case 4: printf("IV");break;
		case 5: printf("V");break;
		case 6: printf("VI");break;
		case 7: printf("VII");break;
		case 8: printf("VIII");break;
		case 9: printf("IX");break;
	}
	
	return 0;
}
*/
//problema 12 cajero
/*
#include <stdio.h>
int main(){
	
	int opcion, cantidad;
	int saldo = 3000;
	printf("Bienvenido al cajero\nElije una opcion\n1) Depositar\n2) Retirar\n3) Salir del cajero\n");
	do{
		printf("\nElige una opcion: "); scanf("%d",&opcion);
		switch(opcion){
			case 1:
				printf("\nCuanto quieres depositar?: "); scanf("%d",&cantidad);
				saldo += cantidad;
				printf("Tu nuevo saldo es: %d\n",saldo);
				break;
			case 2:
				printf("Cuanto quieres retirar?: "); scanf("%d",&cantidad);
				if(cantidad > saldo){
					printf("No puedes retirar mas del dinero que tienes");
					break;
				}else{
					saldo -= cantidad;
					printf("Tu nuevo saldo es: %d\n",saldo);
					break;
				}
			case 3:
				printf("Adios");
				break;
			default:
				printf("No se entendió la opcion.");
				
		}
	}while(opcion != 3);
	return 0;
}
*/
//														problema 13 Cambio de color usando stdlib
/*#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Escribe el 1"); scanf("%d",&n);
	if(n == 1){
		system("color 2");
	}
	
	return 0;
}
*/
//															Problema 14 factorial
/*
#include <stdio.h>
int main(){
	int i, fac,sum=1;
	printf("Introduce el numero del que quieres saber el factorial: "); scanf("%d",&fac);
	for(i=1;i<=fac;i++){
		sum *= i;
	}
	printf("el resultado es: %d",sum);
	
	return 0;
}
*/
// 																15 funciones
/*
#include <stdio.h>
int sumar(int a, int b);
int main(){
	int n1,n2;
	printf("Introduce el primer numero que quieres sumar: "); scanf("%d",&n1);
	printf("Introduce el segundo numero que quieres sumar: "); scanf("%d",&n2);
	printf("El resultado es %d",sumar(n1,n2));
	return 0;
}

int sumar(int a, int b){
	int c = a + b;
	return c;
}
*/
// 																16 recursividad
/*

#include <stdio.h>
void recursivo(int a);
int main(){
	recursivo(5);
	return 0;
}
void recursivo(int a){
	if (a < 0)
		return;
	else{
		printf("Numero actual %d\n",a);
		recursivo(a-1);
	}
}

*/
// 																17 recursividad factorial
/*
#include <stdio.h>
int factorial(int a, int i, int producto);
int main(){
	printf("%d",factorial(5, 1, 1));
	return 0;
}

int factorial(int a, int i, int suma){
	if(i > a){
		return suma;
	}else{
		suma = factorial(a,i+1,suma*i);
	}
	
}*/
//																18 numero par o impar
/*
#include <stdio.h>
void paroimpar(int a);
int main(){
	paroimpar(4);
	return 0;
}
void paroimpar(int a){
	if(a%2 == 0)
		printf("El numero %d es par",a);
	else
		printf("El numero %d es impar",a);
}
*/
//															19 - de 5 en 5 while y for
/*
#include <stdio.h>
int main(){
	int n, i, a, j=0;
	printf("Multiplos de 5 de 1 hasta el: "); scanf("%d",&n);
	printf("Hacerlo con un\n1) for\n2) while\nOpcion: "); scanf("%d",&a);
	switch(a){
		case 1:
			for(i=0;i<=n;i+=5){
			printf("%d\n",i);
		}
		break;
		case 2:	
			while(j<n){
				printf("%d\n",j);
				j+=5;
			}
			break;
		default:
			printf("No se entendio la opcion");
			break;
	}
	return 0;
}
*/
//															20 - positivo negativo
/*
#include <stdio.h>
int main(){
	int n = 3;
	int i;
	int resultado = 0;
	for(i=1;i<=n;i++){
		if(i % 2 == 0){
			resultado -= i;
		}else{
			resultado += i;
		}
	}
	printf("resultado-: %d\n",resultado);
	return 0;
}
*/
//															21 - Numero primos
/*
#include <stdio.h>
void esprimo(int n);
int main(){
	
	int a,i;
	printf("Hasta que numero quieres tu lista de numeros primos: "); scanf("%d",&a);
	for(i=0;i<=a;i++){
		esprimo(i);
	}
	return 0;
}

void esprimo(int n){
	int i, cont = 0;
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			cont++;
		}	
	}
	if(cont > 2){
		return;
	}else{
		printf("El numero %d es primo\n",n);
	}
}
*/
// 												22 Suma de los primeros 20 numeros pares

/*
#include <stdio.h>
int main(){
	int i,n=20,cont=0,suma=0;
	for(i=0 ; i<20 ;i++){
		cont +=2;
		suma +=cont;
		printf("%d\n",cont);
	}
	printf("el resultado es %d\n",suma);
	return 0;
}

*/
//												23 imprimir todas las letras
/*
#include <stdio.h>
int main(){
	char letra = 'a';
	do{
		printf("%c\n",letra);
		letra++;
	}while(letra <= 'z');	
	return 0;
}
*/
//												24 arbol de asteriscos
/*
#include <stdio.h>
int main(){
	int i,n,j;
	printf("De cuantos pisos quieres tu torre? "); scanf("%d",&n);
	for(i=0; i<n ; i++){
		printf("\n");
		for(j=0; j<=i; j++){
			printf("*");
		}
	}
	return 0;
}
*/
//												25 punteros
/*
#include <stdio.h>
int main(){
	int a = 10;
	int *b = &a;
	printf("valor de a %d\n",a);
	printf("valor de b %d\n",*b);
	printf("direccion de a %d\n",&a);
	printf("direccion de b %d\n",b);
	return 0;
}
*/
//												26 swap con punteros
/*
#include <stdio.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a = 5;
	int b = 10;
	printf("el valor de a es %d y el de b es %d\n",a,b);
	swap(&a,&b);
	printf("el valor de a es %d y el de b es %d",a,b);
	return 0;
}
*/
//												27 strcpy string.h
// COPIA UNA CADENA EN OTRO LADO strcpy(destino, origen);
/*
#include <stdio.h>
#include <string.h>
int main(){
	char origen[] = "Programacion";
	char destino[12];
	strcpy(destino,origen);
	printf("%s\n",destino);
	printf("%p\n",&destino);
	printf("%p\n",&origen);
	return 0;
}
*/
//												28 strcat string.h
// CONCATENA 2 CADENAS DE TEXTO STRCAT(DESTINO, FUENTE)
/*
#include <stdio.h>
#include <string.h>
// concatena 2 cadenas
int main(){
	char cadena1[] = "Juan";
	char cadena2[] = "Pablo";
	strcat(cadena1," ");
	strcat(cadena1,cadena2);
	printf("%s",cadena1);
	
	return 0;
}
*/
//												29 strcmp string.h
// COMPARA 2 CADENAS, ES KEYSENSITIVE strcmp(referencia,comparacion); si son iguales, devuelve 0
/*
#include <stdio.h>
#include <string.h>
int main(){
	char contrasena[] = "hola";
	char intento[10];
	printf("Introduce una contrasena: "); scanf("%s",&intento);
	if(strcmp(contrasena,intento) == 0)
		printf("Contrasena correcta");
	else
		printf("Contrasena incorrecta");
	return 0;
}
*/
//												29.2 strcmp string.h uso real
/*
#include <stdio.h>
#include <string.h>
int main(){
	char contrasena[] = "hola";
	char intento[128];
	int cont = 3;
	printf("Ingrese la contrasena para entrar: ",cont); fflush(stdin); scanf("%s",&intento);
	do{
		if(strcmp(contrasena, intento) != 0){
			cont--;
			printf("Contrasena Incorrecta, intentos restantes %d intentelo de nuevo: ",cont); scanf("%s",&intento);
		}else{
			printf("Contrasena correcta");
			break;
		}
	}while(cont > 1);
	return 0;
}
*/
//											30 strlen string.h
/*
#include <stdio.h>
#include <string.h>
int main(){
	char cadena[500];
	printf("Escribe cualquier palabra: ");
	scanf("%s",&cadena);
	printf("La longitud de la palabra es de %d digitos",strlen(cadena));
	return 0;
}
*/

// 											31 strlwr string.h
/*
#include <stdio.h>
#include <string.h>
int main(){
	char mayus[] = "HOLA BUENAS TARDES";
	char minus[20];
	strcpy(minus,mayus);
	strlwr(minus);
	printf("Cadena en mayusculas: %s\n",mayus);
	printf("Cadena en minusculas: %s",minus);
	return 0;
}
*/
// 											32 strupr string.h
/*
#include <stdio.h>
#include <string.h>
int main(){
	char minus[] = "hola buenas tardes";
	char mayus[20];
	strcpy(mayus,minus);
	strupr(mayus);
	printf("Cadena en minusculas: %s\n",minus);
	printf("Cadena en mayusculas: %s",mayus);
	return 0;
}
*/
// 						33 strrchr string.h devuelve la cadena a partir de un caracter
#include <stdio.h>
#include <string.h>
int main(){
	char rest[] = "abcdefghijklmnopqrstuvxyz";
	char car;
	printf("A partir de que letra quieres buscar? "); scanf("%c",&car);
	printf("%s",strrchr(rest,car));
	return 0;
}














