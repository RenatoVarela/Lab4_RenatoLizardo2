#include <iostream>
#include <string.h>

using namespace std;

char** crearMatriz(int);

//liberar memoria de la matriz
void liberarMatriz(char**& ,int);

//imprimir la matriz
void printMatrix(char**,int);

int main(){



char** labMatrix=NULL;



string cadena = "";
int tamano = 0;

cout<<"INgrese la primera cadena"<<endl;
cin>> cadena;

  tamano = cadena.length();


	labMatrix = crearMatriz(tamano);

	for(int c = 0; c < tamano; c++){
		labMatrix[0][c] = cadena[c];
		

	}
/*

	for( int i = 0; i < size; i++){
     for( int j = 0; j < size; j++){
        labMatrix[i][j] = ;

		}

	}

*/




	 printMatrix(labMatrix,tamano);


        liberarMatriz(labMatrix,tamano);


return 0;
}


char** crearMatriz(int size){

 char** matrix = NULL;
 matrix = new char*[size];

 for(int i = 0; i <size ; i++){
        matrix[i] = new char[size];
 }





return matrix;

}



void printMatrix(char** matrix,int size){

        for(int i = 0 ; i < size ; i ++){
                for(int j = 0; j < size ; j++) {
                        cout << matrix[i][j] << " ";

                }
                cout<<endl;

        }




}




void liberarMatriz(char**& matrix, int size){

        for(int i = 0; i < size ; i++){

                delete[]matrix[i];
                matrix[i] = NULL;
        }


          if(matrix != NULL){
          delete[] matrix;
          matrix = NULL;

        }



}
