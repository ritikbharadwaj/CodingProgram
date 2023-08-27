#include<iostream>
// #include<vector>
int v[10] = {1,2,0,5,0,6,0,6,7,0};
using namespace std;
void print() {
    for (int j = 0; j < 11; j++)
    {
        cout<<" "<<v[j];
    }
    cout<<endl;
}
void sort() {
    int i = 0;
     for (int j = 0; j < 11; j++)
    {
        if (v[j] != 0)
        {
            swap(v[j], v[i]);
            i++;
        }
        
    }
}
int main() {   
    sort();
    print();
    return 0;
}