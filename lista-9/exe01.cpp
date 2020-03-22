#include <bits/stdc++.h>
using namespace std;
int poww(int a, int b){
	int x;
	if(b ==0)
		return 1;
	x = 1;
	while(b--){
		x *= a;
	}
	return x;
}

int main(){
	int a, b, dig, k;
	scanf("%d,%d",&a);
	dig = log10(a);
	printf("%d\n",dig);
	map<int, string> mp;
	mp[0] = "ZERO";
	mp[1] = "UM";
	mp[2] = "DOIS";
	mp[3] = "TRES";
	mp[4] = "QUATRO";
	mp[5] = "CINCO";
	mp[6] = "SEIS";
	mp[7] = "SETE";
	mp[8] = "OITO";
	mp[9] = "NOVE";
	mp[10] = "DEZ";
	mp[11] = "ONZE";
	mp[12] = "DOZE";
	mp[13] = "TREZE";
	mp[14] = "CATORZE";
	mp[15] = "QUINZE";
	mp[16] = "DEZESSEIS";
	mp[17] = "DEZESSETE";
	mp[18] = "DEZOITO";
	mp[19] = "DEZENOVE";
	mp[20] = "VINTE";
	mp[30] = "TRINTA";
	mp[40] = "QUARENTA";
	mp[50] = "CINQUENTA";
	mp[60] = "SESSENTA";
	mp[70] = "SETENTA";
	mp[80] = "OITENTA";
	mp[90] = "NOVENTA";
	mp[100] = "CENTO";
	mp[200] = "DUZENTOS";
	mp[300] = "TREZENTOS";
	mp[400] = "QUATROCENTOS";
	mp[500] = "QUINHENTOS";
	mp[600] = "SEISCENTOS";
	mp[700] = "SETECENTOS";
	mp[800] = "OITOCENTOS";
	mp[900] = "NOVECENTOS";
	mp[1000] = "MIL";
	mp[1000000] = "UM MILHAO";
	k = -1;
	while(a>0){
		if(a < 20){
			if(k != -1)
				cout << "E ";
			cout << mp[a] << " ";
			break;
		}
		if(k != -1 && a < 100)
			cout << " E";
		k = a/poww(10,dig);
		if(k > 0){
			cout << mp[k*poww(10,dig)];
			if(k != 1 && dig > 2)
				cout << " MIL";

		}
		a = a - k*poww(10,dig);
		dig--;
	}
}