#include<iostream>
using namespace std;

int unique(int *arr, int n){
    int count=0;
    for(int i=0; i<n; i++){
        count=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            return arr[i];
        }
    }
    return -1;
    
}

int main(){
    int arr[] = {1,5,1,6,7,6,9,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << unique(arr,n) << endl;

}