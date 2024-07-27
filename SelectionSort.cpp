//Greedy Algorithm
//Selection Sort

#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[],int size){
    for(int i=0; i<size-1; i++){
        int min = i;
        for(int j =i+1; j<size; j++){
            if(array[j]<array[min]){
                min = j;
            }
        }
        swap(&array[min],&array[i]);
    }
}

void printArray(int array[],int size){
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }

}

int main(){
    int arr[] = {20,12,10,15,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,n);

    printArray(arr,n);
}