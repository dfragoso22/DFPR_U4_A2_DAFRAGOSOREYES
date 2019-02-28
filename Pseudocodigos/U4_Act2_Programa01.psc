// Autor: Daniel Eleazar Fragoso Reyes
// Facilitadora: Rita Flores Asis
// Fecha 27 de Febrero de 2019
// Universidad Abierta y a Distancia de México
// Compara 2 números para determinar cuál es el mayor y si los números son positivos, negativos o neutros

Algoritmo U4_Act2_Programa01
	Definir numero1,numero2 Como Entero
	Escribir 'Introduce el primer número: ' Sin Saltar
	Leer numero1
	Escribir 'Introduce el segundo número: ' Sin Saltar
	Leer numero2
	// Determina si los números son iguales o diferentes
	Si numero1=numero2 Entonces
		Escribir 'Ambos números son iguales'
	SiNo
		Si numero1>numero2 Entonces
			Escribir 'El primer número es superior al segundo'
		SiNo
			Si numero2>numero1 Entonces
				Escribir 'El segundo número es superior al primero'
			FinSi
		FinSi
	FinSi
	// Determina si los números son negativos o positivos
	Si numero1<0 Entonces
		Escribir 'El primer número es negativo'
	SiNo
		Si numero1=0 Entonces
			Escribir 'El primer número es neutro'
		SiNo
			Escribir 'El primer número es positivo'
		FinSi
	FinSi
	Si numero2<0 Entonces
		Escribir 'El segundo número es negativo'
	SiNo
		Si numero2=0 Entonces
			Escribir 'El segundo número es neutro'
		SiNo
			Escribir 'El segundo número es positivo'
		FinSi
	FinSi
FinAlgoritmo

