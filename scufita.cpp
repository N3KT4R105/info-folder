#include<iostream>
#include<fstream>
using namespace std;
int x[100][100],a[100][100],s[100][100],n,m,k,pii,pij,pli,plj,nrf;
int min1=INT_MAX;
int di[]={0,1,0,-1,0};
int dj[]={0,0,-1,0,1};
void citire()
{
    ifstream f("dae.txt");
   f>>n>>m>>nrf;
   for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    f>>a[i][j];
    f>>pii>>pij>>pli>>plj;
}
int cont(int k,int i,int j)
{
    if(i<1 || i>n || j<1 || j>m)
        return 0;
    if(a[i][j]=1)
        return 0;
    if(x[i][j]!=0)
        return 0;
        if(k>min1)
            return 0;
    return 1;
}
int sol(int k,int i,int j)
{

    if(i==1 || i==n || j==1 || j==m)
        return 1;
    else
        return 0;
}

void retinesol(int k)
{

    if(k<min1)
    {min1=k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        s[i][j]=x[i][j];}
}


void back(int k,int i0,int j0)
{
    if(sol(k,i0,j0))
        retinesol(k);
    {
        int i,j;
        for(int q=1;q<=4;q++)
        {
            i=di[q]+i0;
            j=dj[q]+j0;
            if(cont(k+1,i,j))
            {
                x[i][j]=k+1;
            back(k+1,i,j);
            x[i][j]=0;}
        }
    }
}
int main()
{
    citire();
    cout<<pii<<pij<<endl;
    x[pii][pij]=1;
    back(1,pii,pij);
    cout<<"drumul minim are "<<min1<<"pasi"<<endl;
    for(int i=1;i<=n;i++)
    { for(int j=1;j<=m;j++)
        cout<<s[i][j]<<" ";
        cout<<endl;
    }

}
