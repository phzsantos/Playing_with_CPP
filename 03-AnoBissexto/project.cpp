#include "project.h"

void _help(){
	system("clear");
	std::cout << ":::::>>>> É UM ANO BISSEXTO? <<<<:::::\n"
	       	     "\nPara iniciar o programa:\n"
	     	     "./a.out --start [Ano que você quer saber se é bissexto]\n";	     
}

int calculo( int ano ){
	system("clear");
	if( ano < 107 ){
		std::cout << "Antes do ano 107 d.C não tinhamos anos bissexto. Portanto, esse ano não é bissexto." << '\n'; 
	}else if(( ano % 400 == 0) || ( ano % 4 == 0) && ( ano % 100 != 0)){
		std::cout << "Esse ano é bissexto!" << '\n';
	}else{
		std::cout << "Esse ano não é bissexto!" << '\n';
	}
	return 0;
}

void _start( int argc, char ** argv ){
	if( argc > 2){
		std::string parametro = argv[1];
		int ano = std::stoi( argv[2] );
		if( parametro == "--start" || parametro == "-s" ){
			calculo( ano );
		}else{
			_help();
		}
	}else{
		_help();
	}
}

