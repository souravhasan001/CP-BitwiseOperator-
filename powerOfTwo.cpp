#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLILE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	int n;
	cin>>n;
	
	if((n&(n-1))==0){
		cout<<"This is power of Two"<<endl;
	}else{
		cout<<"This is not power of Two"<<endl;
	}


return 0;
	
}