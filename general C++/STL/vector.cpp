//vectors
#include <bits/stdc++.h>
using namespace std;
//Dynamic array are known as Vectors.
class Vector{
    //Data members
    int* arr;
    int currentSize;
    int maxSize;

public:
    Vector(int defaultSize = 4){
        maxSize = defaultSize;
        currentSize = 0;
        arr = new int[maxSize];
    }
    void push_back(int data){
        if(currentSize == maxSize){
            int* oldArr = arr;
            arr = new int[2*maxSize];
            maxSize = 2*maxSize;
            for(int i=0; i<currentSize; i++){
                arr[i] = oldArr[i];
            }
            delete []oldArr;
        }
        arr[currentSize] = data;
        currentSize++;
    }
    void print(){
        for(int i=0; i<currentSize; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    bool empty(){
        return (currentSize==0);
    }
    void pop_back(){
        if(!empty()){
            currentSize--;
        }
    }
    int getSize(){
        return currentSize;
    }
    int getMaxSize(){

    }
    int &operator[](int i){
        return arr[i];
    }
};

int main(){
    Vector v;
    v.push_back(2);
    v.push_back(3);
    v.print();
    cout << "Element available at the index 0 is : " << v[0] << endl;
    v[0] = 56;
    v.print();

    for(int i=0; i<10; i++){
        v.push_back(i*i);
    }
    return 0;
}
