#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

char** crearMatriz(int);

//liberar memoria de la matriz
void liberarMatriz(char**& ,int);

//imprimir la matriz
void printMatrix(char**,int);

int main(){



char** labMatrix=NULL;



string cadena = "";
stringstream trampa;
string total = "";
int tamano = 0;
char cad1 , cad2, cad3;

cout<<"INgrese la primera cadena"<<endl;
cin>> cadena;

  tamano = cadena.length();
  cout <<"----------------------------------------" <<endl;


	labMatrix = crearMatriz(tamano);

	for(int c = 0; c < tamano; c++){
		labMatrix[0][c] = cadena[c];
		

	}


	for( int i = 1; i < tamano; i++){
        for( int j = 0; j < tamano; j++){
           //  cout<<tamano <<endl;  
	     if(j==0){

		     if(labMatrix[i-1][1] == '^' ){

			     labMatrix[i][j] = '^';

		     }else{

			     labMatrix[i][j] = '.';



		     }

	     }else{



		     if(j == (tamano - 1)){

			     if(labMatrix[i-1][(tamano-2)] == '^' ){
				     labMatrix[i][j] = '^';


			     }else{

				     labMatrix[i][j] = '.';

			     }

		     }else{


			     cad1 = labMatrix[i-1][j-1];
			     cad2 = labMatrix[i-1][j];
			     cad3 = labMatrix[i-1][j+1];

			     trampa <<cad1 <<cad2 <<cad3;
			     total = trampa.str();

		              
			
		     //		cout<<"----"<<total <<"----"<<endl;

		if(total=="^^." || total== ".^^" || total == "^.." || total == "..^"){
	
			

			labMatrix[i][j] = '^';


		}else{
			labMatrix[i][j] = '.';

		}

		trampa.str("");		

		total = "";


		     }

	    		 }


		}

	}


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
                        cout << matrix[i][j];

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

