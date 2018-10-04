//Hecho por Carlos Alfonso Lemus Rodezno LR18001

/*
Este programa fue hecho con el proposito de calcular la produccion diarias y los insumos
que esta requiren para la elaboracion de sodas y jugos
*/

//Libreria iostream permite usar sus funciones
#include <iostream>
//Libreria windows.h permite usar sus funciones
#include <windows.h>
//Libreria conio.h permite usar sus funciones
#include <conio.h>

//Espacio de nombre a usar std permite abreviar el codigo
using namespace std;

//declaracion de funcion para calcular los insumo requeridos para la produccion de jugos
void jugos(int p);
//declaracion de funcion para calcular los insumo requeridos para la produccion de sodas
void sodas(int p);
//declaracion de funcion que permite dar un tiempo de carga
void cargar();
//declaracion de funcion que limpia la pantalla de los textos
void clear();
//declaracion de funcion que evita que se ingrese datos incorrectos
void errordato();

//Cuerpo del programa
int main() 
{
	//Añade color a las letras y el fondo de la consola
	system("color 5C");
	
	//funcion que limpia la pantalla de los textos 
	clear();
	
	//Declaracion de la variable produccion almacenara la produccion diaria
	long produccion;
	//Declaracion de la variable opcion almacenara la opcion a elegir
	int opcion;
	
	//ciclo do-while para evitar numeros negativos o el cero
	do {
		
		//funcion que limpia la pantalla de los textos
		clear();
		
		//Se imprimen las opciones	
		cout << "\n\t----------------------------------------------------" << endl;
		cout << "\t|Bienvenido a Brex te ofrecemos las mejores bebidas|" << endl;
		cout << "\t****************************************************\t" << endl;
		cout << "Opciones" << endl;
		cout << "1.Produccion diaria de Jugos" << endl;
		cout << "2.Produccion diaria de Sodas" << endl;
		cout << "3.Salir" << endl;
		
		//Imprime texto
		cout << "Ingrese una opcion: ";
		
		//Se ingresa la opcion
		cin >> opcion;
		
		//Funcion que se utiliza para evitar errores de datos
		errordato();
	
	} while(opcion <= 0);
	
	//Sentencia swicth para evaluar condiciones
	switch(opcion)
	{
		//case 1 se evualara en caso de cumplirse la condicion se ingresara aqui
		case 1:
			
			//Funcion cargar para dar un tiempo de carga antes de continuar
			cargar();
			
			//ciclo do-while para evitar numeros negativos o el cero
			do {
				//funcion que limpia la pantalla de los textos
				clear();
				
				//Imprime txeto
				cout << "Ingresa la produccion de diaria de jugos: ";
				
				//Se ingresa la produccion
				cin >> produccion;
		
			} while(produccion <= 0);
		
			//El caracter'\a' nos permite generar un sonido de campanilla
			cout << '\a';
			
			///Se utiliza la funcion jugos() para calcular los insumos a utilizar para la produccion
			jugos(produccion);

			//Se utiliza para detenerse la evaluacion de las demas condiciones en caso de que esta sea cierta
			break;
		
		//case 2 se evualara en caso de cumplirse la condicion se ingresara aqui
		case 2:	
			
			//Funcion cargar para dar un tiempo de carga antes de continuar
			cargar();
			
			//ciclo do-while para evitar numeros negativos o el cero
			do {
				//funcion que limpia la pantalla de los textos
				clear();
				
				//Imprime txeto
				cout << "Ingresa la produccion diaria de sodas: ";
				
				//Se ingresa la produccion
				cin >> produccion;
				
				//Funcion que se utiliza para evitar errores de datos
				errordato();
			
			} while(produccion <= 0);
			
			//El caracter'\a' nos permite generar un sonido de campanilla
			cout << '\a';
			
			//Se tuliza la funcion sodas() para calcular los insumos a utilizar para la produccion
			sodas(produccion);
			
			//Se utiliza para detenerse la evaluacion de las demas condiciones en caso de que esta sea cierta	
			break;
		
		//Si se ingresa la opcion 3 se ingresara aqui
		default:
			//funcion que limpia la pantalla de los textos		
			clear();
			
			//Se imprime texto
			cout << "¡Gracias por usar el programa!\n" << endl;

			//Se utiliza para detenerse la evaluacion de las demas condiciones en caso de que esta sea cierta 
			break;			
			
	}
	
	//Para evitar que se cierre la pantalla despues de haber realizados las acciones
	system("PAUSE");
	//No retorna ningun valor
	return 0;
}

