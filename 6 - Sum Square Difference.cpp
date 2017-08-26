#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        long long n;
        long long a,b;
        cin>>n;
        a=n*(n+1)/2;
        a=a*a;
        b=n*(n+1)*(2*n+1)/6;
        cout<<a-b<<endl;
    }
    return 0;
}
