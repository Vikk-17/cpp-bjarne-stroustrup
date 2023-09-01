#include<iostream>
using namespace std;

void digits(){
    for(int i=0; i!=10;++i)
        cout << static_cast<char>('0'+i);
        /*
         - way of writing ten digits to cout
         - the char literal '0' is converted to its integer and i is added
         - the resulting int is converted to a char and written to cout.
         - '0' -> 48 and 48+0 = 48-> converted to 0
         - 48 + 1 = 49 -> converted to 1 and so on. 
        */
}

int main(){
    digits();
    return 0;
}