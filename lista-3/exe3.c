#include <stdio.h>
int main(){
	int memoria,n1,n2,k;
	char op;
	scanf("%d",&memoria);
	scanf("%d %c %d",&n1,&op,&n2);
	if(op=='+'){
		k = n1+n2;
	}else{
		k = n1*n2;
	}
	if(k>memoria){
		printf("overflow\n");
	}else{
		printf("no overflow\n");
	}
	return 0;

}