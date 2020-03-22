#include <bits/stdc++.h>
using namespace std;
int main(){
	double map1, map2, av1,av2, nf, m1, m2;
	int op;
	cout << "#############|||Menu|||###############"<< endl;
	cout << " 1 -  Quanto voce tem que tirar na av2 para passar "<< endl;
	cout << " 2 -  Quanto voce tem que tirar na  m2 para passar "<< endl;
	cout << " 3 -  Descubra a sua nota e se voce passou ou nao na disciplina"<< endl;
	cout << " 4 -  Descubra quanto precisa tirar na 2 prova para passar, e se e possivel ou nao "<< endl;
	cin >> op;
	switch(op){
		case 1:
			cout << "Entre com a sua a media da sua 1 nota: " << endl;
			cin >> m1;
			cout << "Entre com a sua a media da atividade pratica 2: " << endl;
			cin >> map2;
			av2 = (6 - ((m1*0.4) + 0.12*map2))/0.48;
			cout << " Voce tem que tirar na avaliacao 2:"<<endl;
			cout << fixed << setprecision(2) << av2 << endl;
			break;
		case 2:
			cout << "Entre com a sua a media da sua 1 nota: " << endl;
			cin >> m1;
			m2 = (6 - (0.4*m1))/0.6;
			cout << " Voce tem que ter na sua media 2: "<<endl;
			cout << fixed << setprecision(2) << m2 << endl;
			break;
		case 3:
			cout << "Entre com a sua a media da sua 1 nota: " << endl;
			cin >> m1;
			cout << "Entre com a sua a media da sua 2 nota: " << endl;
			cin >> m2;
			nf = (0.4*m1+0.6*m2);
			if(nf>6.0)
				cout<<"Parabens voce passou nessa disciplina a sua media final foi de "<<fixed<<setprecision(2)<<nf<<endl;
			else
				cout<<"Infelizmente voce reprovou nesta disciplina a sua media final foi de "<<fixed<<setprecision(2)<<nf<<endl;
			break;
		case 4:
			cout << "Entre com a sua a media da sua 1 nota: " << endl;
			cin >> m1;
			cout << "Entre com a media da atividade pratica 2:" << endl;
			cin >> map2;
			av2 = (6.0 - (0.4*m1 + 0.12*map2))/0.48;
			if(av2>10.0)
				cout<<"Nao da para passar nesta disciplina mais!!!!, pois precisa de "<<fixed<<setprecision(2)<<av2<<" na segunda prova"<<endl;
			else
				cout<<"Voce consegue passar bastar estudar mais, voce  precisa de  "<<fixed<<setprecision(2)<<av2<<" na segunda prova"<<endl;
			break;
		default:
			cout << "Operacao nao existe" << endl;

	}
	return 0;
}