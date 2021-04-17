#include "project.h"

int programa(){
	int HoraSaida = {0}, HorasIntervalo = {0}, MinutosSaida = {0}, MinutosIntervalo = {0}, HorasTotais ={0}, MinutosTotais = {0};
	
	cout << "::::: HORARIO DE SAIDA :::::" << '\n';	
	cout << "Que HORA você saiu: ";
	cin >> HoraSaida;

	cout << "Que MINUTO você saiu: ";
	cin >> MinutosSaida;
	cout << '\n';

	cout << "::::: MINUTOS DE ALMOÇO OU HORAS PARA SOMAR :::::" << '\n';
	cout << "Quantas HORAS você tem de almoço: ";
	cin >> HorasIntervalo;

	cout << "Quantos MINUTOS você tem de almoço: ";
	cin >> MinutosIntervalo;
	cout << '\n';
	
	//Totalizando as horas e os minutos
	HorasTotais = HoraSaida + HorasIntervalo;
	MinutosTotais = MinutosSaida + MinutosIntervalo;

	//Loop para quebrar a hora a cada 60 minutos (Relogio)
	while(MinutosTotais >= 60){
		HorasTotais++;
		MinutosTotais = MinutosTotais - 60;
	}	
	
	cout << "::::: RESULTADO :::::" << '\n';
	cout << "Essa é hora que você deve voltar do almoço: " << setfill('0') << setw(2) << HorasTotais << ":" << setfill('0') << setw(2) << MinutosTotais << '\n';
	return 0;
}
