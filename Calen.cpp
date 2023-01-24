#include<stdio.h>
#include<stdlib.h> //Biblioteca de proposito general.
#include<string.h>
#include<time.h> //Libreria que contiene las funciones de tiempo del sistema.
 
struct agenda{ //Armamos una estructura que guardara datos para despues imprimirlos.
	char nom[30]; //Variables dentro de la estructura.
	int t_f;
	int t_m;
	char dir[30], email[40];
	int mes;
	int diaa;
	int esp;
    }control[100];
int cont=0; //Definimos el contador a 0 para guardar los datos de los clientes.
 
void agregar(); //Se usa el void para definir variables de retorno.
void buscar();
void clientes();
 
int main(){
	int opc; //Variable para usar en el switch case.
 
	do{
		system("cls"); //Nos permitira borrar el menu una vez seleccionada una opcion.
 
		printf("\t\t\t\t\t\t\t\t\t\t\tPaula Monge y Sebastian Casamen\n\n"); //El \t nos permite dar espacio(tab) a un texto.
		printf("\t\t\t\tBienvenido al sistema de gestion Hospitalaria\n\n");
		printf("MENU\n"); //Menu de cuatro opciones.
		printf("1.Agregar Cliente Nuevo\n");
		printf("2.Buscar en la Lista de Clientes\n");
		printf("3.Ver Todos los Clientes\n");
		printf("4.Salir\n");
 
		scanf("%d", &opc);
 
		switch(opc){ //El switch redirige la opcion que se haya dado anteriormente.
		case 1:
			agregar(); //Redirige a la pantalla de agregar cliente.
			system("pause"); //Se incorpora una pausa al programa.
			break;
 
		case 2:
			buscar(); //Redirige a la pantalla de buscar cliente.
			system("pause");
			break;
 
		case 3:
			clientes(); //Redirige a la pantalla que nos muestra todos los clientes.
			system("pause");
			break;
		}
	}while(opc!=4); //Cuando la opcion ingresada no coincide con las asiganadas se vuelve a repetir el programa.
 
	return 0;
}
 
