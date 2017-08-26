#include<iostream>
using namespace std;
long long palin(long long x);
int main()
{
   int N;
   cin>>N;
   while(N--)
   {
        long long num;
        cin>>num;
        long long max=-1,res;
        for(long long i=100;i<=999;i++)
        {
            for(long long j=i;j<=999;j++)
            {
                if(palin(i*j))
                    if(i*j>max&&i*j<num)
                        max=i*j;
            }
        }
        cout<<max<<endl;
   }
    return 0;
}
long long palin(long long x)
{
    long long temp=x,res=0;
    while(temp!=0)
    {
        long long a=temp%10;
        temp=temp/10;
        res=res*10+a;
    }
    return x==res;
}
