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
	int n, vet[1000], l, k, i, soma;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> vet[i]; 
	}
	cin >> l >> k;
	InsertionSort(vet,n);
	soma = vet[l-1]+vet[k-1];
	cout << soma << endl;
	return 0;
}