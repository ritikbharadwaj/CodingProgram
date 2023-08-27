#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the two number = ";
    cin>>a>>b;
    char op;
    cout<<"enter the operation to be performed= ";
    cin>>op;
    switch ( op )
    {
    case '+':{
        int sum;
        sum =  a + b;
        cout<<"sum = "<<sum<<endl;
        break;
    }

    case '-':{
        int sub;
        sub = a - b;
        cout<<"sub = "<<sub<<endl;
        break;
    }

    case '*':{
        int mult;
        mult = a * b;
        cout<<"multiply = "<<mult<<endl;
        break;
    }

    case '/':{
        int div;
        div = a / b;
        cout<<"division = "<<div<<endl;
        break;
    }

    case '%':
        int mod;
        mod = a % b;
        cout<<"remainder of division = "<<mod<<endl;
    
    default:{
        exit(0);    
        break;
    }
    }
}   