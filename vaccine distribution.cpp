
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    float n,d,age,cr=0,cnr=0;
	    cin>>n>>d;
	    for(int i=0;i<n;i++){
	        cin>>age;
	        if(age>=80 || age<=9) cr++;
	        else cnr++;
	    }
	    int d1=ceil(cr/d);
	    int d2=ceil(cnr/d);
	    cout<< d1+d2 <<endl;
	    
	}
	return 0;
}
