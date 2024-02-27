#include<iostream>

int bigmod(long long b, long long p, long long m){

    long long result = 0;
    long long term = 1;

    for(int i=0; i<p; i++){

        result = (result + term) % m;

        term = (term * b) % m;
    }
    return result;
}

int main(){

    long long base, power, mod;
    std::cin >> base >>  power >> mod;

    long long result = bigmod(base, power, mod);

    std::cout << "Big mod of series: " << result << std::endl;
}
//The sum of the series always be Zero.