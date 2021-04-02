#include "project.h"

void _help(){
	system("clear");
	std::cout << "--->>>::::: CALCULADORA DE DOBRADURAS :::::<<<---\n"
		     "\nPara iniciar o programa:\n"
		     "./a.out --start [quantas vezes foi dobrado]\n";
}

int calculo( int numero ){
	return numero * 2;
}

void _start( int argc, char ** argv ){
	if(argc > 2){
		std::string parametro = argv[1];
		int numero = std::stoi( argv[2] );
		if( parametro == "--start" || parametro == "-s" ){
			system("clear");
			std::cout << "Esse é o numero de pedaços de papel que você vai ter " << calculo( numero ) << '\n';
		}else{
			_help();
		} 
	}else{
	_help();
	}
}
