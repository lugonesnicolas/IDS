Algoritmo impresora_3d
	
	Definir filamento, diametro, radio, densidad, volumen, masa Como Real;//Definimos las variables y las inicializamos
	filamento=1;
	diametro=1.75;
	radio=0;
	densidad=1.25;
	volumen=0;
	masa=0;
	
	Mostrar "Primero pasamos la medida del filamento a centimetros, y calculamos el radio";//Primeros calculos y conversiones
	filamento=filamento*1000;
	radio=diametro/2;
	
	Mostrar "Segundo calculamos el volumen";//Calculamos la volumen que es PI*Radio^2*largo
	volumen=Pi*(radio^2)*filamento;
	
	Mostrar "Tercero calculamos la masa";//Calculamos la masa que lo hacemos por medio del dato que tenemos aplicando regla de 3
	masa=(volumen*densidad)/1000;
	
	Mostrar "En total se gastaron ", masa, "g de filamento";//Mostramos el resultado
	
FinAlgoritmo
