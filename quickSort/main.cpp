//
//  main.cpp
//  quickSort
//
//  Created by Kevin Zhang on 2016-02-09.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#include <iostream>
using namespace std;

void printArray(int arr[], int arr_size);
//quickSort wrapper
int quickSort(int arr[], int arr_size);
//
int doQuickSort(int arr[], int low, int high);
int Partition(int arr[], int low, int high);
//void swap();


int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[5] = {5,4,3,2,1};
    int arr_size = 5;
    quickSort(arr, arr_size);
    printArray(arr, arr_size);
    return 0;
}

//wrapper call
int quickSort(int arr[], int arr_size){
    int low = 0;
    int high = arr_size-1;
    
    int barOps= doQuickSort(arr, low, high);
    return barOps;
    
}

int doQuickSort(int arr[], int low, int high){
    int barOps=0;
        if (low < high){
            int pivot = Partition(arr, low, high);
            doQuickSort(arr, low, pivot-1);
            doQuickSort(arr, pivot+1, high);
        }
    return barOps;
}

int Partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i = low;
    for (int j = low; j<=high-1; ++j) {
        if (arr[j]<=pivot) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    int temp = arr[i];
    arr[i] = arr[high];
    arr[high] = temp;
    //
    return i;
}

void printArray(int arr[], int arr_size){
    //read every element of the array
    for (int i = 0; i<arr_size; ++i) {
        cout<< " " <<arr[i];
    }
    //print out that element
}
