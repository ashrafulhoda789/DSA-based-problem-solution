#include<iostream>
using namespace std;

void rotate(int arr[], int d, int n){
    int temp[n];
    int j = 0;

    for(int i = d; i<n; i++){
        temp[j] = arr[i];
        j++;
    }

    for(int i=0; i<d; i++){
        temp[j] = arr[i];
        j++;
    }
    /*
    for(int i = n-1; i>= n-d; i--){
        temp[j] = arr[i];
        j++;
    }

    for(int i=0; i<n-d; i++){
        temp[j] = arr[i];
        j++;
    }
    */

    for(int i=0; i<n; i++){
        cout << temp[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};

    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    rotate(arr,d,n);

}