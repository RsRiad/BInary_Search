#include<bits/stdc++.h>
using namespace std;

int binary_Search(int arr[],int n)
{
    int s=0;//start
    int e=20-1;//end
    while(s<=e)
    {
        int m=s+(e-s)/2;
        if(n==arr[m]) return m;
        else if(n<arr[m]) e=m-1;
        else s=m+1;
    }
    return -1;

}

int main()
{
    int n;

    int arr[20];
    cout<<"Enter Array Elements: ";
    for(int i=0; i<20; i++) cin>>arr[i];
    sort(arr,arr+20);
    cout<<"Enter Desire Element: ";
    cin>>n;
    int index=binary_Search(arr,n);
    if(index!=-1) cout<<n<<" is present at "<<index<<"\n" ;
    else cout<<n<<" Not Found!\n";
    return 0;
}
