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
	int x, y, primos[10000], i, k, p = 0, cont = 0;
	scanf("%d %d", &x, &y);
	for(i = x; i <= y; i++ ){
		k = verifica_primo(i);
		if(k){
			primos[p] = i;
			p++;
		}
	}
	printf("%d\n",p);
	return 0;
}