//inhertence-> inheriting the properties of the other class
//protected-> it is same as private but we can inherit the properties of parent class to the child class
#include<iostream>
using namespace std;

class Human{
    
    public:
    int height;
    int weight;
    
    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    int setHeight(){
        return this->height;
    }

};         //niche ye mode hai class ka
class Male:public Human {
    public:
    string color;

    void sleep(){
        cout<< "Male Sleeping"<< endl;
    }
};
int main(){
    Male m1;
    cout<< m1.height << endl;
    return 0;




    /*Male obj1;
    cout<< obj1.age<< endl;
    cout<< obj1.weight<< endl;
    cout<< obj1.color<< endl;*/
}