// Листинг 8.5
// Размещение и удаление объектов в области динамического объекта
#include<iostream>
using namespace std;

class SimpleCat{
public:
    SimpleCat();
    ~SimpleCat();
private:
    int itsAge;
};

SimpleCat::SimpleCat(){
    cout << "Counstructor called.\n";
    itsAge = 1;
}

SimpleCat::~SimpleCat(){
    cout << "Destructor call\n";
}

int main(){
    cout << "SimpleCat Friscy...\n";                        // SimpleCat Friscy...
    SimpleCat Frisky;                                       // Counstructor called.

    cout << "SimpleCat *pRags = new SimpleCat...\n";        // SimpleCat *pRags = new SimpleCat...
    SimpleCat * pRags = new SimpleCat;                      // Counstructor called.
    
    cout << "delete pRags...\n";                            // delete pRags...
    delete pRags;                                           // Destructor call

    cout << "Exiting, watch Frisky go...\n";                // Exiting, watch Frisky go...
    
                                                            // в какой момент вызвается это? Destructor call
    return 0;
}