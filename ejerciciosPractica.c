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





