//Get the unique number by using Bitwise operator

#include <bits/stdc++.h>
using namespace std;

int uniqueNumber(vector<int> v){

	int n=v.size();
	int comutative_xor=0;
	for(int i=0;i<n;i++){
		comutative_xor=comutative_xor ^ v[i];
	}

	return comutative_xor;

}

int main(){

#ifndef ONLILE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n;cin>>n;

	vector<int> v;

	for(int i=0;i<n;i++){

		int x;cin>>x;
		v.push_back(x);

	}

cout<<uniqueNumber(v)<<endl;
	
}