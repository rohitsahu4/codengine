#include <iostream>
#include <vector> 

using namespace std;
int main(){
	int t,n,i, closest,closest2;
	bool cont, isPrime;
	cin>>t;
	while(t--){
		cin>>n;
		cont=true;

		for(int j=0;cont;j++){
	//checking prime in no greater than n
		for( i=2; i<(n+j);i++){
		
			if((n+j)%i==0){
			break;}
			
		}
		if(i==n+j){
			//prime hai
			cont=false;
			closest=j;
		}
}
 	cont=true;
		for(int j=0;cont;j++){
	//checking prime in no lower than n		
				if(n-j==0){//checking if the current no doesnt reach 0
						closest2=1000004;
				cont=false;break;
			
			}

		for( i=2; i<(n-j);i++){
			
			if((n-j)%i==0){
			break;}
			
		}
		if(i==n-j){
			//prime hai
			cont=false;
			closest2=j;
		}	
	}
		
			  
		
		cout<<((closest<closest2)?closest:closest2)<<endl;
	}

}
