#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//code
	unsigned int num;
	cout << "Enter the number : ";
	cin >> num;
	cout << num << endl;
	//table generater
	for(int i=1; i<=200 ;i++){
	    int table = i * num;
	    cout << setw(5) << table;
	        if(i%10 == 0){
	            cout << endl;
	        }
	}
	return 0;
}