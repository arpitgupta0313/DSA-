// find unique
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
    cout<<sum;

    return 0;
}