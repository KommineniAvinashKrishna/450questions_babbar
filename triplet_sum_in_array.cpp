Find whether an array is a subset of another array
Find whether an array is a subset of another array
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X)
    {
        int j=0,k=0;
        for(int i=0;i<n;i++)
        {
            sort(a,a+n);
            if(X-a[i]>0)
            {
                j=i+1;
                k=n-1;
                while(j<k)
                {
                    if(X==a[i]+a[j]+a[k])
                     return true;
                    else if(X<a[i]+a[j]+a[k])
                     k--;
                    else
                    j++;
                }
            }
            
        }
        
        
        return false;
        //Your Code Here
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends
