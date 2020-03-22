#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, n, k, i, j, l, cont = 0, frente=0, atras =0, cima=0, abaixo=0;
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
				if(mat[j][l]!='D')
					continue;
				for(int x = 1; x <= k && !peguei; x++){
					if(l+x < n){
						frente = 1;
					}else{
						frente = 0;
					}
					if(j-x >=0){
						cima = 1;
					}else{
						cima = 0;
					}
					if(j+x < n){
						abaixo = 1;
					}else{
						abaixo = 0;
					}
					if(l-x >= 0 ){
						atras = 1;
					}else{
						atras = 0;
					}
					if(frente == 1 && mat[j][l+x]=='L'){
								cont++;
								peguei=true;
									mat[j][l+x] = 'X';
								break;
						
					}else if(atras == 1 && mat[j][l-x]=='L'){
								cont++;
								peguei=true;
									mat[j][l-x] = 'X';
								break;
						
					}
					else if( abaixo == 1 &&  mat[j+x][l]=='L'){
								cont++;
								peguei=true;
									mat[j+x][l] = 'X';
								break;
						
					}
					else if(cima == 1 && mat[j-x][l]=='L'){
								cont++;
								peguei=true;
									mat[j-x][l] = 'X';
								break;
						
					}
				}
			}
		}
		cout << cont << endl;
		cont = 0;
	}
	return 0;
}