#include <bits/stdc++.h>
using namespace std;
typedef struct{
	int h;
	int m;
} tempo;
tempo vet[10000];
void bubbleSort(tempo *v, int n) {
 int i, j;
 tempo aux;
	for (i = n-1; i > 0; --i) {
		for (j = 0; j < i; ++j) {
			if (v[j].h>v[j+1].h) {
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
			else if(v[j].h == v[j+1].h ){
				if(v[j].m>v[j+1].m){
					aux = v[j];
					v[j] = v[j+1];
					v[j+1] = aux;
				}
			}
		}
	}
}
int main(){
	int n, i, k, j, l, rep =0, maior_rep = -1;
	cin >> n;
	for(i = 1; i <= n ; i++){
		cin >> k;
		for(j = 0; j < k; j++){
			cin >> vet[j].h >> vet[j].m;
		}
		bubbleSort(vet,k);
		for(j = 0; j < k; j++){
			if(vet[j].h == vet[j+1].h && vet[j].m == vet[j+1].m)
				continue;
			for(l=0; l<k; l++){
				if(vet[j].h == vet[l].h && vet[j].m==vet[l].m && j!=l)
					rep++;
				
			}
			if(rep>maior_rep)
				maior_rep = rep;
			rep = 0;
		}
		cout << maior_rep+1 << endl;
		maior_rep = -1;
	}
	return 0;
}