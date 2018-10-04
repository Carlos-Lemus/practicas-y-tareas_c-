//Hecho por Carlos Alfonso Lemus Rodezno LR18001

//Programa de multimatriz

//libreria iostream para utilizar sus funciones
#include <iostream>
//libreria windows.h para utilizar sus funciones
#include <windows.h>

//espacio de nombres a usar std permite abreviar el codigo
using namespace std;

//cuerpo del programa
int main(){
	
	//variables bidimensionales
	int	mat[5][5];
	int	mat2[5][5];
	int	mat3[5][5];
	
	//ciclo for que contiene un for anidado para crear una matriz
	for (int fila = 0; fila < 5; fila++){
		for (int colum = 0; colum < 5; colum++){
			
			mat[fila][colum] = 0;
			
			//condiciones para colocarles valor a ciertas posciones de la matriz
			if (fila == 4 || colum==2){
			
			mat2[fila][colum] = 0;
			}
			
			else {
			mat2[fila][colum] = 1;
			}
		
			mat2[4][colum] = 0;
			mat3[fila][colum] = mat[fila][colum]+ mat2 [fila][colum];
		}	
	}

	//Se imprimen las matriz
	for (int fila= 0; fila<5;fila++){
		for(int colum=0;colum<5;colum++){
			
			cout<<mat3[fila][colum]<<"\t";
		}
		
		cout<<endl;
	}
	
	//Evita que la pantalla se cierre
	system("pause");
	//no retorna nigun valor
	return 0;
}
