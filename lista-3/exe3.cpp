#include <bits/stdc++.h>
using namespace std;
int main(){
	int k, i, t, j,cont = 0; 
	string s;
	cin >> k;
	for(i = 1; i <= k; i++){
		cin >> s;
		t = s.size();
		for(j = 0; j <= t; j++){
			if(s[j] == 'A' || s[j] == 'a' || s[j] == 'E' || s[j] == 'e' s[j] == 'I' || s[j] == 'i' || s[j] == 'O' || s[j] == 'o' || s[j] == 'U' || s[j] == 'u'){
					cont++;
			}
		}
		cout << cont << end;
		cont = 0;
	}
	return 0;
}