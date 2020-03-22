#include <bits/stdc++.h>
using namespace std;
typedef struct{
	string nome, telefone;
	int ligacoes;
}agenda;
agenda vet[1000];

bool operador_menor(agenda a, agenda b) {
	return a.ligacoes > b.ligacoes;
}

int main(){
	char op;
	string nome;
	int k = 2, i;
	vet[0].nome = "Hermanoteu";
	vet[0].telefone = "4523-2248";
	vet[0].ligacoes = 300;
	vet[1].nome = "Ooloneia";
	vet[1].telefone = "4523-4887";
	vet[1].ligacoes = 299;
	cin >> op;
	while(op!='F'){
		if(op=='I'){
			cin >>  vet[k].nome >> vet[k].telefone >> vet[k].ligacoes;
			k++;
		}
		if(op=='R'){
			cin >> nome;
			for(i = 0; i < k; i++){
				if(vet[i].nome == nome){
					vet[i].nome = "removido";
					break;
				}
			}
		}
		if(op=='L'){
			cin >> nome;
			for(i = 0; i < k; i++){
				if(vet[i].nome == nome){
					vet[i].ligacoes+=1;
					break;
				}
			}
		}
		cin >> op;
	}
	sort(vet, vet+k, operador_menor);
	for(i = 0; i < k; i++){
		if(vet[i].nome != "removido"){
			cout << vet[i].nome << " ";
			cout <<"- ";
			cout << vet[i].telefone <<" ";
			cout << vet[i].ligacoes << endl;
		}
	}
	return 0;
}