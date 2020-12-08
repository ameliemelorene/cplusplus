#include <iostream>
#include "intstack.h"

void test1(){//test du cas normal
    IntStack pile (4);
    pile.AffichePile();
    bool empty=pile.vide();
    std::cout<<empty<<std::endl;
    pile.push(1);
    pile.AffichePile();
    pile.push(2);
    pile.AffichePile();
    pile.push(3);
    pile.AffichePile();
    pile.push(4);
    pile.AffichePile();
    bool test = pile.rempli();
    int r=pile.pop();
    pile.Affichepile();
    std::cout<<test<<std::endl;
    std::cout<<r<<std::endl;
    pile.delete_stack();
}


int main(){
    test1();
    return 0;
}
