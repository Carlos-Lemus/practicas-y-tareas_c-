//Hecho por Carlos Alfonso Lemus Rodezno LR18001

/*
Este programa consiste en un juego de X y O hecho para entretener a los usuarios
*/

//Libreria iostream permite usar sus funciones
#include <iostream>
//Libreria windows.h permite usar sus funciones
#include <windows.h>
//Libreria stdlib.h permite usar sus funciones
#include <stdlib.h>
//Libreria time.h permite usar sus funciones
#include <time.h>
//Libreria conio.h permite usar sus funciones
#include <conio.h>

//Espacio de nombre a usar std permite abreviar el codigo
using namespace std;

/*
declaracion de funcion partida en esta funcion se ejecutaran las lineas de codigo y las funciones
que permitiran jugar al juego X y O
*/
void partida();
//declaracion de funcion para visualizar la tabla de los en la que se jugara
void mostrar(char tj[3][3]);
/* declaracion de funcion tablero esta complementa la funcion mostrar ya que asi se visualiza mejor la tabla
en la que se jugara*/
void tablero(char tj[3][3]);
//declaracion de funcion permite al usuario ingresar la posicion en la que el usuario desee coloca la X en el tablero 
void pos_tab(char tj[3][3]);
//declaracion de funcion que permitira rellenar el tablareo de 'O' y simular una partida 
void jugador2(char tj[3][3]); 
//declaracion de funcion que evaluara el ganador de la partida
int ganador(char tj[3][3]);
//declaracion de funcion que 
void gotoxy(int x, int y);
//declaracion de funcion que permite dar un tiempo de carga
void cargar();
//declaracion Funcion que permite limpiar la pantalla
void clear();
//declaracion de la Funcion para evitar errores de datos
void errordato();


//cuerpo del programa
int main() {
	
	//delcaracion de variable opcion de iipo entero que almacenara la opcion elejida por el usuario
	int opcion;
	
	//funcion que limpia la pantalla de los textos
	clear();
	
	//Añade color a las letras y el fondo de la consola
	system("color 1E");
	
	//ciclo do-while para evitar que el usuario ingrese una opcion que no se encuentra
	do {
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(43,3);
		cout << "************************************" << endl;
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(43,4);
		cout << "*                                  *" << endl;
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(43,5);
		cout << "*            Bienvenido            *" << endl;
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(43,6);
		cout << "*        ¡Comienza a jugar!        *" << endl;
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(43,7);
		cout << "*                                  *" << endl;
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(43,8);
		cout << "************************************" << endl;
		
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(43,10);
		cout << "Opciones." << endl;
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(43,11);
		cout << "1.Iniciar Partida" << endl;
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(43,12);
		cout << "2.Salir del juego" << endl;
	
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(43,14);
		cout << "Ingresa una opcion: ";
		cin >> opcion;
		
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(43,17);
		cout << "Presione un boton para continuar." << endl;
		
		//funcion que detiene el programa hasta que el usario presiones un boton
		getch();
		
	} while(opcion < 1 || opcion > 3);
	
	//setencia switch que permitira elejir una opcion
	switch(opcion) {
		
		case 1:
			//Si el usuario ingresa esta opcion se dirijira a la funcion partida()
			partida();
			break;
			
		case 2:
			//Funcion para limpiar el texto de la pantalla
			clear();
			//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
			gotoxy(43,6);
			cout << "¡Gracias por jugar!\n" << endl;
			break;
	}
	
	//Para evitar que se cierre la pantalla despues de haber realizados las acciones
	system("PAUSE");
	//No retorna ningun valor
	return 0;
}

