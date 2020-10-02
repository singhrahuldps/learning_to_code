// import java.io.*;

// class hacktober {
// 	public static void main (String[] args) {
		
// 		String arr[] = new String[] {"Rahul", "Rohit", "Varun"};
// 		for (int i=0; i<arr.length; i++) {
// 		    System.out.println(arr[i]);
// 		}
		
// 	}
// }

#include<iostream>

using namespace std;

int main(){
	string arr[] = {"Rahul", "Rohit", "Varun"};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<arrSize;i++)
		cout<<arr[i]<<endl;

	return 0;
}