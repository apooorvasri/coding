#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n,m,x,y,s,bx,by,i,j,k,l,p,q,cnt=0,ans=0;
	cin>>n>>m>>x>>y>>s;
	int r[x+2]={1};
	int c[y+2]={1};
	r[0]=0;
	c[0]=0;
	r[x+1]=n+1;
	c[y+1]=m+1;
	int max=0;
	bx=0;by=0;

	for(i=1;i<=x;i++)
	{
		cin>>r[i];
	}
	for(i=1;i<=y;i++)
	{
		cin>>c[i];
	}	
		
	for(i=0;i<x+1;i++)
	{
		bx+=(r[i+1]-r[i]-1)/s;
	}
	for(i=0;i<y+1;i++)
	{
		by+=(c[i+1]-c[i]-1)/s;
	}
	cout<<bx*by<<endl;
	    
	}
	return 0;
}
