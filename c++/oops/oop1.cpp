#include<iostream>
#include<cstring>
using namespace std;
class Hero {
private:
  int health;
public:
  char *name;
  char level;
Hero(){//making constructor
  cout<<"Constructor called"<<endl;
  name = new char[100];
}
Hero(int health){
  this->health=health;
}
//parameterised constructor
Hero(int health, char level){
  this->level=level;//this is a pointer that stores the address of current object
  this->health=health;
}
//copy constructor->it also do shallow copy and deep copy
Hero(Hero& temp){
  cout<<"copy constructor called "<<endl;
  this->health=temp.health;
  this->level=temp.level;
}
void print(){
  cout<<endl;
  cout<<"new"<<this->name<<" ,";
  cout<<"health"<<this->health<<" ,";
  cout<<"level"<<this->level<<" }";
  cout<<"health "<<this->health<<endl;
  cout<< "level "<<this->level<<endl;
}
int getHealth(){//getter
  return health;
}
char getLevel(){
  return level;
}
void setHealth(int h){//setter
  health=h;
}
void setLevel(char ch){
  level=ch;
}
//destructor
~Hero() {
  cout<<"Destructor called"<<endl;
}
//void setName(char name[]){it is for shallow copying
    //strcpy(this->name, name);
//}
};
//constructor:- it is involve in object creation and it have no return type
//acess modifiers private,protected and public
// private:i can only acess the variables in the class
//public i can acess anywhere
//getter and setter function are in class from them we can acess the variables
//Destructor->it is used to deallocate the memory when your objects life is going to be end then the destructor is called for making free the memory
//there is no return type of destructor
//differe between constructor and destructor^mention above 

int main()
{ //static 
  Hero a;

  //dynamic
  Hero *b = new Hero();







  /*Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
     char name[7] = " Babbar";
     hero1.setName(name);

   hero1.print();*/


  /*Hero S(70 , 'c');
  S.print();
  Hero R(S);
  R.print();*/



  /*Hero ramesh(10);//it is default constructor
  cout<<"address of ramesh "<<&ramesh<<endl;
  cout<<"ramesh health is= "<<ramesh.getHealth()<<endl;
  ramesh.setHealth(70);
  cout << "size: " <<sizeof(ramesh)<<endl;
  ramesh.level='A';
  cout<<"level is: "<< ramesh.level <<endl;*/
  return 0;
}
