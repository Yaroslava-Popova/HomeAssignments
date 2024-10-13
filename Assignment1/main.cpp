/*    project №1 "Hello world"
*/

#include "hello.h"

int main() { 
    hello("world");
    std::string name;
    std::cin >> name;
    while (name !="stop") {
      hello(name);
      std::cin >> name;
    }
    return 0;
}
