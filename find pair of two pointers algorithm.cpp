#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

pair<int, int> two_pair(int arr[],int n, int x){
    int i=0;
    int j = n-1;

    while(i<j){

        if(arr[i] + arr[j] > x){
            j--;
        }

        if(arr[i] + arr[j] < x){
            i++;
        }

        if(arr[i] + arr[j] == x){
            return make_pair(i,j);
        }
    }

    return make_pair(-1,-1);


}

int main(){
    int n,x;
    cin >> n >> x;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    pair<int, int> result = two_pair(arr,n,x);

    cout << result.first << " " << result.second <<  endl;
}