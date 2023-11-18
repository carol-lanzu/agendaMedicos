#pragma once
using namespace std;
#include <string>
#include <vector>
#include <iostream>
#include <utility>

class Medico
{
protected:
	string especialidade_m = "";
	int horario_incial_m = 0;
	//int horario_final_m = 0;
	int duracao_consulta_m = 0;
public:
	Medico() {
		string especialidade_m = "";
		int horario_incial_m = 0;
		//int horario_final_m = 0;
		int duracao_consulta_m = 0;
	};
	virtual void show_horarios_livre_seg(vector < pair < int, int >> vector_consultas_pair) {};
	virtual void show_horarios_livre_qua(vector < pair < int, int >> vector_consultas_pair) {};
	virtual void show_horarios_livre_sexta(vector < pair < int, int >> vector_consultas_pair) {};
	virtual void procedimentos() {};
};

bool essa_consulta(int horario, const vector < pair < int, int >>& vector_consultas_pair)
{
	for (int i = 0; i < vector_consultas_pair.size(); i++)
	{
		if (horario == vector_consultas_pair.at(i).first && vector_consultas_pair.at(i).second == 2)
			return false;
	}
}
bool essa_consulta_4(int horario, vector < pair < int, int >> vector_consultas_pair)
{
	for (int i = 0; i < vector_consultas_pair.size(); i++)
	{
		if (horario == vector_consultas_pair.at(i).first && vector_consultas_pair.at(i).second == 4)
			return false;
	}
}
bool essa_consulta_6(int horario, vector < pair < int, int >> vector_consultas_pair)
{
	for (int i = 0; i < vector_consultas_pair.size(); i++)
	{
		if (horario == vector_consultas_pair.at(i).first && vector_consultas_pair.at(i).second == 6)
			return false;
	}
}
//	if (std::get<0>(vector_consultas_tuple)== medico && get<2>(vector_consultas_tuple)== horario)
//}
/*
class Cardiologista : public Medico
{
public:
	int especialidade_m = 1;
	int horario_incial_m = 9;
	int horario_final_m = 16;
	int duracao_consulta_m = 1;
	Cardiologista() {};
	void show_horarios_livre()
	{
		int quantidade_consulta = (horario_final_m - horario_incial_m) / duracao_consulta_m;
		for (int i = 0; i < quantidade_consulta; i++)
		{
			int horario;
			//if ()

		}
	};
};
*/
class Dermatologista : public Medico
{
public:
	int especialidade_m = 0;
	/*
	int horario_incial_m = 10;
	int horario_final_m = 17;
	*/
	int duracao_consulta_m = 1;
	Dermatologista() {};

	void procedimentos()
	{
		cout << "os assuntos da consulta sao:\n";
		cout << "1:primeira consulta\n";
		cout << "2: consulta de rotina\n";
		cout << "3: mostrar resultado de exames";
	}


	void show_horarios_livre_seg(vector < pair < int, int >> vector_consultas_pair)
	{
		horario_incial_m = 10;
		int quantidade_consulta = (17 - 10) / duracao_consulta_m;


		for (int i = 0; i < quantidade_consulta; i++)
		{
			////////////////////////////////////////////////////////////////////////////////////////////////////
			if (essa_consulta(horario_incial_m, vector_consultas_pair))
			{
				cout << horario_incial_m << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}
	};
	void show_horarios_livre_qua(vector < pair < int, int >> vector_consultas_pair)
	{
		horario_incial_m = 9;
		int quantidade_consulta = (16 - horario_incial_m) / duracao_consulta_m;


		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta_4(horario_incial_m, vector_consultas_pair))
			{
				cout << horario_incial_m << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}
	}
	void show_horarios_livre_sexta(vector < pair < int, int >> vector_consultas_pair)
	{
		horario_incial_m = 11;
		int quantidade_consulta = (18 - horario_incial_m) / duracao_consulta_m;


		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta_6(horario_incial_m, vector_consultas_pair))
			{
				cout << horario_incial_m << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}

	}
};

class Ginecologista : public Medico
{
public:
	int especialidade_m = 1;
	/*
	int horario_incial_m = 11;
	int horario_final_m = 18;
	*/
	int duracao_consulta_m = 1;
	Ginecologista() {};

	void procedimentos()
	{
		cout << "os assuntos da consulta sao:\n";
		cout << "1:exames preventivos\n";
		cout << "2:planejamento familiar\n";
		cout << "3:acompanhamento da gravidez\n";

	}

	void show_horarios_livre_seg(vector < pair < int, int >> vector_consultas_pair)
	{
		horario_incial_m = 11;
		int quantidade_consulta = (18 - 11) / duracao_consulta_m;


		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta(horario_incial_m, vector_consultas_pair))
			{
				cout << horario_incial_m << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}

	};
	void show_horarios_livre_qua(vector < pair < int, int >> vector_consultas_pair)
	{
		horario_incial_m = 10;
		int quantidade_consulta = (17 - 10) / duracao_consulta_m;


		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta_4(horario_incial_m, vector_consultas_pair))
			{
				cout << horario_incial_m << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}

	}
	void show_horarios_livre_sexta(vector < pair < int, int >> vector_consultas_pair)
	{
		horario_incial_m = 7;
		int quantidade_consulta = (13 - 7) / duracao_consulta_m;


		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta_6(horario_incial_m, vector_consultas_pair))
			{
				cout << horario_incial_m << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}

	}
};

class Oftalmologista : public Medico
{
public:
	int especialidade_m = 2;
	/*
	int horario_incial_m = 7;
	int horario_final_m = 17;
	*/
	int duracao_consulta_m = 1;
	Oftalmologista() {};

	void procedimentos()
	{
		cout << "os assuntos da consulta sao:\n";
		cout << "1:diagnostico e tratamento\n";
		cout << "2:agendar uma operacao\n";
		cout << "3:ver alteracao de grau\n";

	}

	void show_horarios_livre_seg(vector < pair < int, int >> vector_consultas_pair)
	{
		horario_incial_m = 7;
		int quantidade_consulta = (17 - 7) / duracao_consulta_m;


		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta(horario_incial_m, vector_consultas_pair))
			{
				cout << horario_incial_m << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}
	};
	void show_horarios_livre_qua(vector < pair < int, int >> vector_consultas_pair)
	{
		horario_incial_m = 9;
		int quantidade_consulta = (17 - 9) / duracao_consulta_m;

		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta_4(horario_incial_m, vector_consultas_pair))
			{
				cout << horario_incial_m << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}
	}
	void show_horarios_livre_sexta(vector < pair < int, int >> vector_consultas_pair)
	{
		horario_incial_m = 13;
		int quantidade_consulta = (19 - 13) / duracao_consulta_m;

		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta_6(horario_incial_m, vector_consultas_pair))
			{
				cout << horario_incial_m << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}

	}
};



