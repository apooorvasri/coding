#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t,n,p,i,k;
	cin>>t;
	while(t--){
	   cin>>n>>p;
	   long long int a[n],b[n]={0},j;
	   for(i=0;i<n;i++){
	       cin>>a[i];
	   }
	   int flag=0;
	   for(j=n-1;j>=0;j--){
	       if(a[j]>p){
	           b[j]++;
	           break;
	       }
	       if(a[j]==p) continue;
	       if(p%a[j]!=0){
	           b[j]=p/a[j]+1;
	           break;
	       }
	       b[j]=p/a[j]-1;
	       p=a[j];
	       if(j==0)
	          flag=1;
	       
	   }
	   if(flag)
	      cout<<"NO\n";
	    else{
	        cout<<"YES ";
	        for(i=0;i<n;i++)
	           cout<<b[i]<<" ";
	           cout<<"\n";
	    }
	   
	}
	return 0;
}
