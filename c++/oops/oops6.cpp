//multiple inheritence:- when a class inherits the property of two class
#include<iostream>
using namespace std;
class Human{
    public:
    string color;
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Animal{
    public:
    int age;
    int weight;

    void bark(){
        cout<<"barking"<<endl;
    }
};
class Hybrid:public Human, public Animal{

};
int main(){
    Hybrid obj1;
    obj1.speak();
    obj1.bark();
    return 0;
}