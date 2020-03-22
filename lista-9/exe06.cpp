#include <bits/stdc++.h>
using namespace std;
#define MAXN 100100
int busca_binaria(int v[], int ini, int fim, int p){
	if(ini <= fim){
		int meio;
		meio = (ini+fim)/2;
		if(v[meio] == p){
			return meio;
		}
		else if(v[meio] < p){
			return busca_binaria(v, meio+1, fim, p);
		}
		else{
			return busca_binaria(v, 0, meio-1, p);
		}
	}
	return -1;
}
int main(){
	int t, i, k, p, j, aux, pos;
	int v[MAXN];
	cin >> t;
	for(i = 1; i <= t; i++){
		cin >> k;
		p = 0;
		while(cin >> aux){
			if(aux == -1)
				break;
			v[p] = aux;
			p++;
		}
		for(j = 0; j < p; j++){
			if(v[j] == k)
				pos = j;
		}
		sort(v,v+p);
		//for(j = 0; j < p; j++){
			//cout << v[j] << " ";
		//}
		//cout << endl;
		int busca;
		busca = busca_binaria(v, 0, p-1, k);
		if((busca == pos || busca != pos) && busca != -1)
			cout << pos+1 << endl;
		else
			cout << "ausente" << endl;
		for(j = 0; j <= p; j++){
			v[j] = 0;
		}

	}
}