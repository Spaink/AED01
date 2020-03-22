#include <bits/stdc++.h>
using namespace std;
int main(){
	string neto[100], op, nome;
	int cont = 1, i, j, passos = 0, pegou = 0;
	while (cin >> neto[cont], neto[cont] != "FIM") {
		cont++;
	}
	neto[0] = "Paulo";

	for(i = 1; i < cont ; i++){
		cin >> nome >> op;
		if(op == "horario"){
			for(j = 1; j < cont && passos <2; j++){
				if(neto[j]=="removido")
					continue;
				passos++;
				if(neto[j]==nome){
					neto[j] = "removido";
					pegou++;
					break;
				}
				for(j = 1; j < cont ; j++){
					//cout << neto[j] << " ";
				}
				//cout << endl;
			}
			passos = 0;
		}else{
			for(j = cont - 1; j >= 1 && passos < 2; j--){
				if(neto[j]=="removido")
					continue;
				passos++;
				if(neto[j]==nome){
					neto[j] = "removido";
					pegou++;
					break;
				}
			}
			for(j = 1; j < cont ; j++){
				//cout << neto[j] << " ";
			}
			//cout << endl;
			passos = 0;
		}
	}
	cout << pegou << endl;
	return 0;
}