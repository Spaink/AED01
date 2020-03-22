#include <bits/stdc++.h>
using namespace std;
int main(){
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	int n,i,k;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>k;
		if(k/1000==k%10){
			if((k/100)%10==(k/10)%10)
				cout<<"yes ";
			else
				cout<<"no ";

		}
		else
			cout<<"no ";
	}
	cout<<endl;
	return 0;
}