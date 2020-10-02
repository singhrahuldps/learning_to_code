#include<iostream>

using namespace std;

int main(){
	string arr[] = {"Rahul", "Rohit", "Varun"};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<arrSize;i++)
		cout<<arr[i]<<endl;

	return 0;
}