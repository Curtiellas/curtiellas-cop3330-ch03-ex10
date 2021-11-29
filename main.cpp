/* ch03 ex10
Write a program that takes an operation followed by two operands and
outputs the result. For example:
+ 100 3.14
* 4 5
*/
#include <iostream>
#include "./Calculation.h"
#include "./Calculation.cpp"

using namespace std;

int main() {
    cout << "Enter an operand followed by two operators. Ex: + 100 3.14" << endl;

    char ch;
    double op1;
    double op2;

    do {
        cout << "Use one of the operators + - * / " << endl;
        cin>>ch;
        cin>>op1;
        cin>>op2;
    } while (ch != '+' && ch != '-' && ch != '*' && ch != '/');

    Calculation cal(ch, op1, op2);

    cout << cal.getOperand1() << " " << cal.getOp() << " " << cal.getOperand2() << " = " << cal.getResult() << endl;

}