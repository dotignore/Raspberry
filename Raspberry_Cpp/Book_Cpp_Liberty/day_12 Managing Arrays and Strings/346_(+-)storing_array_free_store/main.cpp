// Листинг 12,6 Массив указателей на объект
#include<iostream>
using namespace std;

class CAT{
public:
    CAT(){itsAge=1; itsWeight=5;}
    ~CAT(){}
    int GetAge(){return itsAge;}
    int GetWeight(){return itsWeight;}
    void SetAge(int age){itsAge =age;}
private:
    int itsAge; int itsWeight;
};

int main(){
    int i;
    CAT * Family[500];      // объявляется массив на с 500 указателями
    CAT * pCat;             // создаём указатель pCat
    
    for(i=0; i<500; i++){
        pCat = new CAT;     // создаём объект класса CAT
        pCat->SetAge(2*i+1);
        Family[i] = pCat;
    }
    for(i=0; i<500; i++){
        cout << "Cat #" << i+1 << ": ";
        cout << Family[i] -> GetAge() << endl;
    }
    
    return 0;
}


/*
 Cat #1: 1
 Cat #2: 3
 Cat #3: 5
 Cat #4: 7
 Cat #5: 9
......
 Cat #496: 991
 Cat #497: 993
 Cat #498: 995
 Cat #499: 997
 Cat #500: 999
 Program ended with exit code: 0
 */