#include<iostream>
using namespace std;
int main()
{int x[100], n, a, b, y[100], q=0;
cin>>n;
for(int i=1;i<=n;i++)
    cin>>x[i];
cin>>a>>b;
for(int i=1;i<=n;i++)
    if(x[i]<a||x[i]>b)
        y[++q]=x[i];
cout<<"nr="<<n-q<<endl;
for(int i=1;i<=q;i++)
    cout<<y[i]<<" ";
}
