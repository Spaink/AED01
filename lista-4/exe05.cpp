#include <bits/stdc++.h>
using namespace std;
int k = 0, p = 0;
void troca (int *a, int *b) {
  int aux;

	 aux = *a;
	 *a = *b;
	 *b = aux;
}
void selectionSort(int *v, int n) {
 int i, j, min, aux;

 for (i = 0; (i < (n-1)); i++) {
 	min = i;
 	for (j = (i+1); (j < n); j++) {
 		if (v[j] < v[min])
 			min = j;
 	}
 	if (v[i] != v[min]) {
 		k++;
 		troca(&v[i], &v[min]);
 	}
 }
}
void InsertionSort(int *v, int n){
	int i = 0, j = 1, aux = 0;
	while(j<n){
		aux = v[j];
		i = j - 1;
		p++;
		while(i>=0 && v[i]>aux){
			v[i+1] = v[i];
			p++;
			i--;
		}
		v[i+1] = aux;
		j++;
    }
}
int main(){
	int n, vet[1000], vet_2[1000], i;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> vet[i];
		vet_2[i] = vet[i];
	}
	InsertionSort(vet,n);
	selectionSort(vet_2,n);
	cout << p-k << endl;
	return 0;
}