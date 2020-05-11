// Листинг 13,2 Использование оператора dynamic_cast
// Использование rttl
#include<iostream>
using namespace std;
enum TYPE{HORSE, PEGASUS};

class Horse{
public:
    virtual void Gallop(){cout << "Galloping...\n";}
private:
    int itsAge;
};

class Pegasus: public Horse{
public:
    virtual void Fly(){cout << "I can fly! I can fly! I can fly!\n";}
};

const int NumberHorse = 5;

int main(){
    Horse * Ranch[NumberHorse];
    Horse * pHorse;
    int choice, i;
    
    for(i=0; i<NumberHorse; i++){
        cout << "(1)Horse (2)Pegasus: ";
        cin >> choice;
        if (choice == 2)
            pHorse = new Pegasus;
        else
            pHorse = new Horse;
        Ranch[i] = pHorse;
    }
    
    cout << "\n";
    
    for(i=0; i<NumberHorse; i++){
        Pegasus * pPeg = dynamic_cast < Pegasus *> (Ranch[i]);
        if(pPeg)
            pPeg->Fly();
        else
            cout << "Just a horse\n";
        
        delete Ranch[i];
    }
    return 0;
}