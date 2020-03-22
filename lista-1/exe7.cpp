#include <bits/stdc++.h>
#define MAXN 100100
using namespace std;

// declaro as variáveis que vou precisar
int n, k, pai[MAXN], peso[MAXN],qtd[MAXN];

// funções do Union-Find otimizadas
int find(int x){

    if(pai[x]==x){
        return x;
    }
    return pai[x]=find(pai[x]);
}

void join(int x, int y){

    x=find(x);
    y=find(y);

    if(x==y){
        return;
    }

    if(peso[x]<peso[y]){
        pai[x]=y;
        peso[y]+=peso[x];
    }
    if(peso[x]>=peso[y]){
        pai[y]=x;
        peso[y]+=peso[x];
    }
    
} 

// os comandos da main seguem os mesmo do código anterior, não otimizado
int main(){
	vector <int> v;
    cin >> n >> k;

    for(int i=1; i<=n; i++){
        pai[i]=i;
        peso[i]=1;
    }

    int x, y, familia=0;

    for(int i=1; i<=k; i++){

        cin >> x >> y;
        join(x, y);

    }
    for(int i=1; i<=n; i++){
        v.push_back(find(i));
    }
    sort(v.begin(),v.end());

    for(int i=0; i<n-1; i++){
    	if(v[i]!=v[i+1])
    		familia++;
    }
    cout<<familia+1<<endl;
    return 0;
}