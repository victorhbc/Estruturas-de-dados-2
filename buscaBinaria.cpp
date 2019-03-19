#include<iostream>
#include<stdlib.h>
#define len 10000

using namespace std;

void bubble(int n, int v[]);
int bBin(int x, int v[], int esq, int dir);


int main(){

	int x, aux;
	int vetor[len];

	for (int i = 0; i < len; i++){
		cout << "Escreva o valor da posicao " << i << endl;
		cin >> vetor[i];
	}

	cout << "escreva o valor de x" << endl;
	cin >> x;

	bubble(len, vetor);
	
	for(int i = 0; i < len; i++){
		cout << endl << vetor[i];
	}	

	cout <<	endl << bBin(x, vetor, 0, len-1) << endl;

}

void bubble(int n, int v[]){
	
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

}

int bBin(int x, int v[], int esq, int dir){
	
	int pivo = (esq + dir) / 2;

	if (esq > dir) return 0;

	if(x == v[pivo]) return 1;
	
	if(x < v[pivo]) return (bBin(x, v, esq, pivo-1));		

	return (bBin(x, v, pivo + 1, dir));

}
