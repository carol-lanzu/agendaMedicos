// agengaMedicos.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;
#include "Medico.h"
#include <vector>
#include <utility>
vector <Medico*> vector_medicos;
vector < pair < int, int >> vector_consultas_pair_0;
vector < pair < int, int >> vector_consultas_pair_1;
vector < pair < int, int >> vector_consultas_pair_2;



void funcao_mostrar_horario(int especialidade, int loop, const vector < pair < int, int >>& vector_consultas_pair, const vector<Medico*>& vetor_medico_output )
{
	if (especialidade == 1)
	{
		cout << "Os horarios sao:\n";
		vector_medicos.at(loop)->show_horarios_livre_seg(vector_consultas_pair);
	}
	if (especialidade == 2)
	{
		cout << "Os horarios sao:\n";
		vector_medicos.at(loop)->show_horarios_livre_qua(vector_consultas_pair);
	}
	if (especialidade == 3)
	{
		cout << "Os horarios sao:\n";
		vector_medicos.at(loop)->show_horarios_livre_sexta(vector_consultas_pair);
	}
}


int main()
{

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
			funcao_mostrar_horario(especialidade, loop, vector_consultas_pair_0, vector_medicos);
			cout << "entre com o horario desejado:";
			int horario;
			cin >> horario;
			if (especialidade == 1)
			{
				pair <int, int> a(horario, 2);
				vector_consultas_pair_0.push_back(a);
			}
			else if (especialidade == 2)
			{
				pair <int, int> a(horario, 4);
				vector_consultas_pair_0.push_back(a);
			}
			else if (especialidade == 3)
			{
				pair <int, int> a(horario, 6);
				vector_consultas_pair_0.push_back(a);
			}
		}

		else if (especialidade == 1)
		{
			vector_medicos.push_back(new Ginecologista);
			vector_medicos.at(loop)->procedimentos();
			cout << "\nentre com a opcao:";
			cin >> especialidade;
			funcao_mostrar_horario(especialidade, loop, vector_consultas_pair_1, vector_medicos);
			cout << "entre com o horario desejado:";
			int horario;
			cin >> horario;
			if (especialidade == 1)
			{
				pair <int, int> a(horario, 2);
				vector_consultas_pair_1.push_back(a);
			}
			else if (especialidade == 2)
			{
				pair <int, int> a(horario, 4);
				vector_consultas_pair_1.push_back(a);
			}
			else if (especialidade == 3)
			{
				pair <int, int> a(horario, 6);
				vector_consultas_pair_1.push_back(a);
			}
		}

		else if (especialidade == 2)
		{
			vector_medicos.push_back(new Oftalmologista);
			vector_medicos.at(loop)->procedimentos();
			cout << "\nentre com a opcao:";
			cin >> especialidade;
			funcao_mostrar_horario(especialidade, loop, vector_consultas_pair_2, vector_medicos);
			cout << "entre com o horario desejado:";
			int horario;
			cin >> horario;
			if (especialidade == 1)
			{
				pair <int, int> a(horario, 2);
				vector_consultas_pair_2.push_back(a);
			}
			else if (especialidade == 2)
			{
				pair <int, int> a(horario, 4);
				vector_consultas_pair_2.push_back(a);
			}
			else if (especialidade == 3)
			{
				pair <int, int> a(horario, 6);
				vector_consultas_pair_2.push_back(a);
			}
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
