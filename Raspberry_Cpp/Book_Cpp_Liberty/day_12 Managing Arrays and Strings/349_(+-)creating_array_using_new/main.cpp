// Листинг 12,7 Массив динамической области памяти
#include<iostream>
using namespace std;

class CAT{
public:
    CAT(){itsAge=1;}
    ~CAT();
    int GetAge(){return itsAge;}
    void SetAge(int age){itsAge =age;}
private:
    int itsAge; int itsWeight;
};

CAT::~CAT(){
    //cout << "Destructor called!\n";
}

int main(){
    int i;
    // Указатель Family ссылается на массив (Family[]) из 500 объектов класса CAT
    CAT * Family = new CAT[500];
    
    for(i=0; i<500; i++){
        Family[i].SetAge(2*i+1);
    }
    
    for(i=0; i<500; i++){
        cout << "Cat #" << i+1 << ": " << Family[i].GetAge() << endl;
    }
    
    delete [] Family;
    
    return 0;
}


/*

Cat #1: 1
Cat #2: 3
Cat #3: 5
Cat #4: 7
Cat #5: 9
......
Cat #495: 989
Cat #496: 991
Cat #497: 993
Cat #498: 995
Cat #499: 997
Cat #500: 999
Program ended with exit code: 0
*/

/*

// Листинг 12,7 Массив динамической области памяти
#include<iostream>
using namespace std;

class CAT{
public:
    CAT(){itsAge=1; itsWeight=5;}
    ~CAT();
    int GetAge(){return itsAge;}
    int GetWeight(){return itsWeight;}
    void SetAge(int age){itsAge =age;}
private:
    int itsAge; int itsWeight;
};

CAT::~CAT(){
    // cout << "Destructor called!/n";
}

int main(){
    int i;
    CAT * Family = new CAT[500];        // Ссылка на массив из 500 объектов C
    
    for(i=0; i<500; i++){
        Family[i].SetAge(2*i+1);
    }
    
    for(i=0; i<500; i++){
        cout << "Cat #" << i+1 << ": ";
        cout << Family[i].GetAge() << endl;
    }
    
    delete [] Family;
    
    return 0;
}

*/