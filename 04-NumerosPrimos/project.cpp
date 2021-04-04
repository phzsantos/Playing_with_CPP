#include "project.h"

void _help(){
	std::cout << ">>>>::::: ESSE É NUMERO É PRIMO? :::::<<<<\n"
		     "\nPara iniciar o programa\n"
		     "./a.out --start [numero que você quer saber se é primo]\n";
}

int inicial, divisores = 0;

int calculo( int numero ){
	for( inicial = 1; inicial<=numero; inicial++){
		if(numero % inicial == 0){
			divisores++;
		}
	}
	
	if(divisores == 2){
		std::cout << "Esse número é primo" << '\n';
	}else{
		std::cout << "Esse número não é primo" << '\n';
	}
	return 0;
}

void _start( int argc, char ** argv ){
	if( argc > 2 ){
		std::string parametro = argv[1];
		int numero = std::stoi( argv[2] );
		if( parametro == "--start" || parametro == "-s" ){
			calculo( numero );
		}else{
			_help();
		} 
	}else{
		_help();
	}
}
