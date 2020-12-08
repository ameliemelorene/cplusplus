#include <iostream>
#include "intstack.h"

void test1(){//test du cas normal
    IntStack pile (4);
    pile.AffichePile();//[]
    bool empty=pile.vide();
    std::cout<<empty<<std::endl;//1
    pile.push(1);
    pile.AffichePile();//[1,]
    pile.push(2);
    pile.AffichePile();//[1,2,]
    pile.push(3);
    pile.AffichePile();//[1,2,3,]
    pile.push(4);
    pile.AffichePile();[1,2,3,4,]
    bool test = pile.rempli();//
    int r=pile.pop();
    pile.Affichepile();//[1,2,3,]
    std::cout<<test<<std::endl;//1
    std::cout<<r<<std::endl;//4
    pile.delete_stack();
}


int main(){
    test1();
    return 0;
}
