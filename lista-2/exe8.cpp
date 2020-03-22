#include <bits/stdc++.h>
long long int pown(long long int a,long long int b){
	int i;
	long long int  k = 1;
	for(i = 1; i <= b; i++){
		k*=a;
	}
	return k;
}
long long int vet[100000], n, i, k = 1, minkl=-1;
int main(){
	scanf("%lld", &n);
	for(i = 0; i < n; i++){
		scanf("%lld", &vet[i]);
		k *= vet[i];
	}
	for(i = 1; i < 100000000; i++){
		if(pown(i,n) > k){
			minkl = i;
			break;
		}
	}
		printf("%lld",minkl);	
	printf("\n");	
	return 0;
}