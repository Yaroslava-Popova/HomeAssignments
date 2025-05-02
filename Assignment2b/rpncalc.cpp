#include "rpncalc.h"
#include <vector>

static void push(std::vector<double>& stack, double value) {
    stack.push_back(value);
}

static double pop(std::vector<double>& stack) {
    double value = stack.back();
    stack.pop_back();
    return value;
}

static bool isOperator(const std::string& token) {
    return (token == "+" || token == "-" || token == "*" || token == "/");
}

double evaluate(std::stringstream& stream) {
    std::vector<double> stack;

    std::string token;
    while (stream >> token) {
        if (!isOperator(token)) {
            double value = std::stod(token);
            push(stack, value);
        } else {
            double operand1 = pop(stack);
            double operand2 = pop(stack);

            double result = 0;
            if (token == "+")
                result = operand2 + operand1;
            else if (token == "-")
                result = operand2 - operand1;
            else if (token == "*")
                result = operand2 * operand1;
            else if (token == "/")
                result = operand2 / operand1;

            push(stack, result);
        }
    }

    return stack.back();
}