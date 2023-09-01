#include<iostream>
using namespace std;

bool accept2(){
    cout << "Do you want to proceed (y or n)?\n";
    char answer = 0;
    cin >> answer;
    switch(answer){
        case 'y':
            cout << "Passed\n";
            return true;
        case 'n':
            cout << "Failed\n";
            return false;
        default:
            cout << "I will take that for a no\nFailed\n";
            return false;
    }
}

int main(){
    accept2();
    return 0;
}