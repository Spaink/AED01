#include <bits/stdc++.h>
using namespace std;
int reverso(int n){
	if(n/10==0){
		cout<<n;
		return n;
	}else{
		cout<<n%10;
		return (reverso(n/10));
	}
}
int main(){
	int n;
	cin>>n;
	while(n%10==0){
		n/=10;
	}
	reverso(n);
	return 0;
}