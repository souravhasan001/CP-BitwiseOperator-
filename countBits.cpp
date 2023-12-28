#include <bits/stdc++.h>
using namespace std;

int countBit(int n){
	int count=0;
	while(n>0){
		int last_bit=(n&1);
		count+= last_bit;
		n=n>>1;

	}
	return count;
}

int main(){

#ifndef ONLILE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n;
	cin>>n;

	cout<<countBit(n)<<endl;
	//cout<<n<<endl;

	
}