#include<iostream>
#include<cstring>
using namespace std;

void brute_Force(char* s, char* p){

    int ls = strlen(s);
    int lp = strlen(p);

    for(int i=0; i<=ls-lp; i++){
        int j;
        for(j=0; j<lp; j++){
            if(s[i+j] != p[j]) break;
            
        }
        if(j==lp){
            cout << i << endl;
        }
    }
}
int main(){

    char s[] = "AABABBABAABAABA";
    char p[] = "AABA";

    brute_Force(s,p);

}