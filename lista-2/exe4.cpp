#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, n, k, i, j, l, cont = 0, frente=0, atras =0;
	char mat[1000][1000];
	cin >> t;
	for(i = 1; i <= t; i++){
		cin >> n >> k;
		for(j = 0; j< n; j++){
			for( l = 0; l < n; l++){
					cin >> mat[j][l];
			}
		}
		int p = 0;
		for(j = 0; j < n; j++){
			for(l = 0; l < n; l++){
				bool peguei=false;
				if(mat[j][l]!='P')
					continue;
				for(int x = 1; x <= k && !peguei; x++){
					if(l+x < n){
						frente = 1;
					}else{
						frente = 0;
					}
					if(l-x >= 0){
						atras = 1;
					}else{
						atras = 0;
					}
					if(frente == 1 && atras == 0){
							if(mat[j][l+x] == 'L'){
									cont++;
									peguei=true; 
									if(mat[j][l+x] == 'L'){
										mat[j][l+x] = 'X';
									}
									break;
							}
					}
					if(atras == 1 && frente == 0){
							if(mat[j][l-x] == 'L'){
									cont++;
									peguei=true;

									if(mat[j][l-x] == 'L'){
										mat[j][l-x] = 'X';
									}
									break;
							}
					}
					if(frente == 1 && atras == 1){
							if(mat[j][l-x] == 'L'){
									cont++;
									peguei=true;
									if(mat[j][l-x] == 'L'){
										mat[j][l-x] = 'X';
									}
									break;
							}else if(mat[j][l+x] == 'L'){
									cont++;
									peguei=true;
									if(mat[j][l+x] == 'L'){
										mat[j][l+x] = 'X';
									}
									break;
							}
					}
				}
			}
		}
		cout << cont << endl;
		cont = 0;
	}
	return 0;
}