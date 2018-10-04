//Hecho por Carlos Alfonso Lemus Rodezno LR18001

//Este programa esta hecho para calcular el factorial utilizando una funcion que sea recursiva

//Libreria iostream que nos permite usar sus funciones
#include <iostream>
//Libreria windows.h que nos permite usar sus funciones
#include <windows.h>

//Espacio de nombre a usar std para abreviar el codigo
using namespace std;

//funcion factorial de tipo entero con un parametro de tipo entero
int factorial(int n)
{
	//Variable tipo factorial
	int fact = 1;
	//ciclo for para poder factorear un numero
		for (int i=1;i<=n;i++){
			//funcion factorial que se utiliza haci misma para factorizar un numero
			fact = fact * i;
			
		}
	//retorna la misma funcion fact
	return fact;
}

//Funcion principal cuerpo del programa
int main (){

	//Permite cambiar el color al fondo y sonido de la consola
	system("color 3C");
	
	//declaracion de variables tipo entero
	int n;
	int fact = 1;
	
	//se ingresa el numero a factorizar
	cout << "Ingrese dato que desee factorear: ";
	cin >> n;
	
	//ciclo while para eviatr errores de datos
    while(cin.fail()){
	//funcion que se encarga limpia el buffer
    cin.clear();
    //funcion usada para ignorar los primeros mil caracteres
	cin.ignore(1000,'\n');
            
    }
	
	cout << endl;

	//Se imprimen los resultados
	cout << "El resultado es: " << factorial(n) << endl;
		
	//nos permite mirar el resultado del programa y evita que se cierra 
    system("PAUSE");
    //no devuelve un valor y señala que la ejecucion del programa fue un exito
    return EXIT_SUCCESS;
	}
