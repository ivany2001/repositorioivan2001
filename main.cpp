#include <iostream>
using namespace std;

const int dim5 = 5;
const int dim10 = 10;

void mostrarvec(int vec[], int dim);

void mostrarmat(int m[][dim5], int dfil);

void revertir(int vec[], int dim);

void transpuesta(int mat[][dim5], int filas);

int main()
{
	
    
    int vec5[dim5]={4, 11, 19, 8, 3};
    int vec10[dim10]={23, 15, 1, 7, 6, 27, 2, 14, 12, 9};

    int matriz[dim5][dim5]=
    {36, 7, 19, 28, 45,
    17, 33, 42, 3, 25,
    22, 41, 32, 11, 9,
    39, 47, 14, 4, 23,
    16, 38, 8, 27, 44};
                            
    mostrarvec(vec5, dim5);
    revertir(vec5, dim5);
    cout<<endl<<"Vector reverso\n"<<endl;
    mostrarvec(vec5, dim5);
    cout<<endl;
    
    mostrarvec(vec10,dim10);
    revertir(vec10, dim10);
    cout<<endl<<"Vector reverso\n"<<endl;
    mostrarvec(vec10, dim10);
    cout<<endl;
	
    mostrarmat(matriz, dim5);
    transpuesta(matriz, dim5);
    cout<<endl<<"Matriz transpuesta"<<endl;
    mostrarmat(matriz, dim5);
    cout<<endl; 
    
    
    return 0;
}

void mostrarvec(int vec[], int dim)
{
    cout<<"Vector de "<<dim<<": "<<endl;
    for (int i = 0; i < dim; ++i)
    {
	cout << vec[i] <<" ";
    }
    cout<<endl;
}

void mostrarmat(int m[][dim5], int dfil)
{
    cout<<endl<<"\nMatriz: "<<endl; 

    for (int i = 0; i < dim5; ++i) 
    {
        for (int j = 0; j < dim5; ++j)
        {
        cout << m[i][j] <<" ";
        }
        cout << endl;
    }
}

void revertir(int vec[], int dim)
{
	int aux, i=0;
	int dimp = dim-1;
	
	while(i<dimp)
	{
		aux=vec[i];
		vec[i]=vec[dimp];
		vec[dimp]=aux;
		
		i++; dimp--;
	}
	
}

void transpuesta(int mat[][dim5], int filas)
{
	int aux;
	int rcol = 0, rfil = 0;
	
	while(rcol<dim5 && rfil<dim5)
	{
	   for(int j=rfil; j<dim5; j++)
	   {
	   	aux = mat[rcol][j];
		mat[rcol][j] = mat[j][rcol];
		mat[j][rcol] = aux;
	   } 	
	   
	   rcol++; rfil++;
	}
	
	
	
	
} 
