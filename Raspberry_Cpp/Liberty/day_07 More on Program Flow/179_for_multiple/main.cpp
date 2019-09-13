// Листинг 7,10
// использование нескольких счётчиков
// в цикле for
#include<iostream>
using namespace std;

int main(){
    for(int i=0, j=0; i<3; i++, j++)
        cout << "i: " << i << ", j: " << j << endl;
    
    return 0;
}