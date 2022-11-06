// Find the last value <=X
//2,3,5,6,8,10,12 ;X=4 ; Ans=6

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int lowerBound(int arr[],int x)
{
    int start = 0;
    int end = x-1;//x/2
    int ans=-1;
    while(start <= end)
    {
        int mid = start +((end-start)/2);
        if (arr[mid] <= x)
        {
            ans=mid;
            start = mid + 1;
        }
        else end = mid - 1;

    }

    return arr[ans];

}

int main()
{
    int x;
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements: ";
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);
    cout<<"Enter your desire number: ";
    cin>>x;
    cout<<"Next Value : "<<lowerBound(arr,x);

    return 0;
}


