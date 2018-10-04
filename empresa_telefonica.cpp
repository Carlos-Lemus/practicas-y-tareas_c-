//hecho por Carlos Alfonso Lemus Rodezno LR18001

/*
Este programa esta hecho para una empresa telefonica necesita calcular el total a pagar de cada cliente 
*/

//Libreria iostream nos permite utilizar sus funciones
#include <iostream>
//Libreria windows.h nos permite utilizar sus funciones
#include <windows.h>
//Libreria iomanip nos permite utilizar sus funciones
#include <iomanip> 

//Espacio de nombre a usar sta permite abreviar las lineas de codigo
using namespace std;

//funcion minclientes se usara para ingresar el numero de minutos de forma correcta
void minclientes(int clientes);	
//funcion pagototal se usara para evaluar el pago que el cliente tiene que hacer
void pagototal(float min);
//Funcion error dato se usara para evitar errores de datos
void errordato();

//Cuerpo del programa
int main(int argc, char** argv)
{
	//Añade color a las letras y el fondo de la consola
	system("color 5F");
	
	//Variable clientes para almacenar el numero de clientres
	int clientes;
	//Variable cargar servira como contador
	int carga = 1;	
	
	//ciclo do-while para evitar numeros negativos o el cero
	do {
		
		//Para limpiar la pantalla de los textos anteriores
		system("cls");
	
		//Se imprime un text0
		cout << "\t........................." << endl;
		cout << "\t| Bienvenido a YouPhone |" << endl;
		cout << "\t`````````````````````````" << endl;
		cout << "Ingrese la cantidad de clientes: ";
		
		//Se ingresan el numero de clientes
		cin >> clientes;
		
		//Funcion que evita errores de datos
		errordato();
		
	} while(clientes <= 0);

	cout << "\nEl programa esta cargando" << endl;
	
	//ciclo while para generar un tiempo de carga
	do {
		//Funcion Sleep para permite generar un tiempo de carga
		Sleep(1400);
	
		cout << "....";  
		
		//Variable carga se utiliza como contador
		carga++;
	
	} while (carga < 4);
	
	cout << endl;
	
	system("cls");
	
	cout << "\n¡Gracias por preferirnos!" << endl;
	
	//ciclo for para ingresar el numero de minutos de cada cliente
	for(int i = 1; i <= clientes; i++) {
		
		cout << "\nCliente " << i << endl;
		
		//Se utilza la funcion minclientes para ingresar el numero de clientes
		minclientes(clientes);

	}
	
	cout << "\n¡Gracias por Elejirnos!\n" << endl;
	
	//Para evitar que se cierre la pantalla despues de haber realizados las acciones
	system("PAUSE");
	
	//no retorna ningun valor
	return 0;
}

//Fucion para ingresar los minutos de los clientes
void minclientes(int clientes)
{
		//Variable notas se utilizara para almacenar los minutos de los cliente
		float minutos;
		
		//ciclo do-while para evitar numeros negativos o el cero
		do {
		
		//Imprime texto
		cout << "Ingresa los minutos que has hablado: ";
		
		//SE ingresa el numero de minutos y se almacena en la variable ninutos
		cin >> minutos;
		
		//Se utiliza  la funcion pago total para saber lo que va a pagar el cliente
		pagototal(minutos);
		
		//Se utilliza la funcion errordato para eviatr errores de datos
		errordato();
		
	} while(minutos <= 0.0);
	
}

//funcion para saber el monto a pagar del cliente
void pagototal(float min)
{	
	/*declaracion de Variable total sera utilizada para almacenara el resultado para deducir 
	el pago por los minutos hablados*/
    float total;
	
    //Condicon if se evualara la condicion y si se cumple ingresara a esta
	if(min > 0.0 && min <= 10.0) {		
        
		//El caracter'\a' nos permite generar un sonido de campanilla
		cout << '\a';
		//Variable total sera utilizada para almacenara el resultado para deducir el pago por los minutos hablados
		total= min *0.05;
		
		//Se imprime la respuesta
		cout << "************************************************************" << endl;
		cout << "Tu total a pagar por los minutos de llamada es: $" << fixed << setprecision(2) << total << endl;	
		
	}
	
	//Condicon else if se evualara la condicion y si se cumple ingresara a esta
	else if(min > 10.0 && min <= 15.0) {
				
		//El caracter'\a' nos permite generar un sonido de campanilla
		cout << '\a';
		
		//Variable total sera utilizada para almacenara el resultado para deducir el pago por los minutos hablados
		total = min*0.08;
		
		//Se imprime la respuesta
		cout << "************************************************************" << endl;
		cout << "Tu total a pagar por los minutos de llamada es: $" << fixed << setprecision(2) << total << endl;
		
	}
	
	//else si ninguna de las condicones anteriores se cumple se ingresara aqui
	else {
		
		//El caracter'\a' nos permite generar un sonido de campanilla
		cout << '\a';		
		
		//Variable total sera utilizada para almacenara el resultado para deducir el pago por los minutos hablados
		total = min*0.10;
		
		//Se imprime el resultado
		cout << "************************************************************" << endl;
		cout << "Tu total a pagar por los minutos de llamada es: $" << fixed << setprecision(2) << total << endl;
	
	}
	
}

//Funcion para evitar errores de datos
void errordato()
{
	//Ciclo while para evitar ingresar datos incorrectos
	while(cin.fail()){
		
		//cin.clear limpia el bueffer de los datos ingresados				
			cin.clear();
		
		//cin.igonere ignorara los primeros 1000 caracteres o en este caso los numeros ingresados
			cin.ignore(1000,'\n');
		
		//Imprime un mensaje de error
			cout << "El dato ingresado es incorrecto." << endl;
		}
} 
