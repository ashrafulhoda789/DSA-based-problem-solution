#include<iostream>

int main(){

    int n;
    std::cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        std::cin >> arr[i];
    }

    for(int i=1; i<n; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    /* arr = 12 23 45 51 19 8
    index =  0   1  2  3  4 5

    for(i=1){
        current = arr[1] = 23;
        j = arr[0] = 12;

        while(arr[0] > current){
            This condition is false.
        }
    }

    for(i=2){
        current = arr[2]
    }

    
    
    
    */

    for(int i=0; i<n; i++){
        std::cout << arr[i] << " ";
    }
}