//Hecho por Carlos Alfonso Lemus Rodezno
//*************************************

/*
Una empresa comercializadora contrata vendedores a las cualesles les pagara un salario que va deacuerdo al total de las 
ventas realizadas en el mes. 

Realizar un programa en c++ que sistematizar eñ procedimiento y el ingresar a las ventas de un empleado inmediantamente 
el sueldo que les corresponda
*/

//Libreria iostream para utilizar sus funciones
#include <iostream>

//Libreria stdlib.h para utilizar sus funciones
#include <stdlib.h>

//Libreria iomanip para utilizar sus funciones
#include <iomanip>

//Libreria windows.h para utilizar sus funciones
#include <windows.h>

//Nombre de espacio es std para abreviar el codigo
using namespace std;

//Cuerpo del programa
int main()
{	
	//funcion system que nos permite cambiar el color de fondo y de fuente de la consola
	system("color 2E");
	
    //Variable ventas tipo entero que almacenara las ventas
    int ventas;
    //variable pventas que significa porcentaje de ventas que almacenara una operacion 
    float pventas;
    //Variable cargar servira como contador
	int carga = 1;
    
    //Ciclo do while para evitar que el usario ingrese numeros negativos caso contrario se volvera a pedir el datos
    do {
	cout << "\n\t\t\t==============\n";
	cout << "\t\t\t[ Bienvenido ]";
	cout << "\n\t\t\t==============\n\n";
    cout << "Ingrese el total de las ventas realizadas en este mes: ";
    
    //Se ingresa el valor de ventas
    cin >> ventas;
     
     //Ciclo while para vitar que eñ usuario ingrese un dato incorrecto
     while(cin.fail()){
        
		//cin,clear se utiliza para limpiar el buffer de los datos ingresados
        cin.clear();
        
		//cin.ignore ignorara los primeros 1000 caracteres o en este caso numeros ingresados
        cin.ignore(1000,'\n');
        
        //Imprimira un mesaje de error
        cout << "El dato ingresado no es correcto" << endl;
        
        //Para leer lo que impreme al dar la respuesta y no se cierre
        cin.get();
    }
    
    } while(ventas <=0);
    
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
    
    //Condicion 1 evaluara la variable ventas y si cumple la condicion mostrara el salario correspondiente
    if(ventas > 0 && ventas<=500000){
	
	//El caracter'\a' nos permite generar un sonido de campanilla
	cout << '\a';
	    
	//Se imprime la respuesta
    cout << "*******************************************************" << endl;    
        
    cout << "Tu salario es de $80000.00" << endl;
    
    //Para leer lo que impreme al dar la respuesta y no se cierre
    cin.get();
    }
    
    //Condicion 2 evaluara la variable ventas y si cumple la condicion mostrara el salario correspondiente
    else if(ventas > 500000 && ventas <= 1000000){
	
	//El caracter'\a' nos permite generar un sonido de campanilla
	cout << '\a';
    
    //Se imprime la respuesta
    cout << "*******************************************************" << endl;
    
    cout << "Tu salario es de $160000.00" << endl;
    
    //Para leer lo que impreme al dar la respuesta y no se cierre
    cin.get();
    }
    
    //Condicion 3 evaluara la variable ventas y si cumple la condicion mostrara el salario correspondiente
    else if(ventas > 1000000 && ventas <= 1500000){
	
	//El caracter'\a' nos permite generar un sonido de campanilla
	cout << '\a';
    
    //Se imprime la respuesta
    cout << "*******************************************************" << endl;
    
    cout << "Tu salario es de $320000.00" << endl;
    
    //Para leer lo que impreme al dar la respuesta y no se cierre
    cin.get();
    }
    
    //Condicion 4 evaluara la variable ventas y si cumple la condicion mostrara el salario correspondiente
    else if(ventas > 1500000 && ventas <= 2500000){
	
	//El caracter'\a' nos permite generar un sonido de campanilla
	cout << '\a';
    
    //Se imprime la respuesta
    cout << "*******************************************************" << endl;
    
    cout << "Tu salario es de $450000.00" << endl;
    
    //Para leer lo que impreme al dar la respuesta y no se cierre
    cin.get();
    }
  
    //Condicion 5 evaluara la variable ventas y si cumple la condicion mostrara el salario correspondiente
    else if(ventas > 2500000 && ventas <= 4000000){   
	
	//El caracter'\a' nos permite generar un sonido de campanilla
	cout << '\a';
     
    //Se imprime la respuesta
	cout << "*******************************************************" << endl;
	  
    cout << "Tu salario es de $550000.00" << endl;
    
    //Para leer lo que impreme al dar la respuesta y no se cierre
    cin.get();
    }
    
    //Si no se cumple ninguna de las condiciones anteriores se ingresara aqui
    else {
    
	//El caracter'\a' nos permite generar un sonido de campanilla
	cout << '\a';
	
	//Operacion para saber el 20% de ventas se almacenara el la variable pventas
    pventas = ventas * 0.20; 
    
    //Se imprime la respuesta
    cout << "*******************************************************" << endl;
    
    cout << "Tu salario es el 20% de las ventas que es: " << fixed << setprecision(2) << pventas << endl;
    
    //Para leer lo que impreme al dar la respuesta y no se cierre
    cin.get();
    }
    
    //Para leer lo que impreme al dar la respuesta y no se cierre
    cin.get();
    return 0;
}
