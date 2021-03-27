#include <iostream>
#include <unistd.h>
#include <ctime>

int main(){
    std::cout << "Começando o Hacking" << '\n';
    for(int i = 1; i < 101; i++){
	if( i<90 ){    
        sleep(1);
        std::cout << i << "%" << '\n';
	}else{
		sleep(3);
		std::cout << i << "%" << '\n';
	}
    }
    sleep(4);
    std::cout << "Hack terminado" << '\n';
    return 0;
}
