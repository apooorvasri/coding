#include<bits/stdc++.h>

using namespace std;
int  getNumberOfDays(long long int month,long long int year)
{
		if((year%400==0) || (year%4==0 && year%100!=0))	
			return 1;
		else	
			return 0;
} 
 
int dayofweek(int month,long long int year) 
{ 
year--;
int q = 1; 
int m = 14; 
int k = year % 100; 
int j = year / 100; 
int h = q + 13*(m+1)/5 + k + k/4 + j/4 + 5*j; 
h = h % 7; 

return h; 
}  
  
  
int main()
{    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
     long int t;long long int y1,y2,y,c=0,i;int m1,m2,m,d2;
	cin>>t;
	while(t--){
        c=0;int x=1;
	    cin>>m1>>y1;
	    cin>>m2>>y2;
	    if(m1>2)
	       y1++;
	     if(m2<2)
	        y2--;
	    
	   if(y2<y1){
	       c=0;
	   }
	   else{
	       m=2;
        long long d=y2-y1+1;
        long long q=floor(d/2800);
        long long r=d%2800;
        long long y=y2-r+1;
        c+=q*707;
	      for(i=y;i<=y2;i++)
	      { 
	        d2=dayofweek(m,i);
	        if(d2==1){
	            if(!getNumberOfDays(m,i))
	                c++;
	           
	        }
	        else if(d2==0){
	              c++;
	        }
	      }}     
	    cout<<c<<"\n";
}
    return 0;
}
