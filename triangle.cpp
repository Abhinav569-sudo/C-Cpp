#include <iostream>
using namespace std;

int main(){
	/*int i, j, rows;
	cout << "\nEnter the no of rows: \n";
	cout << "========================\n";
	cin >> rows;
	//loop for printing the half triangle
	for (i=1; i<=rows ;i++){
		for(j=1; j<=i; j++){
			cout << "*";
		}cout << "\n";
	}
	*/
	
	/* Full pyramide */
	//for full pyramide pattern
	int i, j, rows, spaces;
	cout << "\nEnter the no of rows: \n";
	cout << "========================\n";
	cin >> rows;
	cout << rows << endl;
	cout << "========================\n";
	//outer loop for newline printing 
	for(i=1; i<=rows; i++){
		//inner loop 1 for space printing 
		for(spaces=i; spaces<rows; spaces++){
			cout << " ";
		}
		//inner loop 2 for pattern printing
		for(j=1; j<=2*i-1; j++){
			cout << "*";
		}cout << "\n";
	}
	for(i=rows-1; i>=1; i--){
		//inner loop 1 for space printing
		for(spaces=i; spaces<rows ;spaces++){
			cout << " ";
		}
		for(j=1; j<=2*i-1; j++){
			cout << "*";
		}cout << "\n";
	}
	return 0; 
}
