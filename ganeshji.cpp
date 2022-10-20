#include<bits/stdc++.h>
using namespace std;
int main()
{
   long t;
   cin>>t;
   while (t--) {
    long n;
    cin>>n;
    vector<long> v(n,0);
    int l=0,r=n-1;
    int c=1;
    while(l<=r)
    {
      if(c%2!=0)
      {
        v[l++]=c;
        c++;
      }
      else
      {
        v[r--]=c;
        c++;
      }
    }
    for(auto it:v)
    {
      cout<<it<<" ";
    }
    cout<<endl;
   }
}
