#include <iostream>
using namespace std;

int main(){
	int arr[20], rev, e, i;
	cout << "Enter the no of elements as index :\n";
	cin >> e;
	for(i=0; i<=e ;i++){
		cin >> arr[i];
	}
	cout << "The elements are : \n";
	// To print all the elements in the array
	for(i=0 ;i<=e ;i++){
		cout << " " << arr[i] << ",";
	}
	// reversing the elements of the array

	
	return 0;
}
