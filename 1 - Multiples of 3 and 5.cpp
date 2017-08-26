#include<iostream>
using namespace std;
int main()
{
    long long num;
    int N;
    cin>>N;
    while(N--)
    {
        cin>>num;
        long long three=(num-1)/3,five=(num-1)/5,fifteen=(num-1)/15;
        long ans=3*three*(three+1)/2+5*five*(five+1)/2-15*fifteen*(fifteen+1)/2;
        cout<<ans<<endl;
    }
    return 0;
}
