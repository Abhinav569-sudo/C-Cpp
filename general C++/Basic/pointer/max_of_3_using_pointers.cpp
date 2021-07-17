#include <iostream>
using namespace std;
//function body
int largestNumber(int* p1, int* p2, int* p3) {
  int maximum;
//find maximum logic
  maximum = (*p1 > *p2) ? ((*p1 > *p3) ? *p1 : *p3 ) : ((*p2 > *p3) ? *p2 : *p3);
  cout << "The largest number is : " << maximum << endl;
}
//main function
int main() {
  int num1, num2, num3;
  cout << "Enter the three numbers : " <<endl;
  cin >> num1;
  cin >> num2;
  cin >> num3;
// passing the addresses
  largestNumber(&num1, &num2, &num3);
  return 0;
}

/*if (*p1 > *p2) {
    if (*p1 > *p3) {
      printf("%d is the largest number", *p1);
    } else {
      printf("%d is the largest number", *p3);
    }
  } else {
    if (*p2 > *p3) {
      printf("%d is the largest number", *p2);
    } else {
      printf("%d is the largest number", *p3);
    }
  }*/
