// Листинг 12.12
#include <iostream>
#include <string.h>
using namespace std;

// Рудиментарный класс
class String
{
public:
    // Конструкторы
    String();
    String(const char * const);
    String(const String &);
    ~String();
    
    // перегружаемые классы
    char & operator[](unsigned short offset);
    char operator[](unsigned short offset) const;
    String operator+(const String&);
    void operator+=(const String&);
    String & operator= (const String &);
    
    // Основные методы доступа
    unsigned short GetLen()const {return itsLen;}
    const char * GetString()const {return itsString;}
    
private:
    String (unsigned short); // закрытый конструктор
    char * itsString;
    unsigned short itsLen;
};

// Конструктор заданный по умолчанию создаёт строку нулевой длинны
String::String()
{
    itsString = new char[1];
    itsString[0] = '\0';
    itsLen=0;
}

// Преобразование массива символов в строку
String::String(const char * const cString)
{
    itsLen = strlen(cString);
    itsString = new char[itsLen+1];
    for (unsigned short i = 0; i < itsLen; i++)
        itsString[i] = cString[i];
    itsString[itsLen]='\0';
}

// конструктор копировщик
String::String (const String & rhs)
{
    itsLen=rhs.GetLen();
    itsString = new char[itsLen+1];
    for (unsigned short i = 0; i<itsLen; i++)
         itsString[i] = rhs[i];
         itsString[itsLen] = '\0';
}

// деструктор освобождающий память
String::~String ()
{
    delete [] itsString;
    itsLen = 0;
}

// закрытый вспомогательный конструктор
// используется только методами класса для создания
// строк требуемой длинны с нулевым наполнением
String::String(unsigned short len)
{
    itsString = new char[len+1];
    for (unsigned short i = 0; i<=len; i++)
        itsString[i] = '\0';
    itsLen=len;
}

// оператор присваивания освобождает память
// и копирует туда string и size
String& String::operator=(const String & rhs)
{
    if (this == &rhs)
        return *this;
    delete [] itsString;
    itsLen=rhs.GetLen();                            // -> 24
    itsString = new char[itsLen+1];
    for (unsigned short i = 0; i<itsLen; i++)
         itsString[i] = rhs[i];                     // -> 107
         itsString[itsLen] = '\0';
         return *this;
}
             
// не константный оператор индексирования
// возвращает ссылку на символ так что его
// можно изменить!
char & String::operator[](unsigned short offset)
{
    if (offset > itsLen)
    return itsString[itsLen-1];
    else
    return itsString[offset];
}

// константный оператор индексирования для использования
// с константными объектами (см конструктор копировщик)
char String::operator[](unsigned short offset) const
{
    if (offset > itsLen)
        return itsString[itsLen-1];
    else
        return itsString[offset];
}

// создание новой строки путём добавления
// текущей строки rhs
String String::operator+(const String& rhs)
{
    unsigned short totalLen = itsLen + rhs.GetLen();
    String temp(totalLen);
    unsigned short i;
    for ( i= 0; i<itsLen; i++)
        temp[i] = itsString[i];
    for (unsigned short j = 0; j<rhs.GetLen(); j++, i++)
         temp[i] = rhs[j];
    temp[totalLen]='\0';
    return temp;
}
     
// изменяет текущюю строку и возвращает void
void String::operator+=(const String& rhs)
{
    unsigned short rhsLen = rhs.GetLen();
    unsigned short totalLen = itsLen + rhsLen;
    String temp(totalLen);
        unsigned short i;
    for (i = 0; i<itsLen; i++)
         temp[i] = itsString[i];
    for (unsigned short j = 0; j<rhs.GetLen(); j++, i++)
         temp[i] = rhs[i-itsLen];
    temp[totalLen]='\0';
    *this = temp;
}
// * * * * *
                          
int main()
{
    String s1("initial test");                  // (12, 42)                             (String(const char * const);)
    cout << "S1:\t" << s1.GetString() << endl;  // 25           #S1:	initial test    (const char * GetString()const {return itsString;})

    char * temp = "Hello World";
    s1 = temp;                                  // (12, 42)-> 81                        (String(const char * const);)
    cout << "S1:\t" << s1.GetString() << endl;  //  25          #S1:	Hello World     (const char * GetString()const {return itsString;})

    char tempTwo[20];
    strcpy(tempTwo, "; nice to be here!");
    s1 += tempTwo;                              // (12, 42)-> 131->24 ...... и тд
    cout << "tempTwo:\t" << tempTwo << endl;
    cout << "S1:\t" << s1.GetString() << endl;

    cout << "S1[4]:\t" << s1[4] << endl;
    s1[4]='x';
    cout << "S1:\t" << s1.GetString() << endl;

    cout << "S1[999]:\t" << s1[999] << endl;

    String s2(" Another string");
    String s3;
    s3 = s1+s2;
    cout << "S3:\t" << s3.GetString() << endl;

    String s4;
    s4 = "Why does this work?";
    cout << "S4:\t" << s4.GetString() << endl;
    
    return 0;
}