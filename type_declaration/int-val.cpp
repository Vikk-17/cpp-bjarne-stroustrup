#include<iostream>
using namespace std;

void intval(){
    for(char c; cin>>c;) cout << "The value of '" << c << "' is " << int{c} << endl;
    // int{c} gives the integer value for a charcter c
}

int main(){
    intval();
    return 0;
}