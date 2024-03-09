#include<iostream>
using namespace std;
void rotate_count(int arr[],int n){
    
    int min = arr[0];
    int min_index=0;
    for(int i=0; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
            min_index = i;
        }
    }
    cout << min_index << endl;
}

int main(){
    int arr[] = {6,5,1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    rotate_count(arr,n);
}