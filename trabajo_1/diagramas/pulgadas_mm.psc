Algoritmo pulgadas_mm
	
	Definir p, m, conversion Como Real;//Definimos e inicializamos
	p=0;
	m=25.4;
	conversion=0;
	
	Mostrar "Ingrese una cantidad de pulgadas para convertir a mm";//Pedimos el dato y calculamos
	Leer p;
	conversion=p*m;
	
	Mostrar p, " Pulgadas Son ", conversion, " mm";//Mostramos el resultado
	
FinAlgoritmo
