// листинг 4,2 Пример вычитания с переполнением целого числа
#include <iostream>
using namespace std;

int main(){
    unsigned int difference;
    unsigned int bigNumber = 100;
    unsigned int smallNumber = 50;
    difference = bigNumber - smallNumber;
    cout << "Difference is: " << difference << endl;
    difference = smallNumber - bigNumber;
    cout << "Difference is: " << difference << endl;
    
    return 0;
}

// Difference is: 50
// Difference is: 4294967246