#include<iostream>
#include<stdio.h>
#include<conio.h>

/*
*	@autor Leslie Jimenez
*
*/



using namespace std;
float a,b,suma,e1,e2;
int valor;
/*
* funcion que saca la parte entera de un numero decimal
*	@numero es la suma de los dos numeros
*/
int parteEntera(float numero){
	valor = numero/1;
	return valor;
}
/*
* funcion que saca la parte decimal de un numero decimal
*	@numero es la suma de los dos numero
*/
double parteDecimal(float numero){
	double parte_decimal;
	parte_decimal = numero-parteEntera(numero);
	return parte_decimal;
}
/*
* funcion que aproxima si la parte decimal es mayor a .5
*	@decimal es la parte decimal de la suma
*/
int aproximacion(float decimal){
	if (decimal>=0.5){
		valor++;
	}
	return valor;
}
/*
* funcion que calcula el erro de aproximacion segun la formula
*	no tiene parametros solo modifica las constantes declaradas e imprime los valores
*/
void error(){
	system("COLOR FC");
	e1=valor-suma;
	e2=(e1/valor)*100;
	printf("\n Error: %.4f",e1);
	printf(" Porcentaje: %.4f",e2);
}


//funcion principal
main(){
	system("cls");
	system("COLOR 0A");
	cout<<"\t Redondeo Aritmetico\n";
	cout<<"########################################################\n";
	printf("\nTeclea tu primer numero: ");
	scanf("%f",&a);
	printf("\nTeclea tu segundo numero: ");
	scanf("%f",&b);
	
	suma=(a+b);
	printf("La suma es: %.2f",suma);
	
	
	printf("\n Parte entera: %i",parteEntera(suma));
	printf("\n Parte decimal: %.2f",parteDecimal(suma));
	printf("\n Aproximado: %i",aproximacion(parteDecimal(suma)));
	error();
	getch();
}

