// Autor: Daniel Eleazar Fragoso Reyes
// Facilitadora: Rita Flores Asis
// Fecha 27 de Febrero de 2019
// Universidad Abierta y a Distancia de M�xico
// Compara 2 n�meros para determinar cu�l es el mayor y si los n�meros son positivos, negativos o neutros

Algoritmo U4_Act2_Programa01
	Definir numero1,numero2 Como Entero
	Escribir 'Introduce el primer n�mero: ' Sin Saltar
	Leer numero1
	Escribir 'Introduce el segundo n�mero: ' Sin Saltar
	Leer numero2
	// Determina si los n�meros son iguales o diferentes
	Si numero1=numero2 Entonces
		Escribir 'Ambos n�meros son iguales'
	SiNo
		Si numero1>numero2 Entonces
			Escribir 'El primer n�mero es superior al segundo'
		SiNo
			Si numero2>numero1 Entonces
				Escribir 'El segundo n�mero es superior al primero'
			FinSi
		FinSi
	FinSi
	// Determina si los n�meros son negativos o positivos
	Si numero1<0 Entonces
		Escribir 'El primer n�mero es negativo'
	SiNo
		Si numero1=0 Entonces
			Escribir 'El primer n�mero es neutro'
		SiNo
			Escribir 'El primer n�mero es positivo'
		FinSi
	FinSi
	Si numero2<0 Entonces
		Escribir 'El segundo n�mero es negativo'
	SiNo
		Si numero2=0 Entonces
			Escribir 'El segundo n�mero es neutro'
		SiNo
			Escribir 'El segundo n�mero es positivo'
		FinSi
	FinSi
FinAlgoritmo

