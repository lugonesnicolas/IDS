Algoritmo triangulo_isoceles
	Definir a,b,c Como Entero;
	Escribir 'Ingrese los lados de un triangulo';
	Leer a,b,c;
	
	Si a<>b y b<>c y a<>c Entonces
		Escribir "El triangulo es Escaleno";
	SiNo
		Si a=b y b=c y a=c Entonces
			Escribir "El triangulo es Equilatero";
		SiNo
			Escribir "El triangulo es Isoceles";
		FinSi
	FinSi
FinAlgoritmo