void agregar(){
	system("cls"); //Limpia la pantalla para el nuevo menu.
 
	//Aqui escribimos un formulario y empezamos a guardar la informacion.
	
	fflush(stdin); //Este comando realiza una limpieza del buffer de entrada.
	printf("\n%d.Nombre: ", (cont+1)); //cont+1? nos permite ver el numero de clientes que ya se han ingresado.
	gets(control[cont].nom); //La funcion gets nos permite leer una cadena de caracteres y almacenarla.
 
	fflush(stdin);
	printf("\nNumero de Cedula: ");
	scanf("%d", &control[cont].t_f); //Este comando nos permite guardar una cadena de caracteres numericos.
 
	fflush(stdin);
	printf("\nTel\202fono movil: ");
	scanf("%d", &control[cont].t_m);
 
	fflush(stdin);
	printf("\nDirecci\242n: ");
	gets(control[cont].dir);
 
	fflush(stdin);
	printf("\nE-mail: ");
	gets(control[cont].email); //La funcion gets nos permite leer una cadena de caracteres y almacenarla.
 
	fflush(stdin);
	int esp; //Definimos una variable para escoger una de las espcialidades.
	int desc;
	int cardio,neuro,pedia,onco,psi,reum; //Definimos variables para poder asignar un valor numerico a todas las opciones.
	float re1,re2,re3,re4,re5,re6; //Definimos variables para realizar opreciones matematicas.
	float mu1,mu2,mu3,mu4,mu5,mu6;
	printf("\nEscoga la espcialidad:"); //Este texto nos permitira ver las diferentes especialidades.
	printf("\n1-.Cardiologia  2-.Neurologia   3-.Pediatria\n4-.Oncologia    5-.Psiquiatria  6-.Reumatologia\n\n");
	scanf("%d",&control[cont].esp); //Escanea la opcion escogida
	switch(control[cont].esp){ //y nos muestra diferentes presios segun lo que se haya seleccionado.
		case 1:
			cardio=55;
			mu1=cardio*0.3;
			re1=cardio-mu1; //Operaciones matematicas para aplicar un descuento.
			printf("Usted cuenta con seguro medico? 1.SI 2.NO\n"); //Pregunta que nos permitira o no asignar el descuento antes mencionado.
			scanf("%d",&desc);
			while (desc<1 || desc>2){ //Si el numero ingresado no corresponde a ninguna de las opciones saltara error.
            printf("ERROR, Ingrese 1 o 2\n");
            printf("Usted cuenta con seguro medico? 1.SI 2.NO\n"); //Si ubo el error antes mencionado volvera a imprimir el texto.
            scanf("%d",&desc);
            }
            if(desc==1){ //Con esta opcion imprime el valor con descuento.
            	printf("\nSe aplicara un descuento del 30 porciento.\n");
            	printf("\nEl coste de una consulta en Cardiologia aplicando descuento es de %.1f dolares.\n",re1);
			}
			if(desc==2){ //Imprimer el valor sin descuento.
				printf("\nEl coste de una consulta en Cardiologia es de %d dolares.\n",cardio);
			}
			break;
 
		case 2:
			neuro=85;
			mu2=neuro*0.3;
			re2=neuro-mu2;
			printf("Usted cuenta con seguro medico? 1.SI 2.NO\n");
			scanf("%d",&desc);
			while (desc<1 || desc>2){
            printf("ERROR, Ingrese 1 o 2\n");
            printf("Usted cuenta con seguro medico? 1.SI 2.NO\n");
            scanf("%d",&desc);
            }
            if(desc==1){
            	printf("\nSe aplicara un descuento del 30 porciento.\n");
            	printf("\nEl coste de una consulta en Neurologia aplicando descuento es de %.1f dolares.\n",re2);
			}
			if(desc==2){
				printf("\nEl coste de una consulta en Neurologia es de %d dolares.\n",neuro);
			}
			break;
 
		case 3:
			pedia=50;
			mu3=pedia*0.3;
			re3=pedia-mu3;
			printf("Usted cuenta con seguro medico? 1.SI 2.NO\n");
			scanf("%d",&desc);
			while (desc<1 || desc>2){
            printf("ERROR, Ingrese 1 o 2\n");
            printf("Usted cuenta con seguro medico? 1.SI 2.NO\n");
            scanf("%d",&desc);
            }
            if(desc==1){
            	printf("\nSe aplicara un descuento del 30 porciento.\n");
            	printf("\nEl coste de una consulta en Pediatria aplicando descuento es de %.1f dolares.\n",re3);
			}
			if(desc==2){
				printf("\nEl coste de una consulta en Pediatria es de %d dolares.\n",pedia);
			}
			break;
			
		case 4:
			onco=90;
			mu4=onco*0.3;
			re4=onco-mu4;
			printf("Usted cuenta con seguro medico? 1.SI 2.NO\n");
			scanf("%d",&desc);
			while (desc<1 || desc>2){
            printf("ERROR, Ingrese 1 o 2\n");
            printf("Usted cuenta con seguro medico? 1.SI 2.NO\n");
            scanf("%d",&desc);
            }
            if(desc==1){
            	printf("\nSe aplicara un descuento del 30 porciento.\n");
            	printf("\nEl coste de una consulta en Oncologia aplicando descuento es de %.1f dolares.\n",re4);
			}
			if(desc==2){
				printf("\nEl coste de una consulta en Oncologia es de %d dolares.\n",onco);
			}
			break;
		
		case 5:
			psi=65;
			mu5=psi*0.3;
			re5=psi-mu5;
			printf("Usted cuenta con seguro medico? 1.SI 2.NO\n");
			scanf("%d",&desc);
			while (desc<1 || desc>2){
            printf("ERROR, Ingrese 1 o 2\n");
            printf("Usted cuenta con seguro medico? 1.SI 2.NO\n");
            scanf("%d",&desc);
            }
            if(desc==1){
            	printf("\nSe aplicara un descuento del 30 porciento.\n");
            	printf("\nEl coste de una consulta en Psiquiatria aplicando descuento es de %.1f dolares.\n",re5);
			}
			if(desc==2){
				printf("\nEl coste de una consulta en Psiquiatria es de %d dolares.\n",psi);
			}
			break;
		
		case 6:
			reum=60;
			mu6=reum*0.3;
			re6=reum-mu6;
			printf("Usted cuenta con seguro medico? 1.SI 2.NO\n");
			scanf("%d",&desc);
			while (desc<1 || desc>2){
            printf("ERROR, Ingrese 1 o 2\n");
            printf("Usted cuenta con seguro medico? 1.SI 2.NO\n");
            scanf("%d",&desc);
            }
            if(desc==1){
            	printf("\nSe aplicara un descuento del 30 porciento.\n");
            	printf("\nEl coste de una consulta en Reumatologia aplicando descuento es de %.1f dolares.\n",re6);
			}
			if(desc==2){
				printf("\nEl coste de una consulta en Reumatologia es de %d dolares.\n",reum);
			}
			break;
		}
	
	fflush(stdin);
	int i,j,k,m,l,count; //variables para correr los ciclos.			
    int dia,mes,anio,semana,moduloMes,febrero,total_mes; //Variables para almacenar el tiempo de la estructura tm.
    int seleccion=1; //Variable para un ciclo de respuestas.			
    i=j=k=m=l=count=0; //Inicializo todas las variables a 0
 				
    time_t sisTime; //time_t es un typedef, asigno una varible de este tipo (sisTime).
    struct tm *tiempo; //Creo un puntero a la estructura tm, (ya definida en time.h).

    time(&sisTime); //time obtiene el tiempo del sistema y se lo pasa a la direccion de sisTime.
    tiempo=localtime(&sisTime); //Convierte los valores de sisTime a compatibles con la estructura tm y luego asigno ese valor a tiempo.

    dia=tiempo->tm_mday; //accedo al valor de dia de la estructura tm y se la asigno a dia.	
    control[cont].mes=tiempo->tm_mon; //accedo a mes de la estrutura tm y se la asigno a mes.
    anio=(tiempo->tm_year)+1900; //year es un contador a partir de 1900.

    printf("\n                  CALENDARIO\n");
    printf("Hoy es: %d/%d/%d \n\n\n",mes+1,dia,anio);//Imprime la fecha actual, mes+1?, es por que cuenta los meses desde 0.

    while(seleccion != 0){ //seleccion esta inicializada en 1, asi que entrara una vez, luego mas abajo se pide si desea volver a entrar a ciclo.
    if ((anio%4==0) && (anio%100!=0) || anio%400==0)//Bisiesto, debemos determinar si el año es bisiesto para luego realizar las agrupaciones
        febrero=29;
    else
        febrero=28;

    switch (control[cont].mes){ //Agrupacion de mes, los meses se caracterizan por tener 28,29,30,31 dias...entonces hacemos una agrupacion.
    case 3: case 5: case 8: case 10: 
    total_mes=30; 
    break; 
    case 1: 
    total_mes=febrero; 
    break; 
    case 0: case 2: case 4: case 6: case 7: case 9: case 11: 
    total_mes=31; 
    break; 
}
 
    switch (control[cont].mes){//Asignar nombre del mes, en esta parte se imprime la cabecera del calendario mes, y año.
        case 0:printf("\t\tENERO\t%d",anio);break;
        case 1:printf("\t\tFEBRERO\t%d",anio);break;
        case 2:printf("\t\tMARZO\t%d",anio);break;
        case 3:printf("\t\tABRIL\t%d",anio);break;
        case 4:printf("\t\tMAYO\t%d",anio);break;
        case 5:printf("\t\tJUNIO\t%d",anio);break;
        case 6:printf("\t\tJULIO\t%d",anio);break;
        case 7:printf("\t\tAGOSTO\t%d",anio);break;
        case 8:printf("\t\tSEPTIEMBRE\t%d",anio);break;
        case 9:printf("\t\tOCTUBRE\t%d",anio);break;
        case 10:printf("\t\tNOVIEMBRE\t%d",anio);break;
        case 11:printf("\t\tDICIEMBRE\t%d",anio);break;
    } 
    if (febrero==29){//Esto trata de sacarle el modulo 7 a los limites de cada mes, hasta llegar al mes que se cuenta, ya esta calculado el año bisiesto.
	    switch (control[cont].mes){
		    case 0:moduloMes=0;break;
		    case 1:moduloMes=3;break;
		    case 2:moduloMes=4;break;
		    case 3:moduloMes=0;break;
		    case 4:moduloMes=2;break;
		    case 5:moduloMes=5;break;
		    case 6:moduloMes=0;break;
		    case 7:moduloMes=3;break;
		    case 8:moduloMes=6;break;
		    case 9:moduloMes=1;break;
		    case 10:moduloMes=4;break;
		    case 11:moduloMes=6;break;
	    }
    }else{
	switch(control[cont].mes){
		case 0:moduloMes=0;break;
		case 1:moduloMes=3;break;
		case 2:moduloMes=3;break;
		case 3:moduloMes=6;break;
		case 4:moduloMes=1;break;
		case 5:moduloMes=4;break;
		case 6:moduloMes=6;break;
		case 7:moduloMes=2;break;
		case 8:moduloMes=5;break;
		case 9:moduloMes=0;break;
		case 10:moduloMes=3;break;
		case 11:moduloMes=5;break;
	}
}
    semana=((anio-1)%7+ ((anio-1)/4 -(3*((anio-1)/100+1)/4))%7+moduloMes+1%7)%7; //Calculo del primer dia del mes.

    printf("\nDo\tLu\tMar\tMier\tJue\tVier\tSab\n"); //Impresion de dias.

		for(m=0;m<semana;m++) //Dar espacios para que el primer dia calce correctamente con el mes.
		printf("\t");
		for(i=1;i<=total_mes;i++){ //Imprimir dias correspondientes al mes.
			if(i==8-semana||i==15-semana||i==22-semana||i==29-semana || i== 36-semana) //Los i==8-semana y los otros es para que la condicional
				printf("\n%d\t",i); //cada 7 dias imprima un \n es decir baje de linea y prosiga imprimiendo el calendario en un cuadrado...
			else	
				printf("%d\t",i);
		}

    printf("\n\nDesea buscar una fecha en otro mes? 0.NO  1.SI\n");
    scanf("%d",&seleccion);

    while (seleccion<0 || seleccion>1){
    printf("ERROR, Ingrese 1 o 0\n");
    printf("Desea buscar una fecha en otro mes? 1.SI 0.NO ");
    scanf("%d",&seleccion);
    }
    if (seleccion == 1){
    printf("\nIngrese Mes: ");
    scanf("%d",&control[cont].mes);
    
    control[cont].mes-=1;
    // Al inicio agregamos +1 al mes, ya que contábamos los meses de 0-11,
    // esta vez estamos contando de 1-12, por lo que le restamos uno.
    // Asi cuando el ciclo empiece de nuevo sumara 1, dejando el mes en el valor que deseamos.
}
    while (control[cont].mes+1>=13){ //Si se ingresa un mes mas alla del 12 saltara un error.
    printf("\nERROR, Ingrese un mes valido.");//Nos permitira ingresar nuevamente el mes.
    printf("\nIngres mes: ");
    scanf("%d",&control[cont].mes);
    
    control[cont].mes-=1;
    }

    if(seleccion == 0){
    	printf("\nIngrese el dia: ");
    	scanf("%d",&control[cont].diaa);
	}
 }
    while (control[cont].diaa<=dia && control[cont].mes+1==1){ //Si el dia ingresado es uno que ya paso, saltara un error.
    printf("ERROR, Ingrese una fecha valida."); //Nos permitira ingresar nuevamente el dia.
    printf("\nIngres el dia: ");
    scanf("%d",&control[cont].diaa);
    }
    
    printf("\nCita agendada correctamente para %d/%d/%d\n\n",control[cont].mes+1,control[cont].diaa,anio);
    
    cont++; //Contador que nos permitira seguir agregando informacion.
}
 
