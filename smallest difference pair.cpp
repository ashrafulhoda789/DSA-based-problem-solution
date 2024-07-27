#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void smallest_pair(int arr1[], int arr2[], int n, int m){
    int diff = INT_MAX;

    int i=0, j = 0;
    int l,r;

    while(i < n && j < m){
        if(abs(arr1[i] - arr2[j]) < diff){
            diff =  abs(arr1[i] - arr2[j]);
            l = i;
            r = j;
        }

        if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j--;
        }
    }
    cout << diff << endl;
    cout << arr1[l] << " " << arr2[r] << endl;
}

int main(){
    int arr1[] = {1, 2, 11, 5};
    int arr2[] = {4, 12, 19, 23, 127, 235};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    sort(arr1, arr1+n);
    sort(arr2, arr2+m);

    smallest_pair(arr1,arr2,n,m);
}