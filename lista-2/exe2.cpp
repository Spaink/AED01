#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, i, j, k, q, m, cont = 0, w;
	vector <int> v, p, val;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> k;
		v.push_back(k);
	}
	cin >> q;
	for(i = 0; i < q; i++){
		cin >> m;
		p.push_back(m);
	}
	for(i = 0; i < q; i++){
		for(j = 0; j < n; j++){
			if(p[i] >= v[j]){
				cont++;
				val.push_back(j+1);
			}	
		}
		int l = val.size();
		cout << cont <<  " ";
		for(w = 0; w < l; w++){
			cout << val[w] << " ";
		}
		val.clear();
		cont = 0;
		cout << endl;
	}
	return 0;
	
}