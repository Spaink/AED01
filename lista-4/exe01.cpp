#include <bits/stdc++.h>
using namespace std;
int p = 0;
void InsertionSort(int *v, int n){
	int i = 0, j = 1, aux = 0;
	while(j<n){
		aux = v[j];
		i = j - 1;
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
	int n, vet[1000], i, j, k;
	cin >> n;
	for(i = 1; i <= n; i++){
		cin >> k;
		for(j = 0; j < k; j++){
			cin >> vet[j];
		}
		InsertionSort(vet,k);
		cout << p << endl;
		p = 0;
	}
	return 0;
}