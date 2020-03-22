#include <bits/stdc++.h>
using namespace std;
int main(){
	vector <int> fila;
	int n, i, q, k, t, p, j, pos;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> q;
		fila.push_back(q);
	}
	cin >> k;
	for(i = 0; i < k; i++){
		cin >> t;
		p = fila.size();
		for(j = 0; j < p; j++){
			if(t == fila[j]){
				pos = j;
				break;
			}
		}
		fila.erase(fila.begin()+pos);
	}
	p = fila.size();
	for(i = 0; i < p; i++){
		cout << fila[i] << " ";
	}
	return 0;
}