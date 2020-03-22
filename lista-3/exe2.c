#include <stdio.h>
int main(){
	int n1,n2,a,b,c;
	scanf("%d %d",&n1,&n2);
	a = n1/100;
	b = (n1%100)/10;
	c = n1%10;
	n1 = c*100+b*10+a;
	a = n2/100;
	b = (n2%100)/10;
	c = n2%10;
	n2 = c*100+b*10+a;
	if(n1>n2){
		printf("%d\n",n1);
	}else{
		printf("%d\n",n2);
	}
	return 0;
}