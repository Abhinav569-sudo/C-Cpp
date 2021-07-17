#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n1, n2;
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> n1 >> n2;
    for(int i=n1; i<=n2; i++){
        if(i>9){
            if(i%2 == 0){
                cout << "even" << endl;
            }else {
                cout << "odd" << endl;
            }
        }else {
            cout << arr[i] << endl;
        }
    }
    return 0;
}
