#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    int i,sum=0,msum=INT_MIN;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    msum=a[0];
	    sum=a[0];
	    for(i=1;i<n;i++)
	    {
	        sum=max(a[i],sum+a[i]);
	        msum=max(msum,sum);
	        
	        
	        
	    }
	    cout<<msum<<endl;
	}
	return 0;
}