void partida(){
	
	//Añade color a las letras y el fondo de la consola
	system("color 1F");
	
	/* Variable partida matriz bidimensional almacenara los datos para la partida de X y O tambien permitira
	visualizar una tabla de la partida en la consola */
	char juego[3][3];
	/*variable turnos contador que se encargara de evitar que se juegue en mas veces de
	la que el juego X y O permite*/ 
	int turno = 0;
	//Variable que almacenara la funcion ganador() que mostrara el resultado de la partida
	int resultado;
	
	//Funcion para limpiar el texto de la pantalla	
	clear();	
	
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(53,4);	
	cout << "INSTRUCCIONES.";	
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(30,6);
	cout << "Ingrese un numero de las posiciones indicadas para colocar" << endl;
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(30,7);
	cout << "una X, las O seran colocadas de manera automatica, para "  << endl;
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(30,8);
	cout << "ganar coloque tres X en la misma linea no importa si es " << endl;
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(30,9);
	cout << "en el sentido vertical o horizontal pero tambien puede ser" << endl;
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(30,10);
	cout << "en sentido cruz (pero no puede ser dos o mas a la vez, solo"  << endl;
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(30,11);
	cout << "se puede ganar en una poscion a la vez)."  << endl;
	
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla	
	gotoxy(54,14);
	cout << " 1 | 2 | 3 " << endl;
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(54,15);
	cout << "-----------" << endl;
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(54,16);
	cout << " 4 | 5 | 6 " << endl;
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(54,17);
	cout << "-----------" << endl;
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(54,18);
	cout << " 7 | 8 | 9 " << endl;
	
	//Funcion que permite un tiempo de espera para que el juego cargue
	cargar();
	
	//funcion mostrar para para visualizar los numeros en la tabla
	mostrar(juego);
	//ciclo do-while que se encargara que de que no se pueda juegue mas veces de lo que el juego X y O permite
	do{
		//funcion que limpia la pantalla de los textos
		clear();	
		
		//funcion que permite visualizar la tabla
		tablero(juego);
		
		//Condicion if para determinar el turno en que el usuario
		if(turno % 2==0)
		{
			//funcion posicion permite al usuario ingresar la posicion en la que desea poner la X 
			pos_tab(juego);
		}
		//Si la condicion if es falsa se ingresara qui
		else {
			//funcion oponente permite colocar una O en el tablero sin ocupar una psocion que contenga X
			jugador2(juego);
		}
		
		//salto de linea
		cout << endl;
		
		//funcion tablero para visualizar el tablero
		tablero(juego);
		
		//Se almacena la funcion ganador() para saber el resultado de la partid
		resultado = ganador(juego);
		
		//contador turno llevara la cuenta de las veces que se han ingresado X y O
		turno++;
		
	} while(turno <= 9 && resultado == 2);
	
	//Funcion para limpiar el texto de la pantalla
	clear();
	
	//Funcion tablero para junto la funcion mostrar mostrara el resultado de la partida
	tablero(juego);
	
	//Sentencias if si su condicion se cumple se ingresara aqui
	if(resultado == 1){
		
		//Caracter especial que permite generar un sonido de campanilla
		cout << '\a';
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(45,6);
		cout << "\n¡Has ganado la partida!" << endl;
	}
	//Sentencias else if si su condicion se cumple se ingresara aqui
	else if(resultado == 0) {
		
		//Caracter especial que permite generar un sonido de campanilla
		cout << '\a';
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(45,6);
		cout << "\n¡Has ganado la partida!" << endl;
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(45,6);
		cout << "\nHas perdido la partida" << endl;
	}
	//Si niguna condicion se cumple se ingresara aqui
	else {
		
		//Caracter especial que permite generar un sonido de campanilla
		cout << '\a';
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(45,6);
		cout << "\n¡Has ganado la partida!" << endl;
		//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
		gotoxy(45,6);
		cout << "\nHas empatado la partida" << endl;
	}
	
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(45,9);
	cout << "Presione un boton para continuar." << endl;
	
	//funcion que detiene el programa hasta que el usario presiones un boton
	getch();
	main();
}

/*funcion mostrar esta complementa la funcion mostrar ya que asi se visualiza la tabla en la que se jugara
ontiene un parametro tipo char y es de tipo void por lo que no retorna un valor*/
void mostrar(char tj[3][3])
{
	//Declaracion de las variables i y j de tipo entero
	int i;
	int j;
	
	//declaracion de variable contador de tipo caracter cuyo valor es 1 pero como caracter
	char contador = '1';
	
	//Ciclo for que contiene un for anidado que permetira visualizar el tablero en el que se jugara
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			//contador aumentara en 1 en cada iteracion y se almacenara en la variable t[i][j]
			tj[i][j] = contador++;
			
		}
	}
}

/*funcion tablero esta complementa la funcion mostrar ya que asi se visualiza la tabla en la que se jugara
ontiene un parametro tipo char y es de tipo void por lo que no retorna un valor*/
void tablero(char tj[3][3])
{
	//Declaracion de las variables i y j de tipo entero
	int i;
	int j;
	
	//Ciclo for que contiene un for anidado que permetira visualizar el tablero en el que se jugara
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			
			//condiciones para ubicar la tabla en la que se jugara
			
			if(j < 2) {
				cout << tj[i][j] << "  | ";
			}
			else {
				cout << "" << tj[i][j];
			}
		}
		
		if(i < 2){
			cout << "\n-----------\n";
		}
	}
	
}

