#include <string>
#include <iostream>
#include "Meuble.h"
using namespace std;


int main () {

Meuble* m1= new Meuble("Buffet",12,5);
Meuble* m2= new Meuble("Table",4.5,12);
Meuble* m3= new Meuble("Chaise",10,3);

cout <<"Il y a : "<<Meuble::nombreDeMeuble<<" meubles"<<endl;
delete m1;
cout <<"Il y a : "<<Meuble::nombreDeMeuble<<" meubles"<<endl;

return 0;

}
