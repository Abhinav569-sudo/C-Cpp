#include <iostream>
using namespace std;
int i;
void display(int arr[], int size){
	
	for(i=0; i<size ;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	int size = 8;
	int arr[] = {1,2,3,4,5,6,7,8};
	int arr2[size];
	
	cout << "number of places :" << endl ;
	int rotate;
	cin >> rotate;
	display(arr ,size);
	
	for(i=0; i<size; i++){
		arr2[(i+rotate+size)%size] = arr[i];
	}
	display(arr2, size);
	return 0;
}
