#include <bits/stdc++.h>
using namespace std;
struct paciente{
	int tempo, critico;
};
int converteTempo(int h, int m){
	return h * 60 + m;
}
int main(){
	int hora_atual = converteTempo(7,0);
	int n_paciente, horas, minutos, critico, cont = 0, i;
	cin >> n_paciente;
	queue <paciente> fila;
	for( i = 0; i < n_paciente; i++){
		cin >> horas >> minutos >> critico;
		int tempo_convertido = converteTempo(horas, minutos);
		fila.push(paciente{tempo_convertido,tempo_convertido+critico});

	}
	while(!fila.empty()){
		int tempo_paciente = fila.front().tempo, critico_paciente = fila.front().critico;
		if(tempo_paciente <= hora_atual){
			fila.pop();
			if(critico_paciente < hora_atual){
				cont++;
			}
		}
		hora_atual+=30;
	}
	cout << cont << endl;
	return 0;
}