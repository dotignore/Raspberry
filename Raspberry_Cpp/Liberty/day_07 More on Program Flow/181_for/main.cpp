// Листинг 7,13
// использование оператора for
// для организации "пустого" цикла
#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<5; cout << "i " << i++ << endl)
        ;
    
    return 0;
}