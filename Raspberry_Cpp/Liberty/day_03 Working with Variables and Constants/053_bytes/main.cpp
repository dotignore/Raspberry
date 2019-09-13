#include <iostream>
using namespace std;

int main(){
    cout << "The size of an int is: int \t\t\t" <<        sizeof(int) << "bytes" << endl;
    cout << "The size of an int is: short int \t" <<  sizeof(short) << "bytes" << endl;
    cout << "The size of an int is: float \t\t" <<      sizeof(float) << "bytes" << endl;
    cout << "The size of an int is: long \t\t" <<       sizeof(long) << "bytes" << endl;
    cout << "The size of an int is: double \t\t" <<     sizeof(double) << "bytes" << endl;
    cout << "The size of an int is: bool \t\t" <<       sizeof(bool) << "bytes" << endl;
    cout << "The size of an int is: char \t\t" <<       sizeof(char) << "bytes" << endl;
    
    return 0;
}


// The size of an int is: int 		4bytes
// The size of an int is: short int 2bytes
// The size of an int is: float 	4bytes
// The size of an int is: long 		8bytes
// The size of an int is: double 	8bytes
// The size of an int is: bool 		1bytes
// The size of an int is: char 		1bytes