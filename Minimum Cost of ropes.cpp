#include <iostream>
using namespace std;
void heapify(int arr[], int n, int i);
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for (int i = n / 2 ; i >= 0; i--)
           heapify(a, i, n);

        long int temp,temp1,temp2;
        long int res1=0;
        for(int i=n-1;i>0;i--) // i not to be equal to zero because we will get result at i=1
        {
           temp=a[0];
           a[0]=a[i];
           heapify(a,0,i);
           temp1=a[0];
           temp2=temp+temp1;
           a[0]=temp2;
           heapify(a,0,i);
           res1=res1+temp2;
        }
        cout<<res1<<"\n";
	}
	return 0;
}
void heapify(int arr[], int i, int n)
{
    int smallest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    if (l < n && arr[l] < arr[smallest])
        smallest = l;
    if (r < n && arr[r] < arr[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);

        heapify(arr, smallest, n);
    }
}
