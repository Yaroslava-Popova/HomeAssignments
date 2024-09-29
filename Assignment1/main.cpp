/* Popova Yaroslava
    st132757@student.spbu.ru
    project №1 "Hello world"
*/

#include <iostream>    // Перенести include'ы в заголовочный файл
#include <string>
#include "headers.h"

using namespace std;    // Убираем

string hi;    // Глобальные переменные не нужны

int main() {
    hello();    // Переписать через функцию приветствия, которая принимает на вход строку, 
                // которую ввели с клавиатуры в процессе работы функции main
    cout<<endl; 
    string cut = hi.substr(0, 7);
    string name;
    while (name != "stop") {    // Сделать цикл бесконечным и в нем условие на выход из цикла
      cin>>name;
      cout << cut << name << "!" << endl;
    }
    return 0;
}
