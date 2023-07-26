#include"polynomial.hpp" 
#include<vector>
#include<map>
#include<iostream>
using namespace std;

void Polynomial :: add(Term t){
    poly_list.push_back(t);
}

void Polynomial :: print(){
    for(int i=0;i<poly_list.size();i++){
        /*Gets rid of 0's*/
        if(poly_list[i].getCoefficient()==0){
            continue;
        }
        /*Deals with addition sign showing up at end*/
        if(i==(poly_list.size()-1)){
            cout<<poly_list[i].toString();
        }else{
            cout<<poly_list[i].toString()<<" + ";
            }
        }
    cout<<"\n";
}

Polynomial Polynomial :: combineLikeTerms(){
    Polynomial combine;
    map<int,int> combine_map; //Map 
    map<int,int> :: iterator it; //Map iterator
    
    for(int i=0;i<poly_list.size();i++){
        int exp = poly_list[i].getExponent();
        int coef = poly_list[i].getCoefficient();
        /*If term whose exponent is already a key is found, will add to the mapped value else will add new element to map*/
        if(combine_map.find(exp) != combine_map.end()){
            combine_map[exp]+=coef;
        }else{
            combine_map.insert({exp, coef});
        }

    }
    /*Adds all combined terms to Polynomial object*/
    for(it=combine_map.begin();it != combine_map.end();it++){
        Term t1(it->second,"X",it->first);
        combine.add(t1); 
    }

    return combine;   
}