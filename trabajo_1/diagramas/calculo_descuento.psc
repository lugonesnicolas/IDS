Algoritmo calculo_descuento
	
	Definir  precio, descuento Como Real;//Definimos/Inicializamos
	precio=0;
	descuento=0;
	
	Mostrar "Que precio y que descuento tiene el producto";//Pedimos los datos
	Leer precio, descuento;
	descuento=descuento/100;
	precio=precio*descuento;
	
	Mostrar "Su producto con descuento tiene un valor de:", precio, " pesos";//Mostramos el resultado
	
FinAlgoritmo
