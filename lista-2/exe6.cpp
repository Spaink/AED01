#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, k, t, i ,j, p;
	cin >> t;
	for(i = 1; i <= t; i++){
		cin >> a >> b >> c >> k;
		for(j = 0; j <= 10000 ; j++){
			if(a*j*j + b*j >= k - c){
				p = j;
				break;
			}
		}
		cout << p << endl;
	}
	return 0;
}