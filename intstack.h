#include <iostream>
class IntStack{
public:
    IntStack (int tutu) : hauteur(tutu), top(0){//on initialise top et hauteur
        if hauteur<=0{
            std::cout <<'taille nulle';
            throw(0);
        }
        else {
            tab = new int [hauteur];}
    }
    void push (int e) {
        
        if (not rempli()) {
            tab[top]= e;
            top = top+1;
        }
        else {
            std::cout<<'pile pleine';
            throw(1);
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
        else{
            std::cout<<'pile déjà vide';
            throw(2);
        }
    }
    void AffichePile(){
        std::cout<<'[';
        for (int i; i< top ;i++){
            std::cout << tab[i];
        }
        std::cout<<']'<< std::endl;
    }
        
          
    
    }
    bool vide(){
        return hauteur==0;
    }
    void delete_stack(){
        delete [] tab;
    }
private:
    int top;
    int *tab;
    int hauteur;

};
