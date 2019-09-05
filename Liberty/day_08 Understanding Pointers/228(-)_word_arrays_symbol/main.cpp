#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;

bool GetWord(char * string, char * word, int &wordOffset);
// Основная программа
int main(){
    const int bufferSize = 255;
    char buffer[bufferSize+1];      // переменная для хранения всей строки
char word[bufferSize+1];            // переменная для хранения слова
int wordOffset = 0;                 // начинаем с первого символа
    
    cout << "Enter a string: ";
    cin.getline(buffer,bufferSize);
    while (GetWord(buffer,word,wordOffset)){
        cout << "Got this word: " << word << endl;
    }
    return 0;
}

// Функция для выделения слова из строки символов   229
bool GetWord(char * string, char * word, int &wordOffset){
    if(!string[wordOffset])         // определяет конец строки
    return false;
    
    char *p1, *p2;
    p1 = p2 = string+wordOffset;    // указатель на следующее слово
    
    // удаляем ведущие пробелы
    for(int i=0; i<(int)strlen(p1)&& !isalnum(p1[0]); i++)
        p1++;
    // проверка наличия слова
    if (!isalnum(p1[0]))
        return false;
    
    // указатель р1 показывает начало следущего слова
    // так же как и р2
    p2 = p1;
    
    // перемещаем з2 в конец слова
    while (isalnum(p2[0]))
        p2++;
    
    // p2 указывает на конец слова а p1 - в начало
    // разность указателей показывает длину слова
    int len = int (p2 - p1);
    
    // копируем слово в буфер
    strncpy(word,p1,len);
    
    // и добавляем символ разрыва строки
    word[len]='\0';
    
    // ищем начало следущего
    for (int i = int(p2-string); i<(int)strlen(string) && !isalnum(p2[0]); i++)
        p2++;

    wordOffset = int(p2-string);
            
    return true;
}