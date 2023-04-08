Algoritmo fotocopiadora
	Definir hojas, copias Como Entero;//Definimos e inicializamos
	hojas = 50;
	copias=0;
	
	Mostrar "Ingrese la cantidad de copias que va a realizar.";//Pedimos los datos y calculamos
	Leer copias;
	hojas = hojas - copias;
	
	Mostrar "Quedan ", hojas, " hojas en la bandeja.";//Mostramos el resultado
	
FinAlgoritmo
