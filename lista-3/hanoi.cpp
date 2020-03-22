#include <bits/stdc++.h>
using namespace std;
void hanoi(int n, char Orig, char Dest, char  auxiliar){
  		if(n==1)
  			return;
  		hanoi(n-1, Orig, Temp, Dest);
  		hanoi(n-1, Temp, Dest, Orig)
 }
int main(){
	return 0;
}