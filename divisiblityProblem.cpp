#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLILE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int a,b,t;cin>>t;
	while(t--){

		cin>>a>>b;

			if(a%b==0){
				cout<<0<<endl;
			}else{
				cout<<b-a%b<<endl;

			}


	}
	
}