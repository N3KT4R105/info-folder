#include<iostream>
using namespace std;
int main()
{int x[100], n, m=1;
cin>>n;
for(int i=1;i<=n;i++)
    cin>>x[i];

for(int i=1;i<=n;i++)
    if(x[i]<0)
    {if(x[i]>m||m==1)
        m=x[i];}
if(m==1)
    cout<<"NU";
else
cout<<"max="<<m;
}
