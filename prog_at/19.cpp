#include<iostream>
#include<fstream>
using namespace std;
ifstream f("mat.txt");
int main()
{int a[100][100], n, s, q=0, r, m=INT_MIN;
f>>n;
f>>l1>>l2
for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {f>>a[i][j];
    }
for(int i=1; i<=n; i++)
{r=a[l1][i]
a[l1][i]=a[l2][i];
a[l2][i]=r
}
for(int i=1;i<=n;i++)
    {for(int j=1;j<=n;j++)
    {cout<<a[i][j]<<" ";
    }
cout<<endl;
}}
