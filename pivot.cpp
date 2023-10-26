#include<iostream>
using namespace std;
int main()
{
    int a[]={5,11,12,15,16,2,4},s=0,e=5;
    int mid = s + (e-s)/2;
    while(s<e)
    {
        if(a[mid]>a[0])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    cout<<s;
}