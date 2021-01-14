#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int n;
int sum=0;
cout<<"enter the number to be reversed"<<endl;
cin>>n;
int original_n=n;
while(n>0){
	int lastdigit= n%10;//to get last digit
	sum+=pow(lastdigit,3);
	n=n/10;//divide by 10 to remove last digit
}

if(sum==original_n){
	cout<<"Yes, It is a palindrome"<<endl;
}else
cout<<"not a palindrome";
 
return 0;
}


