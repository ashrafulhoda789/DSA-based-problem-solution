#include<iostream>
#include<cmath>

int main(){

    int n,countt=0;
    std::cin >> n;

    double limit = sqrt(n+1);

    for(int i=2; i<limit; i++){

        if(n%i==0){
            countt++;
        }
    }

    if(countt==0){
        std::cout << "Prime Number" << std::endl;
    }
    else{
        std::cout << "Not Prime Number" << std::endl;
    }
}