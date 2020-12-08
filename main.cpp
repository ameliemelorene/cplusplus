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

void test2(){//test du cas d'erreur pile de hauteur négative ou nulle
    IntStack Pile(-1);//taille nulle
//terminate called after throwing an instance of 'int'
}

void test3(){//test du cas d'erreur pile pleine et push
    IntStack pile(2);
    pile.push(1);
    pile.push(2);
    pile.push(3);//pile pleine
//terminate called after throwing an instance of 'int'
}

void test4(){//test du cas d'erreur pile vide et pop
    IntStack pile(4);
    int r =pile.pop();//pile déjà vide
//terminate called after throwing an instance of 'int'
}



int main(){
    test1();
    test2();
    test3();
    test4();
    return 0;
}
