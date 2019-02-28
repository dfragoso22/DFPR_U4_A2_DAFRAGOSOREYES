/* 
*	Autor: Daniel Eleazar Fragoso Reyes
*	Facilitadora: Rita Flores Asis
*	Fecha 7 de Febrero de 2019
*	Universidad Abierta y a Distancia de México
*	
*	Compara 2 números para determinar cuál es el mayor y si los números son positivos, negativos o neutros
*/

//Librerías
#include <stdio.h>
#include <stdlib.h>

//Punto de entrada
int main(int argc, char *argv[]) {
	//Declara las 2 variables
	int numero1, numero2;
	
	//Lee el primer número
	printf("Introduce el primer numero: ");
	scanf("%d",&numero1);
	
	//Lee el segundo número
	printf("Introduce el segundo numero: ");
	scanf("%d",&numero2);
	
	//Verifica si son iguales
	if(numero1==numero2){
		printf("Ambos numeros son iguales");
	}else if(numero1 > numero2){//Si no son iguales, verifica si el primero es mayor al segundo
		printf("El primer numero es mayor al segundo\n");
	}else if(numero2 > numero1){// Si no se dio la condición anterior, verifica que el segundo sea mayor al primero
		printf("El segundo numero es mayor al primero\n");
	}
	
	//Verifica si el primer número es negativo o positivo
	if(numero1<0){
		printf("El primer numero es negativo\n");
	}else if(numero1==0){
		printf("El primer numero es neutro\n");
	}else{
		printf("El primer numero es positivo\n");
	}
	
	//Verifica si el segundo número es negativo o positivo
	if(numero2<0){
		printf("El segundo numero es negativo\n");
	}else if(numero2==0){
		printf("El segundo numero es neutro\n");
	}else{
		printf("El segundo numero es positivo\n");
	}
	
	//Evita que la consola se cierre al mantenerse esperando por la entrada de un caracter
	getch();
	return 0;
}

