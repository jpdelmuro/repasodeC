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
//problema 13 Cambio de color usando stdlib
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
//Problema 14 factorial
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
// 15 funciones
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
