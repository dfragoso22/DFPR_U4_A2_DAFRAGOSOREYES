#include <stdio.h>
#include <stdlib.h>
/* 
*	Autor: Daniel Eleazar Fragoso Reyes
*	Facilitadora: Rita Flores Asis
*	Fecha 27 de Febrero de 2019
*	Universidad Abierta y a Distancia de México
*	
*	Programa que permite realizar transacciones de retiro y depósito sobre un saldo inicial de 0
*/
int main(int argc, char *argv[]) {
	float saldo = 0;
	float montoRetiraDeposita = 0;
	int accion;
	
	printf("Bienvenido a BancoC, su saldo es de: $%f\n",0);
	
	do{
		printf("Elija una opcion: \n1)Realizar retiro\n2)Realizar deposito\n3)Salir\n>");
		scanf("%d",&accion);
		switch(accion){
			case 1:
				printf("Introduzca la cantidad a retirar: ");
				scanf("%f",&montoRetiraDeposita);
				//Valida que el monto a retirar sea mayor a 0 y que el saldo sea suficiente para retirar
				if(montoRetiraDeposita>0 && saldo>=montoRetiraDeposita){
					saldo = saldo - montoRetiraDeposita;
					printf("Favor de tomar su efectivo, su saldo restante es de: $%f\n",saldo);
				}else{
					printf("Lo sentimos, no tiene los fondos suficientes o el monto a retirar es incorrecto, su saldo es de: $%f\n",saldo);
				}
				break;
			case 2:
				//En el caso de elegir 2 o depositar se pide la cantidad al usuario y se aumenta al saldo
				printf("Introduzca la cantidad a depositar: ");
				scanf("%f",&montoRetiraDeposita);
				//Valida que el monto a depositar sea mayor a 0
				if(montoRetiraDeposita>0){
					saldo = saldo + montoRetiraDeposita;
					printf("El deposito fue realizado correctamente, su saldo es de: $%f\n",saldo);
				}else{
					printf("El monto a depositar debe ser mayor a 0\n");
				}
				break;
		}
	}while(accion!=3);
	
	printf("Gracias por usar BancoC, su saldo final es de: $%f\n",saldo);

	return 0;
}
