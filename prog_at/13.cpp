#include<iostream>
using namespace std;
int main()
{int v=0, q=0, n, x[100], y[100];
cin>>n;
for(int i=1;i<=n;i++)
    cin>>x[i];

for(int i=1;i<=n;i++)
    if(x[i]%2==0)
        y[++q]=x[i];
    else
        v=1;
if(v==0)
    cout<<"NU";
else
    for(int i=1; i<=q; i++)
    cout<<y[i]<<" ";

}
