#include <stdio.h>
#include <stdlib.h>
int main (){
	int n,n1,k,d=0,p,a=0,i;
	scanf("%d",&n);
	if(n>1986)
		k = n-1986;
	else
		k = 1986-n;
	p = k/76;
	for(i=0;i<=p*76;i++){
		if(i%4==0 && i%100!=0){
			d++;
		}else{
			if(i%400==0){
				d++;
			}
		}
	}
	a=d/365;
	if(k%76==0){
		printf("%d\n",n+76);
	}else{
		if(n>1986){
			n1=(p*76)+1986+76;
			printf("%d\n",n1+a);
		}else{
			n1=1986-(p*76);
			printf("%d\n",n1-a);
		}
	}
	return 0;
}