#include"term.hpp"
#include<string>
#include<string.h>
using namespace std;



string Term :: toString(){
    string term;
    
    /*Checks for different things to properly format each term*/
    if(coefficient ==0){
        term = "0";
    }
    else if(exponent==0){
        term = to_string(coefficient);
    }
    else if(exponent==1){
        term = to_string(coefficient)+variable;
    }
    else{
        term = to_string(coefficient)+variable+"^"+to_string(exponent);
    }
    return term;
}

int Term :: getCoefficient(){
    return coefficient;
}

string Term :: getVariable(){
    return variable;
}

int Term :: getExponent(){
    return exponent;
}