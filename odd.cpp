#include <bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLILE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

int x;
cin>>x;
if(x&1){
	cout<<"odd"<<endl;
}
else{
	cout<<"even"<<endl;
}
return 0;
	
}