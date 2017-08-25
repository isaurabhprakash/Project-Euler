#include<iostream>
using namespace std;
int main()
{
    long long num;
    int n,count=0;
    cin>>n;
    while(count!=n)
    {
        cin>>num;
        long long three=(num-1)/3,five=(num-1)/5,fifteen=(num-1)/15;
        long ans=3*three*(three+1)/2+5*five*(five+1)/2-15*fifteen*(fifteen+1)/2;
        cout<<ans<<endl;
        count++;
    }
    return 0;
}
