#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int tc=0;
    cin>>t;
    while(t--)
    {
	    tc++;
	    int n,b;
        cin>>n>>b;
        int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
  	sort(a, a+n);
	int count=0;
	for(int i=0;i<n;i++)
	{
	    if(b>=a[i])
	    {
		count++;
		b-=a[i];
	    }
	}
	cout<<"Case #"<<tc<<": "<<count<<endl;
    }
    return 0;
}

