/*    st132757@student.spbu.ru
    project №1 "hello world"
*/

#include <string>
#include <iostream>

extern std::string hi;

void hello() {
    hi = "Hello, world!";
    std::cout << hi;
}
