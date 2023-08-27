//polymorphism:- one name multiple forms
//example:- father is husband for mother, brother for his sister, father for you
//types of polymorphism:-1) compile time polymorphism 2) run time polymorphism
//function overloading >> we have to change the input argument
#include<iostream>
using namespace std;
class A{
    public:
    void sayhello(){
        cout<<"hello ritik";
    }

     void sayhello(string name){
        cout<<"hello ritik";
    }
};
int main()
{
    A obj;
    obj.sayhello();
    return 0;
}
