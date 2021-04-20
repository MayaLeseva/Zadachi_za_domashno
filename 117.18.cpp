#include<iostream>
using namespace std;
int main()
{
    int n;
    double maxi, mini;
    cin>>n;
    double arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    maxi=arr[0];
    mini=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    cout<<maxi*mini<<" "<<maxi-mini;
    return 0;
}
