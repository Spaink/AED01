#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
  if(b == 0){
    return a;
  }
  return gcd(b, a%b);
}
void frac(int k){
	int d, n, cont=0;
	 for (d = 1; cont < k; d++){
	 	for (n = 0; n <= d; n++){
	 		if (gcd(n,d) == 1 ){
				cont++;
		    }
		    if( gcd(n,d) == 1 && cont == k){
		    	cout << n << "/" << d <<endl;
		    }
		}
	}
}
int main(){
	int k;
	cin >> k;
	while(k){
	  frac(k);
	  cin >> k;
	}
	return 0;
	
}