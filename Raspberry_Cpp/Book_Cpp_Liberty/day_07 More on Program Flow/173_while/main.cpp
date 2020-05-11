// Листинг 7,5
// Пример бесконечного цикла
#include<iostream>
using namespace std;

int main(){
    int counter = 0;
    while(true){
        counter++;
        if(counter > 10)
            break;
    }
    cout << "Counter: " << counter << endl;
    
    return 0;
}