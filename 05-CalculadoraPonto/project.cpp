#include "project.h"

int programa(){
	int hr_1 = {0}, hr_2 = {0}, min_1 = {0}, min_2 = {0}, hr_t ={0}, min_t = {0};
	
	cout << "::::: HORARIO DE SAIDA :::::" << '\n';	
	cout << "Que HORA você saiu: ";
	cin >> hr_1;

	cout << "Que MINUTO você saiu: ";
	cin >> min_1;
	cout << '\n';

	cout << "::::: MINUTOS DE ALMOÇO OU HORAS PARA SOMAR :::::" << '\n';
	cout << "Quantas HORAS você tem de almoço: ";
	cin >> hr_2;

	cout << "Quantos MINUTOS você tem de almoço: ";
	cin >> min_2;
	cout << '\n';

	hr_t = hr_1 + hr_2;
	min_t = min_1 + min_2;

	while(min_t >= 60){
		hr_t++;
		min_t = min_t - 60;
	}	
	
	cout << "::::: RESULTADO :::::" << '\n';
	cout << "Essa é hora que você deve voltar do almoço: " << setfill('0') << setw(2) << hr_t << ":" << setfill('0') << setw(2) << min_t << '\n';
	return 0;
}
