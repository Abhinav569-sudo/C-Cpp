#include <iostream>
using namespace std;

int main(){
	int arr[5] = {1,4,4,3,3};
	int narr[6] = {0};
	int i, j;
		/*for(i=1 ;i<=5 ;i++){
			int check = 0;
			for(j=0 ;j<5 ;j++){
				if(arr[j] == i){
					check = 1;
					break;
				}
			}if(check == 0){
				cout << i << " ";
				}
		}*/
		for (i=0; i<5 ;i++){
			int a = arr[i];
			narr[a] = 1;
		}
		for (i=1; i<=5; i++){
			if(narr[i] == 0){
				cout << i << " ";o
			}
		}
	return 0;
}
