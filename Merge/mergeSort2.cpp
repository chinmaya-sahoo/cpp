#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[], int low, int mid, int high) {
    int temp[high - low + 1]; 
    int left = low;          
    int right = mid + 1;     
    int index = 0;           

    while (left <= mid && right <= high) {
        if (arr[left] < arr[right]) {
            temp[index] = arr[left];
            left++;
        } else {
            temp[index] = arr[right];
            right++;
        }
        index++;
    }

    while (left <= mid) {
        temp[index] = arr[left];
        left++;
        index++;
    }

    while (right <= high) {
        temp[index] = arr[right];
        right++;
        index++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(int arr[],int low ,int high){
    if(low >= high){
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);


    merge(arr,low,mid,high);
}
int main() {
    int size ;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size]; 
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "The elements of the array are(before sort): ";   
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    mergeSort(arr , 0 , size-1);
    cout << "\nThe elements of the array are(after sort): ";   
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}