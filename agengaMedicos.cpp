// agengaMedicos.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;
#include "Medico.h"

vector <Medico*> vector_medicos;


void funcao_mostrar_horario(int especialidade, int loop)
{
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


int main()
{
	vector < tuple< string, int, string, string>> vector_consultas_tuple;

	int loop = 0;
	while (true)
	{
		cout << "-----------------------------------------------------\n";
		cout << "horario de servico dos profissionais da saude\n";
		cout << "Entre com a especialidade do medico:\n";
		cout << "0: Dermatologista\n";
		cout << "1: Ginecologista\n";
		cout << "2: Oftalmologista\n\n";
		int especialidade = 0;
		cin >> especialidade;

		if (especialidade == 0)
		{
			//Dermatologista a;
			vector_medicos.push_back(new Dermatologista);
			vector_medicos.at(loop)->procedimentos();
			cout << "\nentre com a opcao:";
			cin >> especialidade;
			funcao_mostrar_horario(especialidade, loop);
		}

		else if (especialidade == 1)
		{
			vector_medicos.push_back(new Ginecologista);
			vector_medicos.at(loop)->procedimentos();
			cout << "\nentre com a opcao:";
			cin >> especialidade;
			funcao_mostrar_horario(especialidade, loop);
		}

		else if (especialidade == 2)
		{
			vector_medicos.push_back(new Oftalmologista);
			vector_medicos.at(loop)->procedimentos();
			cout << "\nentre com a opcao:";
			cin >> especialidade;
			funcao_mostrar_horario(especialidade, loop);
		}
		else
			break;

		loop++;
	}
	// clear dinamico
	for (int i = 0; i < vector_medicos.size(); i++)
	{
		delete vector_medicos.at(i);
	}
	return 0;
}
