#include <bits/stdc++.h>
using namespace std;
typedef struct{
	string nome;
	int nota;
} aluno;
aluno vet[100];
void bubbleSort(aluno *v, int n) {
 int i, j;
 aluno aux;
	for (i = n-1; i > 0; --i) {
		for (j = 0; j < i; ++j) {
			if (v[j].nota>v[j+1].nota) {
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
			else if(v[j].nota == v[j+1].nota ){
				if(v[j].nome<v[j+1].nome){
					aux = v[j];
					v[j] = v[j+1];
					v[j+1] = aux;
				}
			}
		}
	}
}
int main(){
	int n, i;
	cin >> n;
	getchar();
	for(i = 0; i<n; i++){
		cin >> vet[i].nome >> vet[i].nota;
		getchar();
	}
	bubbleSort(vet,n);
	for(i = n-1; i>=0; i--){
		if(i!=0)
			cout << vet[i].nome <<" " << vet[i].nota << endl;
		if(i==0)
			cout << vet[i].nome <<" " << vet[i].nota <<" #reprovado(a)" << endl;
	}
	return 0;
}