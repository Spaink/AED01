#include <bits/stdc++.h>
using namespace std;
int cont = 0;
int dig(int x, int y){
	if(x == 0)
		return cont;
	if(x%10 == y)
		cont++;
	return dig(x/10,y);
}
int main(){
	int t, k, i, p, l;
	cin >> t;
	cin >> k;
	for(i = 1; i <= t; i++){
		cin >> p;
		if(p>0){
		 l = dig(p,k);
		 cout << l << " ";
		 cont = 0;
		}else{
			l = 1;
			cout << l << " ";
		 	cont = 0;
		}
	}
	return 0;
}