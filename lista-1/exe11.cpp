#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void binario(int n){
	int k,t;
	while(n>0){
		k=n%2;
		v.push_back(k);
		n/=2;
	}
	t = v.size()-1;
	for(int l=t;l>-1;l--){
		cout<<v[l];
	}
	v.clear();
}
int main(){
	int p,x;
	cin>>p;
	for(int i=1;i<=p;i++){
		cin>>x;
		binario(x);
		cout<<endl;
	}
	return 0;
}