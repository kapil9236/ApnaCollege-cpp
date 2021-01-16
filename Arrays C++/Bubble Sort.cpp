//bubble sort algorithm
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
				if(array[i+1]<array[i]){
				int temp;
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;	
				}
		}
		
		
	
	
	cout<<"sorted array is "<<endl;
	for(int i=0;i<n;i++){
		cout<<array[i]<<endl;
	}
	return 0;
}
