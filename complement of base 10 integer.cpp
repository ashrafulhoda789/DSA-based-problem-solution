#include<iostream>
#include<cmath>
using namespace std;

int complement(int n){

    int ans = 0;
    int i=0;
    while(n!=0){
        ans += pow(2,i) * (!(n%2));
        n = n/2;
        i++;
    }
    
    return ans;
}

int main(){
    int num = 7;

    cout << complement(num) << endl;
}