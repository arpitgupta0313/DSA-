#include<iostream>
using namespace std;
int main()
{
    int a[100],n,key=9,s=0,ans=-1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    n= n-1;
    int mid=s+(n-s)/2;
    

    //first occurance
     while(n>=s)
    {
        if(a[mid]==key)
        {ans=mid;
        n = mid - 1;}
        else if(a[mid]<key)
        {
            s = mid + 1;
        }
        else if(key<a[mid]){
            n = mid - 1;
        }
        mid=s+(n-s)/2;
    }
    cout<<ans;
    
}