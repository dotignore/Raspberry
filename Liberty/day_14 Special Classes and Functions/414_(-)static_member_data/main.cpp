// Листинг 14.1 Статические переменные классы
#include<iostream>
using namespace std;

class Cat{
public:
    static int HowManyCats;
    Cat(int age):itsAge(age){HowManyCats++;}
    virtual ~Cat(){HowManyCats--;}
    
    virtual int GetAge(){return itsAge;}
    virtual void SetAge(int age){itsAge = age;}
private:
    int itsAge;
};

int Cat::HowManyCats = 0;

int main(){
    Cat * CatHouse[5];                          // создали массив ссылочных указателей * CatHouse[5]
    for(int i=0; i<5; i++)
        CatHouse[i] = new Cat(i);               // заполнили ссылочный масив цыфрами 0, 1, 2, 3, 4
    
    for (int i=0; i<5; i++){
        cout << "There are " << Cat::HowManyCats << " cats left!" << endl;  //
        
        cout << "Deleting the one that is " << CatHouse[i]->GetAge() << " years old" << endl;
        //cout << "delete CatHouse[i] " << CatHouse[i] << ", itsAge = (int) " << i << endl;
        delete CatHouse[i];                     // обращяемся в деструктор virtual ~Cat(){HowManyCats--;} и уменьшаем на единицу количество котов Cat::HowManyCats
        CatHouse[i] = 0;                        // я думал что оператор delete удаляет наши адреса.... и так понял что нет
        //cout << "delete CatHouse[i] " << CatHouse[i] << endl;
    }
    
    return 0;
}

/*

// Листинг 14.1 Статические переменные классы
#include<iostream>
using namespace std;

class Cat{
public:
    static int HowManyCats;
    Cat(int age):itsAge(age){HowManyCats++;}
    virtual ~Cat(){HowManyCats--;}
    
    virtual int GetAge(){return itsAge;}
    virtual void SetAge(int age){itsAge = age;}
private:
    int itsAge;
};

int Cat::HowManyCats = 0;

int main(){
    int i;
    const int MaxCats = 5;
    
    Cat * CatHouse[MaxCats];    // создали массив ссылочных указателей * CatHouse[5]
    
    for(i=0; i<MaxCats; i++)
        CatHouse[i] = new Cat(i);   // заполнили ссылочный масив цыфрами 0, 1, 2, 3, 4
    
    for (i=0; i<MaxCats; i++){
        cout << "There are " << endl;
        cout << Cat::HowManyCats << endl;   // после выполнения цикла CatHouse[i] = new Cat(i); у нас HowManyCats=5
        cout << " cats left!" << endl;
        
        cout << "Deleting the one that is " << endl;
        cout << CatHouse[i]->GetAge()  << endl;
        cout << " years old" << endl;
        delete CatHouse[i];
        CatHouse[i] = 0;                    // обнуляем содержимое itsAge int
    }
    
    return 0;
}

*/