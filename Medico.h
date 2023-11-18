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
	int duracao_consulta_m = 0;
public:
	Medico() {
		string especialidade_m = "";
		int horario_incial_m = 0;
		int duracao_consulta_m = 0;
	};
	virtual void show_horarios_livre_seg(const vector < pair < int, int >>& vector_consultas_pair) {};
	virtual void show_horarios_livre_qua(const vector < pair < int, int >>& vector_consultas_pair) {};
	virtual void show_horarios_livre_sexta(const vector < pair < int, int >>& vector_consultas_pair) {};
	virtual void procedimentos() {};
};

bool essa_consulta(int horario, const vector < pair < int, int >>& vector_consultas_pair, int semana)
{
	for (int i = 0; i < vector_consultas_pair.size(); i++)
	{
		if (horario == vector_consultas_pair.at(i).first && vector_consultas_pair.at(i).second == semana)
			return false;
	}
	return true;
}

class Dermatologista : public Medico
{
public:
	int especialidade_m = 0;
	int duracao_consulta_m = 1;
	Dermatologista() {};

	void procedimentos()
	{
		cout << "Os assuntos da consulta sao:\n";
		cout << "1:primeira consulta (segunda)\n";
		cout << "2: consulta de rotina (quarta)\n";
		cout << "3: mostrar resultado de exames (sexta)\n";
	}


	void show_horarios_livre_seg(const vector < pair < int, int >>& vector_consultas_pair)
	{
		horario_incial_m = 10;
		int quantidade_consulta = (17 - 10) / duracao_consulta_m;
		int semana = 2;

		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta(horario_incial_m, vector_consultas_pair, semana))
			{
				cout << horario_incial_m << " horas" << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}
	};
	void show_horarios_livre_qua(const vector < pair < int, int >>& vector_consultas_pair)
	{
		horario_incial_m = 9;
		int quantidade_consulta = (16 - horario_incial_m) / duracao_consulta_m;
		int semana = 4;

		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta(horario_incial_m, vector_consultas_pair, semana))
			{
				cout << horario_incial_m << " horas" << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}
	}
	void show_horarios_livre_sexta(const vector < pair < int, int >>& vector_consultas_pair)
	{
		horario_incial_m = 11;
		int quantidade_consulta = (18 - horario_incial_m) / duracao_consulta_m;
		int semana = 6;

		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta(horario_incial_m, vector_consultas_pair, semana))
			{
				cout << horario_incial_m << " horas" << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}

	}
};

class Ginecologista : public Medico
{
public:
	int especialidade_m = 1;
	int duracao_consulta_m = 1;
	Ginecologista() {};

	void procedimentos()
	{
		cout << "Os assuntos da consulta sao:\n";
		cout << "1:exames preventivos (segunda)\n";
		cout << "2:planejamento familiar (quarta)\n";
		cout << "3:acompanhamento da gravidez (sexta)\n";

	}

	void show_horarios_livre_seg(const vector < pair < int, int >>& vector_consultas_pair)
	{
		horario_incial_m = 11;
		int quantidade_consulta = (18 - 11) / duracao_consulta_m;
		int semana = 2;


		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta(horario_incial_m, vector_consultas_pair, semana))
			{
				cout << horario_incial_m << " horas" << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}

	};
	void show_horarios_livre_qua(const vector < pair < int, int >>& vector_consultas_pair)
	{
		horario_incial_m = 10;
		int quantidade_consulta = (17 - 10) / duracao_consulta_m;
		int semana = 4;


		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta(horario_incial_m, vector_consultas_pair, semana))
			{
				cout << horario_incial_m << " horas" << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}

	}
	void show_horarios_livre_sexta(const vector < pair < int, int >>& vector_consultas_pair)
	{
		horario_incial_m = 7;
		int quantidade_consulta = (13 - 7) / duracao_consulta_m;
		int semana = 6;

		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta(horario_incial_m, vector_consultas_pair, semana))
			{
				cout << horario_incial_m << " horas" << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}

	}
};

class Oftalmologista : public Medico
{
public:
	int especialidade_m = 2;
	int duracao_consulta_m = 1;
	Oftalmologista() {};

	void procedimentos()
	{
		cout << "Os assuntos da consulta sao:\n";
		cout << "1:diagnostico e tratamento (segunda)\n";
		cout << "2:agendar uma operacao (quarta)\n";
		cout << "3:ver alteracao de grau (sexta)\n";

	}

	void show_horarios_livre_seg(const vector < pair < int, int >>& vector_consultas_pair)
	{
		horario_incial_m = 7;
		int quantidade_consulta = (17 - 7) / duracao_consulta_m;
		int semana = 2;


		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta(horario_incial_m, vector_consultas_pair, semana))
			{
				cout << horario_incial_m << " horas" << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}
	};
	void show_horarios_livre_qua(const vector < pair < int, int >>& vector_consultas_pair)
	{
		horario_incial_m = 9;
		int quantidade_consulta = (17 - 9) / duracao_consulta_m;
		int semana = 4;

		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta(horario_incial_m, vector_consultas_pair, semana))
			{
				cout << horario_incial_m << " horas" << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}
	}
	void show_horarios_livre_sexta(const vector < pair < int, int >>& vector_consultas_pair)
	{
		horario_incial_m = 13;
		int quantidade_consulta = (19 - 13) / duracao_consulta_m;
		int semana = 6;

		for (int i = 0; i < quantidade_consulta; i++)
		{
			if (essa_consulta(horario_incial_m, vector_consultas_pair, semana))
			{
				cout << horario_incial_m << " horas" << endl;
			}
			horario_incial_m += duracao_consulta_m;

		}

	}
};



