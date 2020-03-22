#include <stdio.h>
#include <string.h>
int main(){
	int k, i, t, j,cont = 0; 
	char s[10000];
	scanf("%d",&k);
	getchar();
	for(i = 1; i <= k; i++){
		scanf("%[^\n]",&s);
		getchar();
		t = strlen(s);
		for(j = 0; j < t; j++){
			if(s[j] == 'A' || s[j] == 'a' || s[j] == 'E' || s[j] == 'e' || s[j] == 'I' || s[j] == 'i' || s[j] == 'O' || s[j] == 'o' || s[j] == 'U' || s[j] == 'u'){
					cont++;
			}
		}
		printf("%d\n",cont);
		cont = 0;
	}
	return 0;
}