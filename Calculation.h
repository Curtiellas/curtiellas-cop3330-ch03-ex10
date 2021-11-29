/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 luis curtiellas
 */
#ifndef INTEGER_H
#define INTEGER_H

class Calculation {
    char op;
    double operand1;
    double operand2;
    double result;

    public:
    Calculation(char op, double operand1, double operand2);
    char getOp();
    double getOperand1();
    double getOperand2();
    double getResult();
    
};
#endif