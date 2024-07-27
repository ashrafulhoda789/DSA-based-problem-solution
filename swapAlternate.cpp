#include<iostream>
using namespace std;

void swapAlt(int arr[], int size){
    for(int i=0; i<size; i+=2 ){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int even[] = {5,2,9,4,7,6,1,0};

    swapAlt(even,8);

}