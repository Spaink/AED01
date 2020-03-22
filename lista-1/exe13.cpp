#include <bits/stdc++.h>
using namespace std;
int main(){
	int m, n, i, j, k, l, p, r, mat_lin[101][101], mat_col[101][101], x, y, qtd=0;
	cin >> m >> n;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cin >> mat_lin[i][j] >> mat_col[i][j];
		}
	}
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			x = i; y = j;
			for(k = 0; k < m; k++){
				for(l = 0; l < n; l++){
					p = mat_lin[x][y];
					r = mat_col[x][y];
					if(mat_lin[p][r] == 0 && mat_col[p][r] == 0){
						qtd++;
						break;
					}
					x = p; y = r;
				}
			}
		}
	}
	cout << qtd << endl;
	return 0;
}