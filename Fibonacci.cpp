#include<iostream>
using namespace std;

int fib(int n)      //recursive approach
{
    if(n<=1)
        return n;
    return fib(n-2) + fib(n-1);
}

int ifib(int n)     //iterative approach
{
    int t0 = 0 , t1 = 1 , s;
    if(n<=1)
        return n;
    for(int i=2;i<=n;i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int mfib(unsigned int n)     //better recursive approach using memoization
{
    int f[n+1];
    for(int i=0;i<=n+1;i++)
        f[i] = -1;
    if(n<=1)    
    {
        f[n]=n;
        return n;
    }
    if(f[n-2]==-1)
        f[n-2] = mfib(n-2);
    if(f[n-1]==-1)
        f[n-1] = mfib(n-1);
    return f[n-2] + f[n-1];
}

int main()
{
    int a;
    cout << "Enter number : ";
    cin >> a;
    cout << "The fibonacci of "<<a<<" is : ";
    int r = mfib(a);
    int n = r;
    int f[n];
    int i =0 ;
    while(n!=1)
    {
        n = n / 10;
    }
    for(int j = 0 ;j<n;j++)
    {
        f[j] = n;
    }
    return 0;
}

