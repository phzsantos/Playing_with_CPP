#include "project.h"

void _help(){
	std::cout << ">>>>::::: ESSE É NUMERO É PRIMO? :::::<<<<\n"
		     "\nPara iniciar o programa\n"
		     "./a.out --start [numero que você quer saber se é primo]\n";
}

int calculo( int numero ){
	if( (numero == 2) || (numero == 3) || (numero == 5) || (numero == 7) || (numero == 11) || (numero == 13)){  
		std::cout << "Esse número é primo" << '\n';
	}else if(( numero % 2 == 0 ) || ( numero % 3 == 0 ) || ( numero % 5 == 0 ) || ( numero % 7 == 0 ) || ( numero % 11 == 0 ) || ( numero % 13 == 0 )){
		std::cout << "Esse número não é primo" << '\n';
	}else{
		std::cout << "Esse número é primo" << '\n';
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
