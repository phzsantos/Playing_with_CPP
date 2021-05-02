#include "project.h"

int programa(){
	int HoraSaida = {0}, HorasIntervalo = {0}, MinutosSaida = {0}, MinutosIntervaloMaximo = {0}, MinutosIntervaloMinimo = {30}, HorasTotaisMaximo ={0}, MinutosTotaisMaximo = {0}, HorasTotaisMinimo = {0}, MinutosTotaisMinimo = {0}, FlagMostrarHoraMinima = {1};
	
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
	cin >> MinutosIntervaloMaximo;
	cout << '\n';
	
	if(MinutosIntervaloMaximo != 30){

		//Totalizando as horas e os minutos (MAXIMO)
		HorasTotaisMaximo = HoraSaida + HorasIntervalo;
		MinutosTotaisMaximo = MinutosSaida + MinutosIntervaloMaximo;

		//Loop para quebrar a hora a cada 60 minutos (Relogio MAXIMO)
		while(MinutosTotaisMaximo >= 60){
			HorasTotaisMaximo++;
			MinutosTotaisMaximo = MinutosTotaisMaximo - 60;
		}

		//Totalizando as horas e os minutos (MINIMO)
		HorasTotaisMinimo = HoraSaida + 0;
		MinutosTotaisMinimo = MinutosSaida + MinutosIntervaloMinimo;

		//Loop para quebrar a hora a cada 60 minutos (Relogio MINIMO)
		while(MinutosTotaisMinimo >= 60){
			HorasTotaisMinimo++;
			MinutosTotaisMinimo = MinutosTotaisMinimo - 60;
		}	
	}else{

		FlagMostrarHoraMinima = {0};

		//Totalizando as horas e os minutos (MAXIMO)
		HorasTotaisMaximo = HoraSaida + HorasIntervalo;
		MinutosTotaisMaximo = MinutosSaida + MinutosIntervaloMaximo;

		//Loop para quebrar a hora a cada 60 minutos (Relogio MAXIMO)
		while(MinutosTotaisMaximo >= 60){
			HorasTotaisMaximo++;
			MinutosTotaisMaximo = MinutosTotaisMaximo - 60;
		}
	}	
	
	cout << "::::: RESULTADO :::::" << '\n';
	if(FlagMostrarHoraMinima == 1){
		cout << "Essa é a hora MINIMA que você pode voltar do almoço: " << setfill('0') << setw(2) << HorasTotaisMinimo << ":" << setfill('0') << setw(2) << MinutosTotaisMinimo << '\n';
	}
	cout << "Essa é a hora MAXIMA que você deve voltar do almoço: " << setfill('0') << setw(2) << HorasTotaisMaximo << ":" << setfill('0') << setw(2) << MinutosTotaisMaximo << '\n';
	return 0;
}