#include<iostream>
using namespace std;
void copy_fct(){
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10];
    for(auto i = 0; i!=10; ++i){
        v2[i] = v1[i];
    }
    cout << "[  ";
    for (int i=0; i!=10; i++){
        cout << v2[i] << "\t";
    }
    cout << "]";
}

int main(){
    copy_fct();
    return 0;
}