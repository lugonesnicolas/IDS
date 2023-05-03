Algoritmo sin_titulo
	// El usuario ingresara el stock de un producto, si hay más de 40  unidades, indicar alto stock, si hay menos de 10 indicar bajo stock.
	Definir a Como Entero;
	Escribir 'Ingrese el stock de un producto';
	Leer a;
	Si a>40 Entonces
		Escribir 'El stock del producto es alto';
	SiNo
		Si a<10 Entonces
			Escribir 'El stock del producto es bajo';
		SiNo
			Escribir 'El stock del producto esta regular';
		FinSi
	FinSi
FinAlgoritmo
