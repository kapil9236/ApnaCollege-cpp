#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
cout<<"inverted pattern is "<<endl;
for(int i=1;i<=n; i++){
	for(int j=1;j<=n+1-i;j++)
	{
		cout<<j<<" ";
	}
cout<<endl;	
}	
return 0;
}


