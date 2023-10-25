// find duplicate
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a[100],n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum^a[i];
    }
     for(int i=1;i<n;i++)
    {
        sum=sum^i;
    }
    cout<<sum;

    return 0;
}