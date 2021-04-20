#include<iostream>
using namespace std;
int main()
{
    int n, maxi, a=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    maxi=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            a=i;
        }
    }
    cout<<maxi<<" "<<a;
    return 0;
}
