// Листинг 12,2 Пример того, что может произойти при записи за пределы массива
#include<iostream>
using namespace std;

int main(){
    // часовый
    long sentinelOne[3];
    long TargetArray[25];   // массив для записи данных
    long sentinelTwo[3];
    int i;
    
    for(i=0; i<3; i++)
        sentinelOne[i] = sentinelTwo[i] = 0;
    
    for(i=0; i<25; i++)
        TargetArray[i] = 0;
    
    cout << "Test 1: \n"; // test current values (shold be 0)
    cout << "TargetArray[0]: " << TargetArray[0] << "\n";
    cout << "TargetArray[24]: " << TargetArray[24] << "\n\n";
    
    for(i=0; i<3; i++){
        cout << "setinelOne[" << i << "]: ";
        cout << sentinelOne[i] << "\n";
        cout << "sentinelTwo[" << i << "]: ";
        cout << sentinelTwo[i] << "\n";
    }
    
    cout << "\nAssigning...";
    for(i=0; i<=25; i++)
        TargetArray[i]=20;
    
    cout << "\n\nTest 2:\n";
    cout << "TargetArray[0]: " << TargetArray[0] << "\n";
    cout << "TargetArray[24]: " << TargetArray[24] << "\n";
    cout << "TargetArray[25]: " << TargetArray[25] << "\n\n";
    
    for (i=0; i<3; i++){
        cout << "setinelOne[" << i << "]: ";
        cout << sentinelOne[i] << "\n";
        cout << "sentinelTwo[" << i << "]: ";
        cout << sentinelTwo[i] << "\n";
    }
    
    return 0;
}
