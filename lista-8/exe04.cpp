#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, n, c, anoes[10000], m, i, j, k, x, y, cores[1000], ind, maior = -1, tam = 0;
	cin >> t;
	for(i = 1; i <= t; i++){
		cin >> n >> c;
		for(j = 0; j < n; j++){
			cin >> anoes[j];
		}
		cin >> m;
		for( j = 1; j <= m; j++){
			cin >> x >> y;
			for(k = x - 1; k <= y - 1; k++){
				tam++;
				cores[anoes[k]]++;
			}
			for(k = 1; k <= n; k++){
				if(cores[k] > maior){
					maior = cores[k];
					ind = k;
				}
			}
			if(maior > tam/2)
				cout << "bonita " << ind << endl;
			else
				cout << "feia "<< endl;
			for(k = 1 ; k <= n; k++){
				cores[k] = 0;
			}
			maior = -1, tam = 0;
		}
	}
	return 0;
}