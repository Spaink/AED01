#include <bits/stdc++.h>
using namespace std;
bool primo(int k){
	int i;
	if(k==1) return 0;
	for(i=2;i*i<=k;++i){
		if(k%i==0)
			return 0;
	}
  return 1;
}
int main(){
	long long p;
	int n,i;
	cin>>n;
	for(i=0;i<n;++i){
		cin>>p;
		if(primo(p)==1)
			cout<<"primo"<<endl;
		else
			cout<<"composto"<<endl;
	}
	return 0;
}