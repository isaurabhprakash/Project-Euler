#include<iostream>
#include<cmath>
using namespace std;
bool isprime(long long n);
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        long long n,count=1,candidate=1;
        cin>>n;
        if(n==1)
        {
            cout<<2<<endl;
        }
        else
        {
            while(count<=n)
            {
                candidate=candidate+1;
                if(isprime(candidate))
                    count++;
            }
            cout<<candidate<<endl;
        }
    }
    return 0;
}
bool isprime(long long n)
{
   if(n==1)
    return false;
   else if(n<4)
    return true;
   else if(n%2==0)
    return false;
   else
   {
       if(n<9)
        return true;
       else if(n%3==0)
        return false;
       else
       {
           long long r=floor(sqrt(n));
           long long f=5;
           while(f<=r)
            {
             if(n%f==0||n%(f+2)==0)
                return false;
            f=f+6;
            }
        }
   }
   return true;
}
