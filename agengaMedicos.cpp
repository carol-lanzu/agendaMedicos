// agengaMedicos.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;
#include "Medico.h"



//lvcf

int main()
{
	vector < tuple< string, int, string, string>> vector_consultas_tuple;
	vector <Medico*> vector_medicos;

	int loop = 0;
	while (true)
	{
		cout << "---------------------------------\n";
		cout << "Entre com a especialidade do medico:\n";
		cout << "0: Dermatologista\n";
		cout << "1: Ginecologista\n";
		cout << "2: Oftalmologista\n";
		int especialidade = 0;
		cin >> especialidade;
		if (especialidade == 0)
		{
			//Dermatologista a;
			vector_medicos.push_back(new Dermatologista);
			vector_medicos.at(loop)->procedimentos();
			cout << "\nentre com a opcao:"; //oi
			cin >> especialidade;


			if (especialidade == 1)
			{
				cout << "Os horarios sao:\n";
				vector_medicos.at(loop)->show_horarios_livre_seg();
			}
			if (especialidade == 2)
			{
				cout << "Os horarios sao:\n";
				vector_medicos.at(loop)->show_horarios_livre_qua();
			}
			if (especialidade == 3)
			{
				cout << "Os horarios sao:\n";
				vector_medicos.at(loop)->show_horarios_livre_sexta();
			}

		}
		else if (especialidade == 1)
		{
			vector_medicos.push_back(new Ginecologista);
			/*
			cout << "Os horarios sao:\n";
			vector_medicos.at(loop)->show_horarios_livre();
			*/
		}
		else if (especialidade == 2)
		{
			vector_medicos.push_back(new Oftalmologista);
			/*
			cout << "Os horarios sao:\n";
			vector_medicos.at(loop)->show_horarios_livre();
			*/
		}

		loop++;
	}
	// clear dinamico
	for (int i = 0; i < vector_medicos.size(); i++)
	{
		delete vector_medicos.at(i);
	}
	return 0;
}
