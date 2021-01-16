//selection sort algorithm
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
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
				if(array[j]<array[i]){
				int temp;
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;	
				}
		}
		
		
	}
	
	cout<<"sorted array is "<<endl;
	for(int i=0;i<n;i++){
		cout<<array[i]<<endl;
	}
	return 0;
}
