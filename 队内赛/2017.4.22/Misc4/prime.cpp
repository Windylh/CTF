#include <bits\stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)
        return false;
    for (int i=2;i<sqrt(n)+1;i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    int n[1111];
    int i,k=1;
    for(i=123456789;i<=987654321;i++)
    {
        int a=i,num=0;
        while(a!=0)
        {
            num+=a%10;
            a/=10;
        }
        //cout<<num<<endl;
        if(isPrime(i)&&isPrime(num))
        {
            k++;
            n[k]=i;
            //cout<<k<<endl<<n[k]<<endl;
        }
        if(k>800) break;
    }
    int ans=n[123]+n[456]+n[789];
    cout<<ans<<endl;
}