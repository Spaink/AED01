#include <bits/stdc++.h>
using namespace std;
void bubbleSort(string v[], int n){
	int i, j;
	string  aux;
	for( i = n-1; i > 0; --i){
		for(j = 0; j < i; ++j){
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
}
void bubbleSortInv(string v[], int n){
	int i, j;
	string  aux;
	for( i = n-1; i > 0; --i){
		for(j = 0; j < i; ++j){
			if(v[j] < v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
}
int main(){
	string frases[1000];
	int i = 0, j;
	getline(cin,frases[i]);
	while(frases[i] != "ASC" && frases[i] != "DESC"){
		i++;
		getline(cin,frases[i]);
	}
	if(frases[i] == "ASC")
		bubbleSort(frases,i);
	else
		bubbleSortInv(frases,i);
	for( j = 0; j < i; j++){
		cout << frases[j] << endl;
	}
}