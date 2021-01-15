#include<iostream>
#include<climits> //for INT_MIN AND INT_MAX function
using namespace std;

int main(){
	int n;
	cin>>n;
	int Min=INT_MAX ;
	int Max= INT_MIN;
	
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
		Min=min(Min,array[i]); //function to give min of two numbers
		Max=max(Max,array[i]);
	}
	cout<<"max of array is "<<Max<<" and minimum is "<<Min;
	
	return 0;
}
