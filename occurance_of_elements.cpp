#include <iostream>
using namespace std;
// Checking for the first index
void firstIndex(int *arr, int n ,int x ,int i){
	if (i >= n){
		cout << -1;
		return ;
	}if(arr[i] == x){
		cout << i << endl;
		return ;
	}firstIndex(arr ,n ,x ,i+1);
		return ;
}
// Checking for the last index
void LastIndex(int *arr, int n ,int x ,int i, int indexofx){
	if(i>=n){
		cout << indexofx << endl;
		return ;
	}if(arr[i] == x){
		indexofx=i;
	}LastIndex(arr, n, x, i+1, indexofx);
	return ;
}

int main(){
	int arr[] = {1, 4, 4, 6, 6, 5};
	int x = 4;
	firstIndex(arr, 6, x, 0);
	LastIndex(arr, 6, x ,0 ,-1);	
	return 0;
}
