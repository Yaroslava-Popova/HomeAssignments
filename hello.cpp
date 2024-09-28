/*  Popova Yaroslava
    st132757@student.spbu.ru
    project №1 "hello world"
*/

#include <iostream>
#include <string>

using namespace std;

extern string hi;

void hello() {
    hi = "Hello, world!";
    cout << hi;
}
