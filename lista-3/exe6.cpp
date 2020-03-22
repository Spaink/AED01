#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,rotulos,menor=1005;
	cin>>n>>k;
	int balas[k+1];
	for(i=1;i<=k;i++){
		balas[i] = 0;
	}
	for(i=1;i<=n;i++){
		cin>>rotulos;
		balas[rotulos]++;
	}
	for(i=1;i<=k;i++){
		if(balas[i]<menor)
			menor=balas[i];
	}
	cout<<menor<<endl;
	return 0;
}