/*funcion cuyo significado es posicion en el tablero permite al usuario ingresar la posicion en la que el usuario 
desee coloca la X en el tablero no contiene un parametro tipo char y es de tipo void por lo que no retorna un valor*/
void pos_tab(char tj[3][3])
{
	//declaracion de la variable p de tipo char
 	char p;
 	//declaracion de la variable lleno de tipo entero
	int lleno;
	
	//ciclo do-while para evitar colocar una X en un lugar ya ocupado 
	do {
		
		//Ciclo do-while para evitar que el usuario elija una condicion que no se encuentra en el programa
		do {
			//variable lleno cuyo valor es 0
			lleno = 0;
			//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
			gotoxy(20,1);
			cout << "Ingresa una posicion: ";
			cin >> p;
			//funcion para evitar el ingreso de datos erroneos
			errordato();
		} while(p < '1' || p > '9');
		
		//setencia switch que permitira elejir una opcion
		switch(p){

			/*cada case contiene una condicion para evitar colocar una X en un lugar ya ocupado 
			si la concion se cumple la variable lleno pasara tener un valor 1 por lo que el ciclo 
			se volvera a repetir en caso de ser falsa la condicon se colocara X en el lugar elejido*/
			
			case '1':
	
				if(tj[0][0] == 'X' || tj[0][0] == 'O'){
				lleno = 1;
				}
				else{
					
					tj[0][0] = 'X';	
				}
				
				break;
				
			case '2':
			
				if(tj[0][1] == 'X' || tj[0][1] == 'O'){
				lleno = 1;
				}
				else{
					tj[0][1] = 'X';	
				}
				
				break;
			
			case '3':
				
				if(tj[0][2] == 'X' || tj[0][2] == 'O'){
				lleno = 1;
				}
				else{
					tj[0][2] = 'X';	
				}
				
				break;
			
			case '4':
				
				if(tj[1][0] == 'X' || tj[1][0] == 'O'){
				lleno = 1;
				}
				else{
					tj[1][0] = 'X';	
				}
				
				break;
			
			case '5':
				
				if(tj[1][1] == 'X' || tj[1][1] == 'O'){
				lleno = 1;
				}
				else{
					tj[1][1] = 'X';	
				}
				
				break;
			
			case '6':
	
				if(tj[1][2] == 'X' || tj[1][2] == 'O'){
				lleno = 1;
				}
				else{
					tj[1][2] = 'X';	
				}
				
				break;
			
			case '7':
				
				if(tj[2][0] == 'X' || tj[2][0] == 'O'){
				lleno = 1;
				}
				else{
					tj[2][0] = 'X';	
				}
				
				break;	
			
			case '8':
				
				if(tj[2][1] == 'X' || tj[2][1] == 'O'){
				lleno = 1;
				}
				else{
					tj[2][1] = 'X';	
				}
				
				break;
			
			case '9':
				
				if(tj[2][2] == 'X' || tj[2][2] == 'O'){
				lleno = 1;
				}
				else{
					tj[2][2] = 'X';	
				}
				
				break;
		}
		
		
	} while(lleno == 1);
	
}

/*funcion que permitira rellenar el tablareo de 'O' y simular una partida contiene un parametro tipo char y es 
de tipo void por lo que no retorna un valor*/
void jugador2(char tj[3][3]) 
{
	
	//declaarion de variables de tipo entero
	int i;
	int j;
	int lleno;
	
	/*
	funcion srand esta funcion contiene la semilla para crear numeros aleatorios diferentes cada vez que 
	se ejecute el programa
	*/
	srand(time(NULL));
	
	//Ciclo while permetira evitar que ese coloque una O en un lugar de la tabla de juego que este ocupada
	do {
		//funcion rand colocara una O aleatoriamente en la tabla y se almacenara en la variable i
		i = rand ()% 3;
		//funcion rand almacenara variables aleatorias y se almacenara en la variable j
		j = rand ()% 3;
		//funcion rand colocara una O aleatoriamente en la tabla y se almacenara en la variable j
		lleno = 0;
		
		//condiion que evitara colocar una 0 en un lugar ocupado
		if(tj[i][j]  == 'X' || tj[i][j] == 'O'){
			//si la condicion se cumple lleno pasara a tener el valor de uno por lo que el ciclo se repitira
			lleno = 1;
		}
	} while(lleno == 1);
	
	//la variable tj[i][j] almacenara O
	tj[i][j] = 'O';
	
}

