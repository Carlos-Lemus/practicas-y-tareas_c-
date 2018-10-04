//Hecho por Carlos Alfonso Lemus Rodezno LR18001

//Este programa esta hecho para calcular la tabla de multiplicar del 1 al 10

//Libreria iostream que nos permite usar sus funciones
#include <iostream>
//Libreria windows.h que nos permite usar sus funciones
#include <windows.h>

using namespace std;

//cuerpo del programa
int main(int argc, char *argv[]) {
	//funcion usada para cambiarle el color al fondo y las letras de la consola 
    system("color 4F");
 
	//ciclo for que contiene un for anidado para mostrar las tablas de multiplicar 
    for(int i = 1; i <= 10; i++){
    	
	    cout << "Tabla del " << i << endl;
	     
	    for(int j = 1; j <= 10; j++){
	     	
			//Se muestran las tablas   
	        cout << i << " x "  << j << " = " << i*j << endl;    
	    
	        }     
        
        //Salto de linea
        cout << endl;
               
    }
    
    //nos permite mirar el resultado del programa y evita que se cierra 
    system("PAUSE");
    //no devuelve un valor y señala que la ejecucion del programa fue un exito
    return EXIT_SUCCESS;
}
