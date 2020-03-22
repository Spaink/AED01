#include <bits/stdc++.h>
using namespace std;
int fib(int n){
	if (n==0){
	   return n;
	}
	if (n==1 || n==2){
	   return 1;
	}
	return (fib(n-2)+fib(n-1));

}
int main(){
	int n;
	cin>>n;
	for (int i = 0; (i <=n); i++) {
	    if(i<n)
	    	cout<<fib(i)<<" ";
	    if(i==n)
	    	cout<<fib(i);	
	}
	return 0;
}