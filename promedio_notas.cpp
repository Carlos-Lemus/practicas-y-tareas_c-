//Hecho por Carlos Alfonso Lemus Rodezno LR18001

//Programa para calcular la nota promedio

//libreria iostream para utilizar sus funciones
#include <iostream>
//libreria windows.h para utilizar sus funciones
#include <windows.h>

//espacio de nombres a usar std permite abreviar el codigo
using namespace std;

//cuerpo del programa
int main()
{
	//añade color al fondo y letras de la consola
    system("color 3D");
    //declaracion de variables flotantes notas, promedio, suma
    float notas[5];
    float promedio;
    float suma = 0;
 
    //ciclo for para ingresar las notas 
    for(int i = 0; i <= 4; i++) {
        
        //ciclo do-while para evitar numeros negativos
        do{
            
        cout << "Ingresa la nota "  <<  i + 1 << ": ";
        
        cin >> notas[i];
        
            //ciclo while para evitar ingresa de datos erroneos
            while(cin.fail()){
            
            cin.clear();
            
            cin.ignore(1000,'\n');
            
            cout << "El dato ingresado es incorrecto" << endl;
            
            }
             
        }while(notas[i] <= 0 || notas[i] > 10);
        
        //Se almacena la sumas de las notas enla variable sumar
        suma += notas[i];
        
        }
        
    //funcion para limpiar la pantalla
    system("cls");
    
    cout << "Las notas son" << endl;
    
    //funcion sleep para hacer tiempos de carga
    Sleep(1300);
    
    cout << "...";
    
    Sleep(1300);
    
    cout << "...";
    
    Sleep(1300);
    
    cout << "..." << endl;
    
    for(int i = 0; i <= 4; i++) {
    
    cout << "La nota " <<  i + 1 << " es: " << notas[i] << endl;
    
    }
    
    //se almacena la operacion para sacar el promedio en la variable operacion
    promedio = suma / 5;
    
    //se imprimen los resultados
    cout << "El promedio de las notas es " << promedio << endl;
    
    //Evita que la pantalla se cierre
    system("PAUSE");
    return EXIT_SUCCESS;
}
