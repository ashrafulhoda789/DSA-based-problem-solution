#include<iostream>
using namespace std;

int duplicate(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                return arr[i];
                break;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,3};
    int n = 5;

    cout << duplicate(arr,n) << endl;;
}