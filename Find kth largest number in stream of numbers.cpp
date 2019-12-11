#include <iostream>
using namespace std;
void heapify(int *a,int index,int n);
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,k;
	    cin>>k>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=k-1;i>=0;i--)
	    {
	        heapify(a,i,k);
	    }
	    for(int i=0;i<k-1;i++)
	    {
	        cout<<"-1 ";
	    }
	    for(int i=k;i<=n;i++)
	    {
	        cout<<a[0]<<" ";
	        if(a[i]<a[0])
	        {
	            continue;
	        }
	        else
	        {
	            a[0]=a[i];
	            heapify(a,0,k);
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
void heapify(int *a,int index,int n)
{
    if(index>n)
      return;

    int left=2*index+1;
    int right=2*index+2;
    int largest=index;
    if(left<n&&a[left]<a[largest])
    {
        largest=left;
    }
    if(right<n&&a[right]<a[largest])
    {
        largest=right;
    }
    if(largest!=index)
    {
        swap(a[index],a[largest]);
        heapify(a,largest,n);
    }
}
