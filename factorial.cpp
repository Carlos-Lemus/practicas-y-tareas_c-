//Hecho por Carlos Alfonso Lemus Rodezno LR18001

//Este programa esta hecho para calcular el factorial de un numero

//Libreria iostream que nos permite usar sus funciones
#include <iostream>
//Libreria windows.h que nos permite usar sus funciones
#include <windows.h>

//Espacio de nombre a usar std para abreviar el codigo
using namespace std;

//Funcion principal cuerpo del programa
int main() {
    //funcion usada para cambiarle el color al fondo y las letras de la consola
    system("color 2B");
    
    //Variable numero que se encargar de almacenar el numero de datos
    int numero;
    //variable fact almacenar el factoreo en esta variable
	int fact = 1;
    
    //ciclo do - while usado para evitar numeros negativos
    do
	{
		//Limpia la pantalla    
    	system("cls");    
		
        //Se imprime un texto para pedirle al usuario un numero a factorear
        cout << "\t--------------------------------------------------------------------------";
        cout << "\n\t|\t\t\t\t¡Bienvenido!\t\t\t\t |\n" << endl;
        cout << "\t| Este programa calcula el factorial de un numero(tiene que ser positivo)|" << endl;
        cout << "\n\t|\t\t\t\t¡EMPEZEMOS!\t\t\t\t |" << endl;
        cout << "\t--------------------------------------------------------------------------";
		
		cout << "\n\nIngrese numero a factorial: ";
    
		//se ingresa el numero
        cin >> numero;
            
            //ciclo while para eviatr errores de datos
            while(cin.fail()){
            //funcion que se encarga limpia el buffer
            cin.clear();
            //funcion usada para ignorar los primeros mil caracteres
            cin.ignore(1000,'\n');
            
            }
    	
        } while(numero < 0 || numero == cin.fail());
        
    //Limpia la pantalla    
    system("cls");    
        
    //Se imprime texto
    cout << numero << " = ";
    
    //if usado para condicion de factoreo de 0
    if(numero == 0){
    	
        //se imprime el resultado de la condicion
        cout << "El factorial es 1" << endl << endl;
        
        }
    
    //ciclo for utilizado para realizar el factoreo de un numero
    for(int i = 1; i <= numero; i++) {
        
		//variable fact en la cual se se almacenara el factoreo del numero ingresado
    	fact *= i;     
        
    }
    
    //se imprime el resultado del factoreo
    cout << "El resultado es: " << fact << endl << endl;
    
    //nos permite mirar el resultado del programa y evita que se cierra 
    system("PAUSE");
    //no devuelve un valor y señala que la ejecucion del programa fue un exito
    return EXIT_SUCCESS;
    
}
