#include <bits/stdc++.h>
using namespace std;

int countBitHack(int n){
	int ans=0;
	while(n>0){
		n=n&(n-1);
		ans++;
	}
	return ans;
}

int main(){

#ifndef ONLILE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n;cin>>n;
	cout<<countBitHack(n)<<endl;
	
}