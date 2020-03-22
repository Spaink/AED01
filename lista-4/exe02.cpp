#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int *v, int n){
	int i = 0, j = 1, aux = 0;
	while(j<n){
		aux = v[j];
		i = j - 1;
		while(i>=0 && v[i]>aux){
			v[i+1] = v[i];
			i--;
		}
		v[i+1] = aux;
		j++;
    }
}
int main(){
	int n, numeros[100], numeros_pares[100], numeros_impares[100], i, impar = 0, par = 0;
	cin >> n;
	for(i = 0; i<n; i++){
		cin>>numeros[i];
		if(numeros[i]%2 == 0){
			numeros_pares[par] = numeros[i];
			par++;
		}else{
			numeros_impares[impar] = numeros[i];
			impar++;
		}
	}
	InsertionSort(numeros_pares,par);
	InsertionSort(numeros_impares,impar);
	for(i = 0; i<par; i++){
		cout << numeros_pares[i] << " "; 
	}
	if(impar!=0 && par!=0)
		cout << endl;
	for(i = impar-1; i>=0; i--){
		cout << numeros_impares[i] << " "; 
	}
	cout << endl;
}