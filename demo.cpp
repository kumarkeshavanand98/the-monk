#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll a[n],b[n];
    ll min;
    for(int i=0;i<n;i++)
    {cin>>a[i];
      b[i]=a[i];
      if(i==0)
      min=a[0];
      if(a[i]<min)
      min=a[i];
    }
    sort(a,a+n);
    int f=0;
    for(int i=0;i<n;i++)
    {
      if(b[i]!=a[i])
      {
        if(__gcd(b[i],a[i])!=min)
        {f=1;
          break;
        }
      }
    }
    if(f==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }
}
