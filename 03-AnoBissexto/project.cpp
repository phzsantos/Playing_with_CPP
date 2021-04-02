#include "project.h"

void _help(){
	std::cout << ":::::>>>> É UM ANO BISSEXTO? <<<<:::::\n"
	       	     "\nPara iniciar o programa:\n"
	     	     "./a.out --start [Ano que você quer saber se é bissexto]\n";	     
}

void _retorno(){
	std::cout << "Esse ano não é bissexto" << '\n';
}


int calculo( int ano ){
	if(( ano % 4) == 0){
		if(( ano % 100) == 0){
			if((ano % 400) == 0){
				std::cout << "esse ano é bissexto" << '\n'; 
			}else{
				_retorno();
			} 
		}else{
			_retorno();
		}
	}else{
		_retorno();
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

