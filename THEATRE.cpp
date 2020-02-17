#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testc,n1,n=4,pe=0;
	int tp=0;char m;
	    int i,j,p,maxm=INT_MIN;
	    int t;
	cin>>testc;
	while(testc--){
	    int a[4] ={0,0,0,0};
	    int b[4]={0,0,0,0};
	    int c[4]={0};
	    int d[4]={0};
	    int r[4]={0};
	    p=0;int e=12,f=3,g=6,h=9;maxm=INT_MIN;
	    cin>>n1;
	    while(n1--){
	        i=-1;
	        j=-1;
	        cin>>m>>t;
	        if(t==e)
	            i=0;
	          if(t==f)
	             i=1;
	          if(t==g)
	              i=2;
	          if(t==h)
	              i=3;
	        switch(m){
	            case 'A':a[i]++;break;
	            case 'B':b[i]++;break;
	            case 'C':c[i]++;break;
	            case 'D':d[i]++;break;
	        }
	 	    }
       r[0]=a[0];r[1]=b[1];r[2]=c[2];r[3]=d[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   
	   r[0]=a[0];r[1]=b[1];r[2]=d[2];r[3]=c[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         {pe+=100;}
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	     
	       maxm=p;
	   }
	   r[0]=a[0];r[1]=c[1];r[2]=b[2];r[3]=d[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   
	   r[0]=a[0];r[1]=c[1];r[2]=d[2];r[3]=b[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=a[0];r[1]=d[1];r[2]=b[2];r[3]=c[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=a[0];r[1]=d[1];r[2]=c[2];r[3]=b[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=b[0];r[1]=a[1];r[2]=c[2];r[3]=d[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=b[0];r[1]=a[1];r[2]=d[2];r[3]=c[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=b[0];r[1]=c[1];r[2]=a[2];r[3]=d[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=b[0];r[1]=c[1];r[2]=d[2];r[3]=a[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=b[0];r[1]=d[1];r[2]=a[2];r[3]=c[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=b[0];r[1]=d[1];r[2]=c[2];r[3]=a[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=c[0];r[1]=b[1];r[2]=a[2];r[3]=d[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=c[0];r[1]=b[1];r[2]=d[2];r[3]=a[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=c[0];r[1]=a[1];r[2]=b[2];r[3]=d[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=c[0];r[1]=a[1];r[2]=d[2];r[3]=b[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=c[0];r[1]=d[1];r[2]=a[2];r[3]=b[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=c[0];r[1]=d[1];r[2]=b[2];r[3]=a[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=d[0];r[1]=a[1];r[2]=c[2];r[3]=b[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=d[0];r[1]=a[1];r[2]=b[2];r[3]=c[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=d[0];r[1]=c[1];r[2]=b[2];r[3]=a[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=d[0];r[1]=c[1];r[2]=a[2];r[3]=b[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=d[0];r[1]=b[1];r[2]=c[2];r[3]=a[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   r[0]=d[0];r[1]=b[1];r[2]=a[2];r[3]=c[3];pe=0;
	   sort(r, r+n);   
	   for(i=0;i<=3;i++){
	       if(r[i]==0)
	         pe+=100;
	   }
	   p=(r[0]*25)+(r[1]*50)+(r[2]*75)+(r[3]*100)-pe;
	   if(p>maxm){
	       maxm=p;
	   }
	   
	   
	   tp+=maxm;
	   cout<<maxm<<"\n";
	  
	}
	cout<<tp<<"\n";
	return 0;
}

