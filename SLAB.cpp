#include <iostream>
using namespace std;
long long int calcnet(long long int n){
    long long int t=0,n1=n;
    if(n<=250000)
       return n;
    else {
        n1-=250000;
        if(n1>=0){
            if(n>500000)
               t+=(5*(500000-250000))/100;
            else
               t+=(5*(n-250000))/100;
        }n1=n;
        n1-=500000;
        if(n1>=0){
           if(n>750000)
               t+=(10*(750000-500000))/100;
            else
                t+=(10*(n-500000))/100;}n1=n;
        n1-=750000;
        if(n1>=0){
            if(n>1000000)
                t+=(15*(1000000-750000))/100;
            else
                t+=(15*(n-750000))/100;
        }n1=n;
        n1-=1000000;
        if(n1>=0){
            if(n>1250000)
                t+=20*(1250000-1000000)/100;
            else
                t+=20*(n-1000000)/100;
        }n1=n;
        n1-=1250000;
        if(n1>=0){
            if(n>1500000)
                t+=25*(1500000-1250000)/100;
            else
                t+=25*(n-1250000)/100;
        }n1=n;
        n1-=1500000;
        if(n1>=0){
            
            
                t+=30*(n-1500000)/100;
        }
          
    
    return n-t;}
      
}

int main() {
	// your code goes here
	int t;long long int n;
	cin>>t;
	while(t--){
	    cin>>n;
	    cout<<calcnet(n)<<"\n";
	}
	return 0;
}
