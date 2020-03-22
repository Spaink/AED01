#include <bits/stdc++.h>
using namespace std;
int verifica_primo(int x){
	int i;
	if(x == 1)
		return 0;
	for(i = 2; i*i <= x; ++i){
		if(x%i == 0 )
			return 0;
	}
	return 1;
}
int verifica(int x){
	int i;
	if(x == 1) return 0;
	for(i = 2; i*i<=x; i++){
		if(x % i == 0)
			return 0;
	}
	return 1;
}
void InsertionSort(int *v, int n){
	int i, j, aux;
	i = 0; j =1; aux = 0;
	while(j < n){
		aux = v[j];
		i = j - 1;
		while(i >= 0 && v[i] > aux){
			v[i+1] = v[i];
			i--;
		}
		v[i+1] = aux;
		j++;
	}
}
int main(){
	int n, primos[100000], k, p=0, v[1000];
	for(int i = 2; i < 100000; i++ ){
		k = verifica_primo(i);
		if(k){
			primos[p] = i;
			p++;
		}
	}
	scanf("%d", &n);
	for(int i = 0; i <n; i++){
		scanf("%d", &v[i]);
	}
	InsertionSort(v,n);
	int l;
	for(int i = 0; i <n; i++){
		l = v[i];
		printf("%d ",primos[l-1]);
	}
	printf("\n");
	return 0;
}