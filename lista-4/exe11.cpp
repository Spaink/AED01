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
	int t, primos[100000], p=0, v[55], j, k;
	for(int i = 2; i < 100000; i++ ){
		k = verifica_primo(i);
		if(k && i!= 3 && i!=7 && i!=11 && i!=19 && i!=23 ){
			primos[p] = i;
			p++;	
		}
	}
	scanf("%d", &t);
	for(int i = 0; i <t; i++){
		scanf("%d", &v[i]);
	}
	int l, qtd=0;
	for(int i = 0; i <t; i++){
		l = v[i];
		for(j=0; j<100000; j++){
			if(primos[j]<=l)
				qtd++;
			else
				break;
		}
		if((i+1)%2!=0){
			for(j = 0; j < qtd; j++){
				printf("%d ",primos[j]);
			}
		}else{
			for(j = qtd-1; j >=0; j--){
				printf("%d ",primos[j]);
			}
		}
		qtd = 0;
		printf("\n");
	}
	return 0;
}