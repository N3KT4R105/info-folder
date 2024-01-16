#include<iostream>
using namespace std;
int main()
{int v=0, q=0, n, a, x[100], y[100];
cin>>n;
for(int i=1;i<=n;i++)
    cin>>x[i];
cin>>a;
for(int i=1;i<=n;i++)
    if(x[i]==a)
        y[++q]=i;
if(y[1]==0)
    cout<<"NU";
else
{
 cout<<"pozitii: ";
    for(int i=1; i<=q; i++)
    cout<<y[i]<<" ";
}
}
