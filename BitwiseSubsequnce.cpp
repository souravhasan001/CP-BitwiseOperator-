#include <bits/stdc++.h>
using namespace std;

void overLayNumber(char arr[],int n){

	int j=0;
	while(n>0){
		int lastbit= n & 1;
		if(lastbit){
			cout<<arr[j];
		}
		j++;

		n=n>>1;
	}
	cout<<endl;

}

void genarateAllSubsequnce(char arr[]){
	int n= strlen(arr);
	for(int i=0;i<(1<<n);i++){

		overLayNumber(arr,i);

	} 
	return ;
}

int main(){

#ifndef ONLILE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	char arr[100];
	cin>>arr;
	genarateAllSubsequnce(arr);
}