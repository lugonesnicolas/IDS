Algoritmo impresora_3d
	
	//Calcular cuanto pesa 2 metros de filamento
	Definir filamento, diametro, radio, densidad, volumen, masa Como Real;//Definimos las variables y las inicializamos
	filamento=2;
	diametro=1.75;
	radio=0;
	densidad=1.25;
	volumen=0;
	masa=0;
	
	Mostrar "Primero pasamos la medida del filamento y el diametro a centimetros, y calculamos el radio";//Primeros calculos y conversiones
	filamento=filamento*100;
	diametro=diametro/10;
	radio=diametro/2;
	
	Mostrar "Segundo calculamos el volumen";//Calculamos la volumen
	volumen=Pi*(radio*radio)*200;
	
	Mostrar "Tercero calculamos la masa";//Calculamos la masa
	masa=densidad*volumen;
	
	Mostrar "En total se gastaron ", masa, "g de filamento";//Mostramos el resultado
	
FinAlgoritmo
