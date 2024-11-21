#include<bits/stdc++.h>
using namespace std;
    int main()
{
int m=10;
int hashtable[m];
for(int i=0;i<m;i++)
{
hashtable[i]=-1;
}
int keys[]={10,22,31,4,15,28,17,59};
int n=sizeof(keys)/sizeof(keys[0]);

for(int i=0;i<n;i++)
{
int key=keys[i];
int index=key%m;
if(hashtable[index]==-1)
{
hashtable[index]=key;
}
else
{
cout<<"Collision occured"<<"at index"<<index;
return -1;
}
}
cout<<"Hash table";
for(int i=0;i<m;i++)
{
if(hashtable[i]!=-1)
{
cout<<"Index"<<i<<" "<<hashtable[i]<<endl;
}
}
return 0;
}