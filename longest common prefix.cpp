#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

string prefix(string arr[], int n){

    if(n==0) return " ";
    if(n==1) return arr[0];

    sort(arr, arr+n);

    int len = min(arr[0].size(),arr[n-1].size());

    string first = arr[0], last = arr[n-1];
    int i=0; 
    while(i<len && first[i]==last[i]) i++;

    string pre = first.substr(0,i);
    return pre;
}

int main(){
    string arr[] = {"flower","flow", "flight"};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << prefix(arr,n) << endl;

}