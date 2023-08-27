//single inheritence:-there is class a and class b if class b inherits the properties of class a then it is single inheritence
#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int height;
    
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog: public Animal{

};

int main(){
    Dog a;
    a.speak();

    return 0;
}