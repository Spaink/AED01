#include <bits/stdc++.h>
using namespace std;
int Fack(int m,int n){
	if(m==0)
		return n+1;
	if(m>0 && n==0)
		return Fack(m-1,1);
	if(m>0 && n>0)
		return Fack(m-1,Fack(m,n-1));
}
int main(){
	int m,n,k;
	cin>>m>>n;
	k = Fack(m,n);
	cout<<k<<endl;
	return 0;
}