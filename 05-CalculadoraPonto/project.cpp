#include "project.h"

int programa()
{
	int hora_saida, minuto_saida, 
	    hora_intervalo, minuto_intervalo,  
	    horas_total_maximo, minutos_total_maximo, 
	    horas_total_minimo, minutos_total_minimo, 
	    minuto_intervalo_minimo, mostra_hora_minima;
	
	horas_total_minimo = {0};
	minutos_total_minimo = {0}; 
	minuto_intervalo_minimo = {30};

	cout << "::::: HORARIO DE SAIDA :::::" << '\n';	
	cout << "Que HORA você saiu: ";
	cin >> hora_saida;

	cout << "Que MINUTO você saiu: ";
	cin >> minuto_saida;

	cout << '\n' << "::::: MINUTOS DE ALMOÇO OU HORAS PARA SOMAR :::::" << '\n';
	cout << "Quantas HORAS você tem de almoço: ";
	cin >> hora_intervalo;

	cout << "Quantos MINUTOS você tem de almoço: ";
	cin >> minuto_intervalo;
	cout << '\n';
	
	if((hora_intervalo == 0) && (minuto_intervalo < minuto_intervalo_minimo))
	{
		system("clear");
		cout << "\e[31;1m" << "WARNING!!! Você não pode ter menos que 30 minutos de intervalo. WARNING!!!" << "\e[m" << '\n';
		cout << '\n';
		programa();
	}
	else if ((hora_saida < 0) || (hora_intervalo < 0)) 
	{
		system("clear");
		cout << "\e[31;1m" << "WARNING!!! Você tentou digitar uma(s) hora(s) negativa(s)! WARNING!!!" << "\e[m" << '\n';
		cout << '\n';
		programa();		
	}
	else
	{
		if(minuto_intervalo > 30)
		{
			mostra_hora_minima = {1};

			horas_total_minimo = hora_saida;
			minutos_total_minimo = minuto_saida + minuto_intervalo_minimo;

			while(minutos_total_minimo >= 60)
			{
				horas_total_minimo++;
				minutos_total_minimo = minutos_total_minimo - 60;
			}
		}	

		horas_total_maximo = hora_saida + hora_intervalo;
		minutos_total_maximo = minuto_saida + minuto_intervalo;

		while(minutos_total_maximo >= 60)
		{
			horas_total_maximo++;
			minutos_total_maximo = minutos_total_maximo - 60;
		}
			
		cout << "::::: RESULTADO :::::" << '\n';
		if(mostra_hora_minima == 1)
		{
			cout << "Essa é a hora MINIMA que você pode voltar do almoço: " << setfill('0') << setw(2) << horas_total_minimo 
			     << ":" << setfill('0') << setw(2) << minutos_total_minimo << '\n';
		}
		cout << "Essa é a hora MAXIMA que você deve voltar do almoço: " << setfill('0') << setw(2) << horas_total_maximo 
		     << ":" << setfill('0') << setw(2) << minutos_total_maximo << '\n';
	}
	return 0;
}
