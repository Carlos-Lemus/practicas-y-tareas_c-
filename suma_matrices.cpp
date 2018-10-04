//Hecho por Carlos Alfonso Lemus Rodezno LR18001

//Programa que genera numeros aleatorios es matrices

//libreria iostream para utilizar sus funciones
#include <iostream>
//libreria windows.h para utilizar sus funciones
#include <windows.h>
//libreria para utilizar la funcion ramdom
#include<time.h>

//espacio de nombres a usar std permite abreviar el codigo
using namespace std;

//cuerpo del programa
int main(){
	//funcion srand para generar numeros aleatorios cada vez que se ejecuta el programa 
	srand(time(NULL));
	
	//declaracion de variables de matrices
	int matriz[3][3];
	int matriz2[3][3];
	//declaracion de variable de tipo int
	int resultado[3][3];
	
	//ciclo for que contiene un ciclo for anidado para generar la matriz
	for(int i = 0;i <= 2;i++){
		
		for(int j = 0;j <= 2;j++){
			//se lamacena la funcion rand que genera numeros alatorios en la variable matriz
			matriz[i][j] = rand()%101;
		}
	}
	
	///ciclo for que contiene un ciclo for anidado que imprimira la matriz
	for(int i = 0;i < 3;i++){
	
		for(int j = 0;j < 3;j++){
			
			cout << matriz[i][j] << "   ";
		
		}
		cout << endl;
	}

	cout << endl;
	
	//ciclo for que contiene un ciclo for anidado para generar la matriz2
	for(int i = 0;i <= 2;i++){
		
		for(int j = 0 ;j <= 2;j++){
			//se lamacena la funcion rand que genera numeros alatorios en la variable matriz
			matriz2[i][j] = rand()%101;
		}
	}
	
	//ciclo for que contiene un ciclo for anidado que imprimira la matriz2
	for(int i = 0;i < 3;i++){
	
		for(int j = 0;j < 3;j++){
			
			cout << matriz2[i][j] << "   ";
		}
		cout << endl;
	}

	//Se imprime los resultaods
	cout << endl;
	cout << "Resultado de la suma de matrices." << endl;
	cout << endl;

	//ciclo for que contiene un ciclo for anidado que hara la suma de matrices y imrimira el resultado
	for(int i=0;i<3;i++){
	
		for(int j=0;j<3;j++){
			
			resultado[i][j] = matriz[i][j] + matriz2[i][j];
			cout << resultado[i][j] << "   ";
			}
			cout << endl;
	}

	//evita que la consola se cierre
	system("pause");
 	//no retorna ningun valor
	return 0;
}
