#include <iostream>
using namespace std;
int main(){
/*	int arr[]={4, 5 ,6 ,7};
	int *p = (arr + 1);
	cout << *arr + 9; // 13 = *arr[0]+9 */
	char *ptr;
	char str[] = {'a','b','c','d','e','f','g','h','\0'};
	ptr = str;
	ptr = ptr + 5; // It increments pointer +5 i.e 
	cout << ptr;
	return 0;
}
