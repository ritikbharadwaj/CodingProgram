//encapsulation->encapsualtion is wrapping up data members and function and the single entity comes that called encapsulation
//fully encapsulated class is called when all the data members are declared in private 
//advantages of encapsulation->it is data hiding and hiding the information from other class
#include<iostream>
using namespace std;
class Student{
  private://it is encapsulation
  string name;
  int age;
  int height;

  public:
  int getAge(){
    return this->age;
  }
};
int main(){
  Student first;

  cout<<"Sab shi chalra hai"<< endl;

  return 0;
}
