
#include<vector>
#include"term.hpp"
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

class Polynomial{
    private: 
        vector<Term> poly_list;
    public:
        Polynomial(){

        }
        void add(Term t);
        void print();
        Polynomial combineLikeTerms();
};

#endif