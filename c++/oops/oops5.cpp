//multilevel inheritence:- when inheritence occures in multiple level it is called multilevel inheritence 
#include<iostream>
using namespace std;
class Dog{
    public:
    int age=10;
    int height=12;
    void speak(){
        cout<<"hello world"<<endl;
    }
};
class Germanshepherd:public Dog{
    
};
class Labrador:public Germanshepherd{

};
int main(){
    Labrador a;
    a.speak();
    cout<<a.age<<endl;
    cout<<a.height<<endl;
    return 0;
}