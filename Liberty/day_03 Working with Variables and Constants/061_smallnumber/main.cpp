#include <iostream>
using namespace std;

int main(){
    unsigned short int smallNumber;
    smallNumber = 65535;
    cout << "small number:" << smallNumber << endl;
    smallNumber++;
    cout << "small number:" << smallNumber << endl;
    smallNumber++;
    cout << "small number:" << smallNumber << endl;
    
    return 0;
}

// small number:65535
// small number:0
// small number:1