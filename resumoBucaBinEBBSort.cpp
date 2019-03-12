/************** BubbleSort **************/
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

/************** BuscaBinária **************/
/*chamada*/cout << bBin(x, vetor, 0, len-1) << endl;

int bBin(int x, int v[], int esq, int dir){
	
    int pivo = (esq - dir) / 2;

        if (esq > dir) return 0;

        if(x == v[pivo]) return 1;
        
        if(x < v[pivo]) return bBin(x, v, esq, pivo-1);		

        return bBin(x, v, pivo - 1, dir);

}