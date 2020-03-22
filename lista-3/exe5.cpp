#include <bits/stdc++.h>
using namespace std;
int main(){
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	int n,k,i,vet[100],p=0,j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>k;
		while(k>0){
			vet[p] = k%4;
			k=k/4;
			p++;
		}
		for(j=p-1;j>=0;j--){
			if(vet[j]==0)
				cout<<"A";
			if(vet[j]==1)
				cout<<"C";
			if(vet[j]==2)
				cout<<"G";
			if(vet[j]==3)
				cout<<"T";
		}
		cout<<endl;
		p=0;
	}
	return 0;
}