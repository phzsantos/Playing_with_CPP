#include "project.h"

int programa(){
	int hr_1 = {0}, hr_2 = {0}, min_1 = {0}, min_2 = {0}, hr_t ={0}, min_t = {0};
	
	system("clear");
	cout << "::::: HORARIO DE SAIDA :::::" << '\n';	
	cout << "Que hora você saiu: ";
	cin >> hr_1;

	cout << "Que minuto você saiu: ";
	cin >> min_1;

	system("clear");
	cout << "::::: MINUTOS DE ALMOÇO OU HORAS PARA SOMAR :::::" << '\n';
	cout << "Hora para somar: ";
	cin >> hr_2;

	cout << "Minuto para somar: ";
	cin >> min_2;

	hr_t = hr_1 + hr_2;
	min_t = min_1 + min_2;

	while(min_t >= 60){
		hr_t++;
		min_t = min_t - 60;
	}	
	
	system("clear");
	cout << "::::: RESULTADO :::::" << '\n';
	cout << "Essa é hora que você deve voltar do almoço: " << setfill('0') << setw(2) << hr_t << ":" << setfill('0') << setw(2) << min_t << '\n';
	return 0;
}
