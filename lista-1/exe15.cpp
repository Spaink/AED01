#include <bits/stdc++.h>
using namespace std;
double memo[110];
double fat_2(long long int n){
	int p;
	if(n<=2){
		return 1;
	}
	if(memo[n]!=0)
		return memo[n];
	if(n%2==0)
		return memo[n] = fat_2(n-1);
	return memo[n] = n*fat_2(n-2);
}
int main(){
	long long int k;
	double l;
	cin>>k;
	l = fat_2(k);
	cout << fixed << setprecision(0) << l << endl;
	return 0;
}