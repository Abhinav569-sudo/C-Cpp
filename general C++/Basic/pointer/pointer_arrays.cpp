//printing the array elements
#include <iostream>
using namespace std;
//main function

/*int main(){
    int arr[] = {32, 45 ,55 ,69 ,74};
    for (int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        cout << arr[i] << endl;
    }
    return 0;
}*/

//printing array elements using pointers
//main function

/*int main(){
    int arr[] = {32, 45 ,55 ,69 ,74};
    for (int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        cout << *(arr+i) << endl;
    }
    return 0;
}*/

//pointer constants and pointer variables
//main function

/*int main(){
    int arr[] = {32, 45 ,55 ,69 ,74};
    int* ptr;       //pointer variable
    ptr = arr;      //points to arr[]

    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        cout << *(ptr++) << endl;
    }
    return 0;
}*/

//passing arrays as an argument in the function using pointers

/*const int Max = 5;
//function body
void convert_centimeter(double* ptr){
    for(int i=0; i<Max; i++){
        *ptr++ *= 2.54;   //ptr points to the elements of arr[] and then increments
    }
}
//main body
int main(){
    double arr[Max] = {10.0, 43.1, 95.6, 59.7, 87.5};
    convert_centimeter(arr);        //passing arr
    for (int i=0; i<Max; i++){
        cout << "arr[" << i << "] = " << arr[i] << " Centimeters" << endl;
    }
    return 0;
}*/

//sorting with pointers

//function body
/*void sorting(int* num1, int* num2){
    if(*num1 > *num2){
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}
//main body
int main(){
    int n1 = 95, n2 = 45 ,n3 = 55 ,n4 = 68;
    sorting(&n1, &n2);
    sorting(&n3, &n4);
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    cout << "n3 = " << n3 << endl;
    cout << "n4 = " << n4 << endl;
    return 0;
}*/

//sorting an array using pointers
//bubble sort
void bsort(int* ptr, int n){
    int i, j;
    void order(int* , int*);     //declaring order function
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            order(ptr+i, ptr+j); //calling order function
        }
    }
}
//order function
void order(int* num1, int* num2){
    if(*num1 > *num2){
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}
//main body
int main(){
    //int const n=10;
    int arr[] = {37, 84, 62, 91, 11, 65, 57, 28, 19, 49};
    //calculates the no of elements inside an array
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
    //bsort is called
    bsort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}
