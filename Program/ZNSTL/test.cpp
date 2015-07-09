int Pollard(int n,int x)
{
    int i,d,k=2,y=x;
    for(i=1;i<n;i++)
    {
        x=(x*x-1)%n;
        d=gcd(y-x,n);
        if(d!=1&&d!=n)return d;
        if(i==k)y=x,k=2*k;
    }
}
