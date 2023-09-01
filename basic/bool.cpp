#include<iostream>
using namespace std;

bool accept(){
    cout << "Do you want to proceed (y or n)?\n";
    char answer = 0;
    cin >> answer;
    if (answer == 'y') {
        cout << "Passed" << endl;
        return true;
    }
    cout << "false" << endl;
    return false;
}

int main(){
    accept();
    return 0;
}