void buscar(){ //En esta funcion se aloja la opcion de buscar clientes.
	char busca[30]; //Definimos una variable con char que nos permita escribir el nombre del cliente.
	int i; //Definimos i para usar en un arreglo.
 
	system("cls"); //Limpia la pantalla del menu para mostrar solamente la de buscar cliente.
 
	fflush(stdin);
	printf("\nBuscar Cliente\nIngrese el nombre del cliente: ");
	gets(busca); //Nos permite leer la cadena de caracteres ingresada como un nombre.
 
	for(i=0;i<cont;i++){
		if(strcmpi(busca,control[i].nom)==0){ //Esta funcion compara el nombre escrito en la linea anterior y lo compara con alguno de los nombres que se escribieron
			printf("\nNombre: %s\n", control[i].nom); //en la funcion de ingresar datos de nuevo cliente.
			printf("Tel\202fono fijo: %d\n", control[i].t_f); //una vez comparadas ambas cadenas de caracteres se encuentran los datos guardados en el void anterior.
			printf("Tel\202fono m\242vil: %d\n", control[i].t_m);
			printf("Direcci\242n: %s\n", control[i].dir);
			printf("E-mail: %s\n", control[i].email);
			if(control[i].esp == 1){ //Estas funciones nos permitiran distinguir e imprimir la espcialidad escogida anteriormente.
				printf("Espedialidad: Cardiologia\n");
			}
			if(control[i].esp == 2){
				printf("Espedialidad: Neurologia\n");
			}
			if(control[i].esp == 3){
				printf("Espedialidad: Pediatria\n");
			}
			if(control[i].esp == 4){
				printf("Espedialidad: Oncologia\n");
			}
			if(control[i].esp == 5){
				printf("Espedialidad: Psiquiatria\n");
			}
			if(control[i].esp == 6){
				printf("Espedialidad: Reumatologia\n");
			}
			printf("Fecha de la cita: %d/%d/2023\n\n",control[i].mes+1,control[i].diaa);
		}
	}
 
}
 
