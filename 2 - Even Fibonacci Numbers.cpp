#include<iostream>
using namespace std;
int main()
{
    long N,num;
    cin>>N;
    while(N--)
    {
        cin>>num;
        long a=1,b=1,sum=0,c=a+b;
        while(c<num)
        {
            sum+=c;
            a=b+c;
            b=c+a;
            c=a+b;
        }
        cout<<sum<<endl;
    }
    return 0;
}
