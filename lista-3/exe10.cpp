#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14159265;
int main(){
	char op;
	double result,r,R,a,b,c,B,H,rest;
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>op;
		if(op=='C'){
			cin>>r;
			result = pi*r*r;
		}
		if(op=='E'){
			cin>>R>>r;
			result=R*r*pi;
		}
		if(op=='T'){
			cin>>a>>b>>c;
			if(c*c==a*a+b*b){
				result=(a*b)/2;
			}else{
				if(a==b && a==c && b==c){
					result=(sqrt(3)*a*a)/4;
				}
			}
		}
		if(op=='Z'){
			cin>>B>>b>>H;
			result = ((B+b)*H)/2;
		}
		rest = result-(int)result;
		if(rest<0.5000)
			cout<<floor(result)<<endl;
		if(rest>0.5000)
			cout<<ceil(result)<<endl;
	}
	return 0;
}