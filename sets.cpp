#include <iostream>
using namespace std;
int main(){
	int m ,n ;
	cin>>n>>m;
	int arr1[n],arr2[m],count=0;
	int max1=0,min2=99999999;
	for(int i=0;i<n;i++){
		cin>>arr1[i];
		if(arr1[i]>max1)
		max1=arr1[i];
	}
	
	for(int j=0;j<m;j++){
		cin>>arr2[j];
		
		if(arr2[j]<min2)
		min2=arr2[j];
	}

	
	bool test1,test2;
	for(int i=max1;i<=min2;i++){
	
		test1=test2=true;
		for(int j=0;j<n && test1 ;j++){
			
			if(i % arr1[j]!=0)
			test1=false;
		}
		
		for(int j=0;j<m && test2 ;j++){
	
			if(arr2[j] % i !=0)
			test2=false;
		}
		if(test1&&test2)
		count++;
	}
	cout<<count;
}

