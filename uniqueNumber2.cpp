#include <bits/stdc++.h>
using namespace std;

void uniqueNumber(vector<int>v){
	int n=v.size();
	int result=0;

	for(int i=0;i<n;i++){
		result=result^v[i];
	}

	int pos=0;
	int temp=result;

	while((temp&1==0)){
		pos++;
		temp=temp>>1;
	}

	int setA=0;
	int setB=0;

	int mask=1<<pos;

	for(int i=0;i<n;i++){
		if(v[i]&mask >0){
			setA=setA^v[i];
		}else{
			setB=setB^v[i];
		}
	}

	cout<<setA<<endl;
	cout<<setB<<endl;
}


int main(){

#ifndef ONLILE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n;cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		v.push_back(x);
	}

	uniqueNumber(v);
	
}