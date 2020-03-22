#include <stdio.h>
#include <stdlib.h>
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
int main(){
	int x, y, primos[10000], i, k, p = 0, n;
	scanf("%d", &n);
	for(i = 1; i <= n; i++ ){
		k = verifica_primo(i);
		if(k){
			primos[p] = i;
			p++;
		}
	}
	scanf("%d %d", &x, &y);
	for(i = x - 1; i < y; i++){
		printf("%d ",primos[i] );
	}
	printf("\n");
	return 0;
}