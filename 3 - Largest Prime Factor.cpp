#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,max;
    int N;
    cin>>N;
    while(N--)
    {
        cin>>n;
        while(n%2==0)
        {
            n=n/2;
        }
        if(n==1)
            max=2;
        else
        {
            for(int i=3;i<=sqrt(n);i+=2)
            {
                while(n%i==0)
                n=n/i;
                max=i;
            }
            if(n>2)
                max=n;
        }
        cout<<max<<endl;
    }
    return 0;
}
