
//Simple method
#include<iostream>
#include<algorithm>

int gcd(int a, int b){

    int result = std::min(a,b);

    while(result > 0){
        if(a%result == 0 && b%result == 0){
            break;
        }
        result--;
    }

     return result;
     
}

int main(){
    int a,b;
    std::cin >> a >> b;

    int gcd = gcd(a,b);
    int lcm = (a*b)/value;

    std::cout << gcd << " "  << lcm << std::endl;


}




/*
//Euclidean Algorithm which is used by recursive method
#include<iostream>

int gcd(int a, int b){

    if(a==0)
        return a;

    if(b==0)return b;

    if(a==b) return a;

    if(a>b){
        return gcd(a-b,b);
    }

    return gcd(a,b-a);
}

int main(){

    int a,b;
    std::cin >> a >> b;

    int result = gcd(a,b);

    std::cout << result << std::endl;

}
*/
