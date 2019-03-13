#include<iostream>
#include<stdlib.h>
#define len 5

using namespace std;

int bBin(int x, int v[], int esq, int dir);


int main(){

	int x;
	int vetor[len];
		
	for (int i = 0; i < len; i++){
		cout << "Escreva o valor da posicao " << i << endl;
		cin >> vetor[i];
	}
	
	cout << "escreva o valor de x" << endl;
	cin >> x;

	cout <<	endl << bBin(x, vetor, 0, len-1) << endl;

}

int bBin(int x, int v[], int esq, int dir){
	
	int pivo = (esq + dir) / 2;

	if (esq > dir) return 0;

	if(x == v[pivo]) return 1;
	
	if(x < v[pivo]) return (bBin(x, v, esq, pivo-1));		

	return (bBin(x, v, pivo + 1, dir));

}
