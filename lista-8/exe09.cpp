#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, i, j = 0, qtd = 0;
	stack <string> lugares;
	stack <string> direcoes;
	string dir, rua, m, r;
	cin >> t;
	for(i = 1; i <= t; i++){
		lugares.push("CASA");
		while(cin >> dir){
			direcoes.push(dir);
			cin >> rua;
			if(rua == "ESCOLA")
				break;
			lugares.push(rua);
		}
		while(!direcoes.empty()){
				m = direcoes.top();
				r = lugares.top();
				if(m == "DIREITA")
					m = "ESQUERDA";
				else
					m = "DIREITA";
				if(r != "CASA")
					cout << "Vire a " << m << " na rua " << r <<"."<<endl;
				else
					cout << "Vire a " << m << " na sua " << r <<"."<<endl;
				direcoes.pop();
				lugares.pop();
		}
	}
	return 0;
}