/*funcion que evaluara el ganador de la partida contiene un parametro de tipo char y es de tipo char 
por lo que retorna entero*/
int ganador(char tj[3][3])
{
	//Condiciones para verificar el ganador del juego
	
	if (tj[0][0] == 'X' || tj[0][0] == 'O'){
		if (tj[0][0] == tj[0][1] && tj[0][0] == tj[0][2]){
			if (tj[0][0] == 'X'){
	    	return 1;
	   		}
	   		else {
	    	return 0;
	   		}
		}
		if (tj[0][0] == tj[1][0] && tj[0][0] == tj[2][0]){
			if (tj[0][0] == 'X'){
	    		return 1;
			}
			else{
	    		return 0;
			}
		}
	}
	
	//Ficha central(5)
	if (tj[1][1] == 'X' || tj[1][1] == 'O'){
		//fichas 1 5 9
		if (tj[1][1] == tj[0][0] && tj[1][1] == tj[2][2]){
			if (tj[1][1] == 'X'){
	    		return 1;
	   		}
	   		else{
	    		return 0;
	   		}
	  	}
		//fichas 2 5 8
		if (tj[1][1] == tj[0][1] && tj[1][1] == tj[2][1]){
	   		if (tj[1][1] == 'X'){
	   			return 1;
	   		}
	   		else{
	    		return 0;
	   		}
	  }
		//Fichas 4 5 6
		if (tj[1][1] == tj[1][0] && tj[1][1] == tj[1][2]){
	   		if (tj[1][1] == 'X'){
	    		return 1;
	   		}
	   		else {
	    		return 0;
	   		}
	  	}
	  	//fichas 7 5 3
	  	if (tj[1][1] == tj[2][0] && tj[1][1] == tj[0][2]){
	   		if (tj[1][1] == 'X'){
	    		return 1;
	  	 	}
	   		else{
	    		return 0;
	   		}
	  	}
	 }
	 
	//Ficha final (9)
	else if(tj[2][2] == 'X' || tj[2][2] == 'O'){
		if (tj[2][2] == tj[1][2] && tj[2][2] == tj[0][2]){
	   		if (tj[2][2] == 'X'){
	    		return 1;
	   		}
	   		else{
	    		return 0;
	   		}
	  	if (tj[2][2] == tj[2][1] && tj[2][2] == tj[2][0]){
	   		if (tj[2][2] == 'X'){
	    		return 1;
	   		}
	   		else{
	    		return 0;
	   		}
	   	}
	  }
	}
	 return 2;		
}


/*
Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla contiene dos parametros enteros
y es de tipo void por lo que no retorna ningun valor
*/
void gotoxy(int x, int y)
{
	//Estas instrucciones permiticra ubicar un texto en el lugar que se desee en la pantalla
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

//funcion que permite dar un tiempo de carga no contiene parametros y es de tipo void por lo que no retorna un valor
void cargar()
{
	
	//Variable cargar servira como contador
	int carga = 1;
	
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(30,20);
	cout << "cargando";
	
	
	//Funcion Sleep para permite generar un tiempo de carga
	Sleep(1500);
		
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(30,21);
	cout << "....."; 
		
	//Funcion Sleep para permite generar un tiempo de carga
	Sleep(1500);
		
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(34,21);
	cout << ".....";  
		
	//Funcion Sleep para permite generar un tiempo de carga
	Sleep(1500);
		
	//Funcion gotoxy permite colocar los texto a cualquier lugar de la pantalla
	gotoxy(38,21);
	cout << ".....";   
}

//Funcion que permite limpiar la pantalla no contiene parametros y es de tipo void por lo que no retorna un valor
void clear()
{
	//funcion system("cls") que limpia la pantalla de los textos que esta contiene
	system("cls");
}

//Funcion para evitar errores de datos no contiene parametros y es de tipo void por lo que no retorna un valor
void errordato()
{
	//Ciclo while para evitar ingresar datos incorrectos
	while(cin.fail()){
		
		//cin.clear limpia el bueffer de los datos ingresados				
			cin.clear();
		
		//cin.igonere ignorara los primeros 1000 caracteres o en este caso los numeros ingresados
			cin.ignore(1000,'\n');
		}
} 
