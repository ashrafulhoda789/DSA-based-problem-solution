#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> intersection(vector<int> A, vector<int> B){

    int n1 = A.size();
    int n2 = B.size();

    vector<int> arr;
    int i=0, j=0;
    while(i<n1 && j<n2){
        if(A[i]==B[j]){
            arr.push_back(A[i]);
            i++;
            j++;
        }else if(A[i]<B[j])i++;
        else j++;
    }
    
    return arr;
}

int main(){
    vector<int> A = {1,2,2,1};
    vector<int> B = {2,2};

    vector<int> result = intersection(A,B);

    for(auto val: result){
        cout << val << " ";
    }
    
}