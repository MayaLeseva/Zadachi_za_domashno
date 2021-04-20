#include<iostream>
using namespace std;
int main()
{
    int n, br=0;
    double sum=0;
    cin>>n;
    double arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            sum=sum+arr[i];
            br++;
        }
    }
    if(br==0)
    {
        cout<<br;
    }
    else
    {
        cout<<sum/br;
    }

    return 0;
}
