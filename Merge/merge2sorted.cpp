#include<iostream>
using namespace std;

int main(){
    int size1, size2;
    cout << "Enter the size of the array: ";
    cin >> size1 >> size2;
    int arr[size1],brr[size2]; 
    cout << "Enter the elements of the array1: ";
    for(int i = 0; i < size1; i++) {
        cin >> arr[i];
    }
    cout << "Enter the elements of the array2: ";
    for(int i = 0; i < size2; i++) {
        cin >> brr[i];
    }
    // cout << "The elements of the array are(before sort): ";   
    
    int crr[size1 + size2];
    int i = 0, j = 0 , k = 0;
    while(i < size1 && j < size2) {
        if(arr[i] < brr[j]) {
            crr[k] = arr[i];
            i++;
        } else {
            crr[k] = brr[j];
            j++;
        }
        k++;
    }
    while(i < size1) {
        crr[k] = arr[i];
        i++;
        k++;
    }
    while(j < size2) {
        crr[k] = brr[j];
        j++;
        k++;
    }

    cout << "The elements of the new array are(after sort): ";
    for(int i = 0; i < size1 + size2 ; i++) {
        cout << crr[i] << " ";
    }

    return 0;
}