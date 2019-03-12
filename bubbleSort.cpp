#include<iostream>
#include<stdlib.h>
#define len 5

using namespace std;

int bubble(int n, int v[]);


int main(){

	int x;
	int vetor[len];
		
	for (int i = 0; i < len; i++){
		cout << "Escreva o valor da posicao " << i << endl;
		cin >> vetor[i];
	}

	bubble(len, vetor);

}

int bubble(int n, int v[]){
	
	int aux;
	
	for(int i = 0; i < n - 1; i++){
		for(int j = n - 2; j >= i; j--){
			if(v[j] > v[j + 1]){
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}	
	}

	for(int i = 0; i < len; i++){
		cout << endl << v[i];
	}	

}
