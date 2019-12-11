#include <iostream>
using namespace std;

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
	    int h=1;
	    for(int i=0;i<n;i++)
	    {
	        int left=(2*i)+1;
	        int right=(2*i)+2;
	        if(left<n)                 //check separately for left and right
	        {                 //testcase 65 91 has no right so separate conditions
	            if(a[left]<a[i])  //for left and right
	            {
	                h=1;      //dont write continue here otherwise right condition will not
	            }             // be checked
	            else
	            {
	                h=0;
	                break;
	            }
	        }
	         if(right<n)
	        {
	            if(a[right]<a[i])
	            {
	                h=1;
	            }
	            else
	            {
	                h=0;
	                break;
	            }
	        }
	    }
	    if(h==0)
	    {
	        cout<<"0\n";
	    }
	    else
	    {
	        cout<<"1\n";
	    }
	}
	return 0;
}
