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
	int i, j, vet_h[500], t, pes;
	cin >> t;
	for(i = 1; i<=t; i++){
		cin >> pes;
		for(j = 0; j < pes; j++){
			cin >> vet_h[j];
		}
		InsertionSort(vet_h,pes);
		for(j = 0; j < pes; j++){
			cout << vet_h[j] << " ";
		}
		cout << endl;
	}
}