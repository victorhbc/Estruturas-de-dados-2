#include<iostream>
#include<stdlib.h>
#define len 6

using namespace std;

void select(int n, int v[]);


int main(){

	int x;
	int vetor[len];
		
	for (int i = 0; i < len; i++){
		cout << "Escreva o valor da posicao " << i << endl;
		cin >> vetor[i];
	}

	select(len, vetor);

    for(int i = 0; i < len; i++)
    {
        cout << endl << vetor[i];
    }
    

}

void select(int n, int v[]){
	
    int menor, posicao, aux;

    for(int i = 0; i < n-1; i++){
        
        menor = v[i];
        posicao = i;

        for(int j = i+1; j < n ; j++){
            
            if (menor > v[j]) {
                menor = v[j];
                posicao = j;
            }

        }

        aux = v[i];
        v[i] = menor;
        v[posicao] = aux;

    }
    

}

