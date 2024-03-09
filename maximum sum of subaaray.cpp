#include<iostream>
#include<climits>

using namespace std;

int maximum_sum(int arr[],int size){
    int max_sum = INT_MIN;
    int curr_sum = 0;

    for(int i=0; i<size; i++){
        curr_sum +=arr[i];
        if(max_sum < curr_sum){
            max_sum = curr_sum;
        }
        if(curr_sum < 0){
            curr_sum = 0;
        }
    }
    return max_sum;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int result = maximum_sum(arr,n);
    cout << result << endl;


}