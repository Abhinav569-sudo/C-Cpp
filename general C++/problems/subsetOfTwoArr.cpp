/*1. Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not.
Both the arrays can be sorted or unsorted. It may be assumed that elements in both array are distinct.


Example 1:

Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]*/

//code
#include <bits/stdc++.h>
using namespace std;

bool subset(int a1[], int a2[], int m, int n){
    int i=0, j=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a2[i] == a1[j])
                break;
        }
        if(j == m)
        return 0;
    }
    return 1;
}
//main function
int main(){
    int a1[] = {11, 1, 13, 21, 3, 7};
    int a2[] = {11, 3, 7, 1};

    int m = sizeof(a1)/sizeof(a1[0]);
    int n = sizeof(a2)/sizeof(a2[0]);

    if(subset(a1 ,a2 ,m ,n))
        cout << "a2[] is the subset of a1[]" << endl;
    else
        cout << "a2[] is not the subset of a1[]" << endl;
    return 0;
}
