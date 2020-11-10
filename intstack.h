#include <iostream>
class IntStack{
public:
    IntStack (int tutu) : hauteur(tutu), top(0){//on initialise top et hauteur
        tab = new int [hauteur];
    }
    void push (int e) {
        if (not rempli()) {
            tab[top]= e;
            top = top+1;
        }
    }
    bool rempli(){
        return top==hauteur;
    }
    int pop(){
        if (not vide()) {
            top=top-1;
            return tab[top+1];
        }
    }
    bool vide(){
        return hauteur==0;
    }
    void delete_stack(){
        top=0
    }
private:
    int top;
    int *tab;
    int hauteur;

};
