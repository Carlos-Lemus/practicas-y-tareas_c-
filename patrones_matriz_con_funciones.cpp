//Hecho por Carlos Alfonso Lemus Rodezno LR18001

//Programa para darle valor a la matriz con funciones

//libreria iostream para utilizar sus funciones
#include <iostream>
//libreria windows.h para utilizar sus funciones
#include <windows.h>

//espacio de nombres a usar std permite abreviar el codigo
using namespace std;

//declaracion de variables bidimensionales	
int	mat[5][5];
int	mat2[5][5];
int	mat3[5][5];
	
//declaracion de funciones	
void llenarMat();
void imprimirMat();
void limpiar();
	
//funcion para darle valor a las posiciones de la matriz	
void llenarMat(){
	for (int fila = 0; fila < 5; fila++){
		for (int colum = 0; colum < 5; colum++){
		
		if(fila==colum || fila%2==0 && colum%2==0 || fila%2==1 && colum%2==1){
			mat3[fila][colum] = 0;
		}
		
		else{
			mat3[fila][colum]=1;}
		  }	
   	}
}

//funcion para imprimir la matriz
void imprimirMat(){
	
	limpiar();
	
	for (int fila= 0; fila<5;fila++){
		for(int colum=0;colum<5;colum++){
				
		cout<<mat3[fila][colum]<<"\t";
		}
			
		cout<<endl;
		}

}

//cuerpo principal
int main(){
	
	//permite darle color al fondo y letra de la consolo
	system("color 1A");
	//se llama a las funciones
	llenarMat();
	imprimirMat();
	
	system("pause");
	//no retorna ningun valor
	return 0;
}

//funcion limpiar que limpiara los textos de la consola
void limpiar(){
	system("cls");
}
