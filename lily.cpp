#include <iostream>
using namespace std;
int main()
{ int m,n,d,count,sum;


//input
cin>>n;
int s[n];
for(int i=0;i<n;i++){
    cin>>s[i];
}
cin>>d>>m;


count=0;
for(int i=0;i<=n-m;i++){sum=0;

    for(int j=i;j<i+m;j++){
        sum+=s[j];
    }
    if(sum==d)
    count++;
}
    
    cout<<count<<endl;
    return 0;
}
