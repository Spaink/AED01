#include <bits/stdc++.h>
using namespace std;
typedef struct{
	string nome;
	int valor;
}crianca;
crianca criancas[100];
int n;
void remove_lista(crianca *v, int pos){
	int x, i;
	x = pos;
	for(i = x; i < (n)-1; i++){
		v[i].nome = v[i+1].nome;
		v[i].valor = v[i+1].valor;
	}
	n--;
}
int main(){
	int i, j, k, p;
	cin>> n;
	for (i = 0; i < n; i++){
		cin >> criancas[i].nome >> criancas[i].valor;
	}
	k = criancas[0].valor;
	while(n != 1){
		if(k%n==0){
			k = criancas[k%n].valor;
			remove_lista(criancas, 0);
		}else{
			if(k%2==1){
				int mod_imp;
				mod_imp = k%n;
				k = criancas[mod_imp].valor;
				remove_lista(criancas, mod_imp);
			}else{
				int mod_par;
				mod_par = (n - (k%n));
				k = criancas[mod_par].valor;
				remove_lista(criancas, mod_par);
			}
		}
	}
	cout << criancas[0].nome << endl;
	return 0;
}