#include <bits/stdc++.h>
using namespace std;
int n;
void remove_valor(int *vet,int p, int x){
	int i;
	for(i = x; i < p-1; i++){
		vet[i] = vet[i+1];
	}
	n--;
}
int main(){
	int k, m, i;
	cin >> n >> k >> m;
	int vet[n], fila[n];
	for(i = 0; i < n; i++){
		vet[i] =  i+1;
	}
	int l = 0, j = n-1, cont = 0;
	while(n > 0){
		l = (l + k-1)%n;
		j = ((j-m+1)%n+n)%n;
		fila[cont++] = vet[l];
		if (l != j)
			fila[cont++] = vet[j];

		if(l < j){
			remove_valor(vet, n,l);
			remove_valor(vet, n, j-1);
			if(n>0){
				j = (j - 2 + n) % n;
				l %= n;
			}
		}else{
			if(l == j){
				remove_valor(vet, n,j);
				if (n > 0) {
					l %= n;
					j = (j - 1 + n) % n;
				}
			}else{
				remove_valor(vet, n,j);
				remove_valor(vet, n, l-1);
				if (n > 0) {
					l = (l - 1 + n) % n;
					j = (j - 1 + n) % n;
				}
			}
		}
	}
	for(i = 0; i < cont; i++){
		cout << fila[i] << " ";
	}
	return 0;
}