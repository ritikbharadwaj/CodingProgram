#include<iostream>
using namespace std;
class abc
{
private:
char name[50];
int age;
public:
void get()
{
  cout<<"enter name= ";
  cin>>name;
  cout<<"enter age= ";
  cin>>age;
}
void show()
{
  cout<<"\n name= "<< name;
  cout<<"\n age= "<< age;
}};
int main(void)
{
  abc a1;
  a1.get();
  a1.show();
  return 0;
}
