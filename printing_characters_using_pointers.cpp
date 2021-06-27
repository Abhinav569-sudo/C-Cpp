#include <iostream>
using namespace std;

int main(){
	char alpha[27];
	int x;
	char *ptr;		//assiging the address for the alpha character variable in the pointer
	ptr = alpha;
	cout << "\n\n Pointer : Print all the alphabets:\n";
	cout << "----------------------------------------\n";
	//loop for storing the characters in the array
		for (x=0; x<26 ;x++){
			*ptr = x + 'a'; //assigning the values to the pointer address 
			ptr ++; //increamenting the pointer address
		}
		ptr = alpha; //pointing to alpha
	cout << "The alphabets are : \n";
		for(x=0; x<26; x++){
			cout << *ptr << " ";
			ptr++;
		}
		cout << "\n";
	return 0;
}
