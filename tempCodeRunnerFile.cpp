#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int row[n]={0};
    int col[m]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0)
            {
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(row[i]==1)
        {
            for(int j=0;j<m;j++)
            {
                arr[i][j]=0;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        if(col[i]==1)
        {
            for(int j=0;j<n;j++)
            {
                arr[j][i]=0;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}