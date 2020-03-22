#include <bits/stdc++.h>
using namespace std;
unsigned int gerar_n (unsigned int k,unsigned int m){
	if(k==m){
		cout<<m;
		return k;
	}else{
		cout<<m<<" ";
		return(gerar_n(k,m+1));
	}
}
int main(){
	unsigned int n;
	cin>>n;
	gerar_n(n,0);
	return 0;
}