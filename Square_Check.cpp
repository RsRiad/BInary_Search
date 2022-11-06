#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll binary_Search(ll x)
{
    if(x < 2) return x;
    ll start = 1;
    ll end = x;//x/2

    while(start <= end)
    {
        ll mid = start +((end-start)/2);
        //ll mid = (start+end)/2;
        if(mid*mid == x)  return mid;
        else if (mid*mid > x) end = mid - 1;
        else start = mid + 1;
    }

    return end;

}

int main()
{
    ll x;
    cout<<"Enter Desire Element: ";
    cin>>x;

    cout<<binary_Search(x);
    return 0;
}
