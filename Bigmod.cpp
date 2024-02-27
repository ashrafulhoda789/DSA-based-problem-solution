#include<iostream>

int bigmod(int b,int p,int m){

    if(p==0){
        return 1%m;
    }
    int x = bigmod(b, p/2, m);
    x = (x*x) % m;

    if(p%2==1){
        x = (x*b) % m;
    }
    return x;
}

int main(){

    int base,power,mod;
    std::cin >> base >>  power >> mod;

    std::cout << "Result: " << bigmod(base,power,mod) << std::endl;
}