// Листинг 13,4 создание объектов при множественном наследовании
#include<iostream>
using namespace std;
typedef int HANDS;
enum COLOR { Red, Green, Blue, Yellow, White, Black, Brown };

class Horse{                                    ////// --- Horse --- //////
public:
    Horse(COLOR color, HANDS height);
    virtual ~Horse(){cout << "Horse destructor...";}
    virtual void Whinny() const{cout << "Whinny!...";}
    virtual HANDS GetHeight() const{return itsHeight;}
    virtual COLOR GetColor() const{return itsColor;}
private:
    HANDS itsHeight;
    COLOR itsColor;
};

Horse::Horse(COLOR color, HANDS height): itsColor(color), itsHeight(height){
    cout << "Horse constructor...\n";
}

class Bird{                                       ////// --- Bird --- //////
public:
    Bird(COLOR color, bool migrates);
    virtual ~Bird(){cout << "Bird destructor...\n";}
    virtual void Chirp()const{cout << "Chirp";}
    virtual void Fly()const{cout << "I can fly! I can fly! I can fly! ";}
    virtual COLOR GetColor()const{return itsColor;}
    virtual bool GetMigration() const{return itsMigration;}
private:
    COLOR itsColor;
    bool itsMigration;
};

Bird::Bird(COLOR color, bool migrates):itsColor(color), itsMigration(migrates){
    cout << "Bird constructor...\n";
}

class Pegasus: public Horse, public Bird{       ////// --- Pegasus --- //////
public:
    void Chirp()const{Whinny();}
    Pegasus(COLOR, HANDS, bool, long);
    ~Pegasus(){cout << "Pegasus destructor...\n";}
    virtual long GetNumberBelivers() const{return itsNumberBelievers;}
private:
    long itsNumberBelievers;
};

Pegasus::Pegasus(
    COLOR aColor, HANDS height,
    bool migrates, long NumBelieve):
    Horse(aColor, height),
    Bird(aColor, migrates),
    itsNumberBelievers(NumBelieve)
{
    cout << "Pegasus constructor...\n";
}

int main(){
    Pegasus * pPeg = new Pegasus(Red, 5, true, 10); // указатель pPeg ссылается на Pegasus
    
    pPeg->Fly();
    pPeg->Whinny();
    
    cout << "\n\nYour Pegasus is (" << pPeg -> GetHeight() << ") hands tall and ";
    
    if(pPeg->GetMigration())
        cout << "it does migrate.";
    else
        cout << "it does not migrate.";
    
    cout << "\nA total of (" << pPeg->GetNumberBelivers() << ") people believe it exists.\n\n";
    delete pPeg;
    
    return 0;
}