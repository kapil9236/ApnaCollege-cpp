#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"enter the value of n"<<endl;
cin>>n;

cout<<"butterfly pattern is "<<endl;
for(int i=1;i<=n; i++){
	for(int j=1; j<=n-i;j++){
		cout<<" ";
	}
	for(int j=0;j<n;j++){
		cout<<"*";
	}
	
cout<<endl;	
}	

return 0;
}


