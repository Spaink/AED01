#include <bits/stdc++.h>
using namespace std;
int main(){
	int vet[3000];
	int n, valor, chave, n_novo, i, j, x, y, cont = 0;
	char op;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> vet[i];
	}
	cin >> op;
	while(op!= 'F'){
		if(op == 'I'){
			cin >> x >> y;
			for(i = 0; i < n; i++){
				if(y == vet[i]){
					chave = i;
					break;
				}
			}
			for(i = n; i > chave; i--){
				vet[i+1] = vet[i] ;
			}
			vet[chave+1] = x;
			n++;
			cout << "inserido " << x << endl;
		}
		if(op == 'R'){
			cin >> x;
			for(i = 0; i < n; i++){
				if(x == vet[i]){
					vet[i] = -1;
					break;
				}
			}
			cout << "removido " << x << endl;
		}
		if(op =='C'){
			cin >> x >> y;
			int chave_x, chave_y;
			for(i = 0; i < n; i++){
				if(x == vet[i]){
					chave_x = i;
					break;
				}
			}
			for(i = 0; i < n; i++){
				if(y == vet[i]){
					chave_y = i;
					break;
				}
			}
			if(chave_x < chave_y){
				for(i = chave_x; i <= chave_y; i++){
					if(vet[i]!=-1){
						cont++;
					}
				}
			}else{
				for(i = chave_x; i >= chave_y; i--){
					if(vet[i]!=-1){
						cont++;
					}
				}
			}
			cout << "quantidade " << cont-2 << endl;
			cont = 0;  
		}
		if(op == 'M'){
			int qtd = 0;
			for(i = 0; i < n; i++){
				if(vet[i] == -1){
					qtd++;
				}
			}
			if(qtd-1==n-1){
				cout << "lista vazia" << endl;
			}
			if(qtd-1 < n-1){
				cout << "lista ";
				for(i = 0; i < n; i++){
					if(vet[i] != -1){
						cout << vet[i] << " ";
					}
				}
				cout << endl;
			}
		}
		cin >> op;
	}
	cout << "fim" << endl; 
	return 0;
}