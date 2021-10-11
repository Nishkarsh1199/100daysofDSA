#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={2,5,7,8,9,4};
	int n=6;
	int l=0;
	int r=n-1;
	while(l<r){
		swap(arr[l],arr[r]);
		l++;
		r--;
	}
	
	cout<<"reversed array"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}


