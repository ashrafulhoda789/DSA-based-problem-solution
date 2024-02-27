#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    /* arr = 2,5,1,8,27,4
                index =  0,1,2,3, 4,5

                for(i=0){
                    for(j=1){
                        if(arr[1] < arr[0]){
                            arr[0] < arr[1] so this condition is false.
                        }
                    }
                }

                if(arr[2] < arr[0]){
                            temp = arr[2] = 1;
                            arr[2] = arr[0];
                            arr[0] = 1;
                        }
                        output = 1 5 2 8 27 4

                if(arr[2] < arr[1]){
                            temp = arr[2] = 2;
                            arr[2] = arr[1];
                            arr[1] = 2;
                        }
                        output = 1 2 5 8 27 4
                Like every step will be runned step by step.
                
                
                */

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}