void clientes(){ //Aqui se aloja la funcion demostrar todos los clientes.
	int aux, i, j; //definimos variables para usar en los arreglos.
	char auxc[50];
 
	system("cls"); //Borra la pantalla anterior y solo muestra la de la funcion buscar.
 
	for(i=0;i<cont-1;i++){ //Este arreglo nos permite guardar objetos.
		for(j=0;j<cont-1-i;j++){ //Este arreglo nos permite guardar informacion.
			if(strcmp(control[j].nom,control[j+1].nom)>0){ //Compara dos cadenas de caracteres y las ordena.
                //La funcion strcpy conpara caracteres y les asigna un valor.
				strcpy(auxc,control[j].nom); //Aqui compara la cadena inicial y su nuevo valor.
				strcpy(control[j].nom,control[j+1].nom);
				strcpy(control[j+1].nom,auxc); //Este conjunto de funciones compara las cadenas de textos y las mueve a un nuevo destino.
 
				aux = control[j].t_f;
				control[j].t_f = control[j+1].t_f;
				control[j+1].t_f = aux;
 
				aux = control[j].t_m; 
				control[j].t_m = control[j+1].t_m;
				control[j+1].t_m = aux; //aqui se compara y se asigna un nuevo destino a el conjunto de caracteres numericos.
 
				strcpy(auxc,control[j].dir);
				strcpy(control[j].dir,control[j+1].dir);
				strcpy(control[j+1].dir,auxc);
 
				strcpy(auxc,control[j].email);
				strcpy(control[j].email,control[j+1].email);
				strcpy(control[j+1].email,auxc);
 
				aux = control[j].esp;
				control[j].esp = control[j+1].esp;
				control[j+1].esp = aux;
				
				aux = control[j].mes;
				control[j].mes = control[j+1].mes;
				control[j+1].mes = aux;
				
				aux = control[j].diaa;
				control[j].diaa = control[j+1].diaa;
				control[j+1].diaa = aux;
			}
		}
	}
	printf("\nAgenda de Citas.\n");
 
	for(i=0;i<cont;i++){
		printf("\n%d.Nombre: %s\n",(i+1), control[i].nom); //Aqui imprime los nombres enumerados y en orden alfabetico.
		printf("Numero de Cedula: %d\n", control[i].t_f);
		printf("Tel\202fono m\242vil: %d\n", control[i].t_m);
		printf("Direcci\242n: %s\n", control[i].dir);
		printf("E-mail: %s\n", control[i].email);
		if(control[i].esp == 1){ //Estas funciones nos permitiran distinguir e imprimir la espcialidad escogida anteriormente.
				printf("Espedialidad: Cardiologia\n");
			}
			if(control[i].esp == 2){
				printf("Espedialidad: Neurologia\n");
			}
			if(control[i].esp == 3){
				printf("Espedialidad: Pediatria\n");
			}
			if(control[i].esp == 4){
				printf("Espedialidad: Oncologia\n");
			}
			if(control[i].esp == 5){
				printf("Espedialidad: Psiquiatria\n");
			}
			if(control[i].esp == 6){
				printf("Espedialidad: Reumatologia\n");
			}
		printf("Fecha de la cita: %d/%d/2023\n",control[i].mes+1,control[i].diaa); //Imprime la fecha de la cita.
	}
 
}