//Funcion jugos() se utiliza para obtener los insumos de azucar
void jugos(int p)
{
	//Declaracion de variable azucar se utilizara para la operacion de insumos de azucar 
	long azucar;
	//Declaracion de variable agua se utilizara para la operacion de insumos de agua 
	long agua;
	
	//La variable azucar almacena la operacion de para obtener la cantidad insumos de azucar 
	azucar = p * 700;
	//La variable agua almacena la operacion de para obtener la cantidad insumos de agua 
	agua = p * 600;
	
	//funcion que limpia la pantalla de los textos
	clear();
	
	//Se imprime el resultado
	cout << "Insumos requeridos para la produccion de Jugos.\n" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "____________________________________________\n" << endl;
	cout << "\tInsumos de azucar: " << azucar << " g" << endl; 
	cout << "--------------------------------------------" << endl;
	cout << "\tInsumos de agua: " << agua << " ml" << endl;
	cout << "____________________________________________" << endl;
	
	//Funcion getch permite ver lo que se ha hecho hasta que el usario  presione un boton
	getch();
	
	//funcion main para enviar al usuario a esta
	main();
	
}

//Funcion sodas() se utiliza para obtener los insumos de azucar
void sodas(int p)
{
	//Declaracion de variable azucar se utilizara para la operacion de insumos de azucar 
	long azucar;
	//Declaracion de variable agua se utilizara para la operacion de insumos de agua 
	long agua;
	
	//La variable azucar almacena la operacion de para obtener la cantidad insumos de azucar 
	azucar = p * 800;
	//La variable agua almacena la operacion de para obtener la cantidad insumos de agua 
	agua = p * 500;
	
	//funcion que limpia la pantalla de los textos
	clear();
	
	//Se imprime el resultado
	cout << "Insumos requeridos para la produccion de sodas.\n" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "____________________________________________\n" << endl;
	cout << "\tInsumos de azucar: " << azucar << " g" << endl; 
	cout << "--------------------------------------------" << endl;
	cout << "\tInsumos de agua: " << agua << " ml" << endl;
	cout << "____________________________________________" << endl;

	//Funcion getch permite ver lo que se ha hecho hasta que el usario  presione un boton
	getch();
	
	//funcion main para enviar al usuario a esta
	main();
}

//funcion que permite dar un tiempo de carga
void cargar()
{
	
	//Variable cargar servira como contador
	int carga = 1;
	
	cout << "\nEl programa esta cargando" << endl;
	
	//ciclo while para generar un tiempo de carga
	do {
		//Funcion Sleep para permite generar un tiempo de carga
		Sleep(1400);
	
		cout << "....";  
		
		//Variable carga se utiliza como contador
		carga++;
	
	} while (carga < 4);
}

//Funcion que permite limpiar la pantalla
void clear()
{
	//funcion system("cls") que limpia la pantalla de los textos que esta contiene
	system("cls");
}

//funcion que evita que se ingrese datos incorrectos
void errordato()
{
		//Ciclo while paraevitar datos incorrectos
		while(cin.fail()){
		
		//Limpia el buffer de los datos ingresados
		cin.clear();
		
		//Ignora los primeros 1000 caracteres o en este caso los numeros
		cin.ignore(1000,'\n');
		
		}
}
