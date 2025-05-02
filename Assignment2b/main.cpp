#include <iostream>
#include <sstream>
#include "rpncalc.h"

int main() {
    std::string input;

    std::getline(std::cin, input);
    std::stringstream stream(input);

    double result = evaluate(stream);

    std::cout << "Result: " << result;
}
