#include<iostream>
using namespace std;

int main(){
    int A,M,X,value;
    cin >> A >> M;

    for(X=1; X<M; X++){
        if((A%M)*(X%M)%M == 1){
            value = X;
            break;
        }
    }
    cout << value <<endl;
}