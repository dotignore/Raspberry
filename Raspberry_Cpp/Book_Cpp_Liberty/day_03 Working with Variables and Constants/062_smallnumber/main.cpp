#include <iostream>
using namespace std;

int main(){
    short int smallNumber;
    smallNumber = 32767;
    cout << "small number: " << smallNumber << endl;
    smallNumber++;
    cout << "small number: " << smallNumber << endl;
    smallNumber++;
    cout << "small number: " << smallNumber << endl;
    
    return 0;
}

// small number: 32767
// small number: -32768
// small number: -32767