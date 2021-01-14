#include<iostream>
using namespace std;

int main()
{
int n;
int reversed_number=0;
cout<<"enter the number to be reversed"<<endl;
cin>>n;
while(n>0){
	int lastdigit= n%10;//to get last digit
	reversed_number= reversed_number*10 + lastdigit;
	n=n/10;//divide by 10 to remove last digit
}
cout<<"reversed number is "<<reversed_number;

return 0;
}


