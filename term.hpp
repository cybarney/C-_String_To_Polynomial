
#include<string>
#ifndef TERM_H
#define TERM_H
using namespace std;

class Term {

private:
    int coefficient;
    string variable;
    int exponent;

public:

    Term(int coef = 0, string var = "x", int exp = 0){
        coefficient = coef;
        variable = var;
        exponent = exp;
    }
    string toString();
    int getCoefficient();
    string getVariable();
    int getExponent();

};

#endif
