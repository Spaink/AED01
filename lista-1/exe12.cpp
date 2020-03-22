#include <bits/stdc++.h>
using namespace std;
int main(){
	int m, n, i, j, k, l,mat_lin[101][101], mat_col[101][101], x, y, cond=0;
	cin >> m >> n;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			cin >> mat_lin[i][j] >> mat_col[i][j];
		}
	}
	cin >> x >> y;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			k = mat_lin[x][y];
			l = mat_col[x][y];
			if(mat_lin[k][l] == 0 && mat_col[k][l] == 0){
				cond = 1;
				break;
			}
			x = k; y = l;
		}
	}
	if(cond == 1){
		cout << "VENCE" << endl;
	}else{
		cout << "PRESO" << endl;
	}
	return 0;
}