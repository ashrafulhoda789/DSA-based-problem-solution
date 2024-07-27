#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the range of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array: ";

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int x;
    cout << "Enter the element of array which do you want to find: ";
    cin >> x;

    int result = linear_search(arr,n,x);
    cout << "The element is found at " << result << endl;

}