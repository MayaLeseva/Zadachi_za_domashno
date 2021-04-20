#include<iostream>
using namespace std;
int main()
{
    int n, x;
    cin>>n;
    int arr[n];
    bool a=false;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            cout<<i+1;
            a=true;
            break;
        }
    }
    if(a==false)
    {
        cout<<"No";
    }
    return 0;
}

