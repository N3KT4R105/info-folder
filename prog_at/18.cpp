#include<iostream>
using namespace std;
int main()
{int x[100], n, s, q=0;
cin>>n;
for(int i=1;i<=n;i++)
    cin>>x[i];
for(int i=1;i<=n;i++)
    {   s=0;
        for(int j=1;j<=x[i]/2;j++)
            if(x[i]%j==0)
                s=s+j;
            if(s==x[i])
                {cout<<x[i];
                q=1;}
    }
        if(q==0)
            cout<<"NU EXISTA";
}
