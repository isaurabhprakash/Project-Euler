#include<iostream>
using namespace std;
long long gcd(long long a,long long b);
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        long long n;
        long long ans=1;
        cin>>n;
        for(long long i=2;i<=n;i++)
        {
          ans=ans*i/gcd(i,ans);
        }
      cout<<ans<<endl;
    }
    return 0;
}
long long gcd(long long a,long long b)
{
    if(b!=0)
        return gcd(b,a%b);
    else
        return a;
}
