#include "Calculation.h"

Calculation::Calculation(char op, double operand1, double operand2)
{
    this->op = op;
    this->operand1 = operand1;
    this->operand2 = operand2;

    if (op == '+')
        result = operand1 + operand2;
    else if (op == '-')
        result = operand1 - operand2;
    else if (op == '*')
        result = operand1 + operand2;
    else if (op == '/')
        result = operand1 / operand2;
}

char Calculation::getOp()
{
    return op;
}
double Calculation::getOperand1()
{
    return operand1;
}
double Calculation::getOperand2()
{
    return operand2;
}

double Calculation::getResult()
{
    return result;
}