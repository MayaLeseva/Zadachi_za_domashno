#include<iostream>
using namespace std;
int main()
{
    int n, br=0, pr=1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]%7==0)
        {
            pr=pr*arr[i];
            br=1;
        }
    }
    if (br==0)
    {
        cout<<"No";
    }
    else
    {
        cout<<pr;
    }
    return 0;
}
