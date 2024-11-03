#include<bits/stdc++.h>
using namespace std;
    
void maxheapify(int a[],int i,int hsize)
{
int left=2*i;
int right=2*i+1;
int largest=i;
if(left<=hsize && a[left]>a[largest])
{
largest=left;
}
if(right<=hsize && a[right]>a[largest])
{
largest=right;
}
if(largest!=i)
{
swap(a[i],a[largest]);
maxheapify(a,largest,hsize);
}
}
void buildmaxheap(int a[],int n)
{
for(int i=n/2;i>=1;i--)
{
maxheapify(a,i,n);
}
}
void heapsort(int a[],int n)
{
buildmaxheap(a,n);
for(int i=n;i>1;i--)
{
swap(a[1],a[i]);
maxheapify(a,1,i-1);
}
}
void print(int a[],int n)
{
for(int i=1;i<=n;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
}

int main()
{
int a[]={1,2,3,4,5,6,7,9};
int n=sizeof(a)/sizeof(a[0]);
cout<<"orignal array";
print(a,n);
cout<<"sorted array";
print(a,n);
return 0;
}       