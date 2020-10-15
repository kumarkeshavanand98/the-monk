#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    long a[n],b[n];
    long min;
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
