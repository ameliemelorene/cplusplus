#include <iostream>
class IntStack{
public:
    IntStack (int tutu) : hauteur(tutu), top(0){//on initialise top et hauteur
        if (hauteur<=0){
            std::cout <<"taille nulle"<<std::endl;
            throw(0);
        }
        else {
            tab = new int [hauteur];}
    }
    IntStack (const IntStack& rst) : hauteur(rst.get_hauteur), top(rst.get_top){
        tab = new int [hauteur];
    }
    IntStack(const IntStack& rst) : hauteur(
    ~IntStack(){
        delete []tab;
    }
    void push (int e) {
        
        if (not rempli()) {
            tab[top]= e;
            top = top+1;
        }
        else {
            std::cout<<"pile pleine"<<std::endl;
            throw(1);
        }
    }
    bool rempli(){
        return top==hauteur;
    }
    int get_hauteur(){
        return hauteur;
    }
    int get_top(){
        return top;
    }
    int pop(){
        if (not vide()) {
            top=top-1;
            return tab[top];
        }
        else{
            std::cout<<"pile déjà vide"<<std::endl;
            throw(2);
        }
    }
    void AffichePile(){
        std::cout<<'[';
        for (int i=0; i< top ;i++){
            std::cout << tab[i]<<',';
        }
        std::cout<<']'<< std::endl;
    }
    
    bool vide(){
        return top==0;
    }
    void delete_stack(){
        delete [] tab;
    }
private:
    int top;
    int *tab;
    int hauteur;

};
