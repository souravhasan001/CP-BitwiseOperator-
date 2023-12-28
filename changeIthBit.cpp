#include <bits/stdc++.h>
using namespace std;

void clearIthBit(int &n,int i){
	int mask=~(1<<i);
	n=(n&mask);
}


void changeIthBit(int &n,int i,int v){
	clearIthBit(n,i);
	int mask=(v<<i);
	n=n|mask;
}

int main(){

#ifndef ONLILE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n=13;
	int i;cin>>i;
	changeIthBit(n,i,1);
	cout<<n<<endl;
}