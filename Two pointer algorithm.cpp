#include<iostream>
#include<algorithm>
using namespace std;

bool two_pointers(int arr[],int n, int x){
    int i=0;
    int j = n-1;

    while(i<j){
        if(arr[i]+arr[j]>x){
            j--;
        }
        if(arr[i] + arr[j] < x){
            i++;
        }
        if(arr[i] + arr[j] == x){
            return true;
        }
        
    }
    return false;
}

int main(){
    int n,x;
    cin >>  n >> x;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    bool result = two_pointers(arr,n,x);
    cout << result << endl;
}