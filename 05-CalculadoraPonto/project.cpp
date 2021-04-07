#include "project.h"

int programa(){
	int hr_1 = {0}, hr_2 = {0}, min_1 = {0}, min_2 = {0}, hr_t ={0}, min_t = {0};
	
	cout << "Que horas iniciais: ";
	cin >> hr_1;
       	cout << '\n';

	cout << "Minutos iniciais: ";
	cin >> min_1;
	cout << '\n';

	cout << "Horas para somar: ";
	cin >> hr_2;
	cout << '\n';

	cout << "Minutos para somar: ";
	cin >> min_2;
	cout << '\n';

	hr_t = hr_1 + hr_2;
	min_t = min_1 + min_2;

	while(min_t >= 60){
		hr_t++;
		min_t = min_t - 60;
	}	

	cout << "Essa é hora que você deve voltar do almoço: " << hr_t << ":" << min_t << '\n';
	return 0;
}
