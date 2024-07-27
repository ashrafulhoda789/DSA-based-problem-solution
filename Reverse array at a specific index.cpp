#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr , int m) {
    // Write your code here  
    int n = arr.size();

    vector<int> V;

    for(int i=0; i<=m; i++){
        V.push_back(arr[i]);
    }   	

    for(int i=n-1; i>m; i--){
        V.push_back(arr[i]);
    }
    
    for(int i=0; i<n; i++){
        cout << V[i] << " ";
    }
    
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int m = 3;

    reverseArray(arr, m);
    
}