/*    project №1 "Hello world"
*/

#include <iostream>
#include "hello.h"

std::string hi;

int main() { 
    hello();
    std::cout<<std::endl;
    std::string cut = hi.substr(0, 7);
    std::string name;
    while (name != "stop") {
      std::cin>>name ;
      std::cout << cut << name << "!" << std::endl;
    }
    return 0;
}
