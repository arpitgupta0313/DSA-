#include<iostream>
using namespace std;
int main()
{
    int a = 2;
    {
        int a = 5;
        cout<<a<<endl;
    }
    cout<<a;

}