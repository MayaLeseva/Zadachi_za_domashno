#include<iostream>
using namespace std;
int main()
{
    int n, indmin, indmax;
    double maxi, mini;
    cin>>n;
    double arr[n], swap;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    maxi=arr[0];
    mini=arr[0];
    indmin=0;
    indmax=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            indmax=i;
        }
        if(arr[i]<mini)
        {
            mini=arr[i];
            indmin=i;
        }
}
    swap=arr[indmax];
    arr[indmax]=arr[indmin];
    arr[indmin]=swap;
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
}
