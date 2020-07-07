#include <iostream>
#include <string.h> //Required to use string compare

using namespace std;

class AddBook{

public:
    AddBook()
      {
         count=0;
      }

   void AddEntry();
   void DispAll();
   void DispEntry(int i); // Displays one entry
   void SearchLast();

   int Menu();

   struct EntryStruct
   {
      char FirstName[15];
      char LastName[15];
      char Birthday[15];
      char PhoneNum[15];
      char Email[15];
   };

   EntryStruct entries[100];
   int count;
};


void AddBook::AddEntry()
{

   cout << "Enter First Name: ";
   cin >> entries[count].FirstName;

   cout << "Enter Last Name: ";
   cin >> entries[count].LastName;

   cout << "Enter Date of Birth: ";
   cin >> entries[count].Birthday;

    cout << "Enter Phone Number: ";
   cin >> entries[count].PhoneNum;

   cout << "Enter Email: ";
   cin >> entries[count].Email;

   ++count;
}


void AddBook::DispEntry(int i)
{
   cout << "First name : " << entries[i].FirstName << endl;
   cout << "Last name : " << entries[i].LastName << endl;
   cout << "Date of birth : " << entries[i].Birthday << endl;
   cout << "Phone number : " << entries[i].PhoneNum << endl;
   cout << "Email: " << entries[i].Email << endl;
}

void AddBook::DispAll()
{
   cout << "Number of entries : " << count << endl;

   for(int i = 0;i < count;++i)
      DispEntry(i);
}

void AddBook::SearchLast()
{
   char lastname[32];
   cout << "Enter last name : ";
   cin >> lastname;

   for(int i = 0;i < count;++i)
   {
      if(strcmp(lastname, entries[i].LastName) == 0)
      {
         cout << "Found ";
         DispEntry(i);
         cout << endl;
      }
   }
}

AddBook AddressBook;

int Menu()
{
   int num;
   bool BoolQuit = false;

   while(BoolQuit == false)
   {

      cout << "Address Book Menu" << endl;
      cout << "(1) Add A New Contact" << endl;
      cout << "(2) Search By Last Name" << endl;
      cout << "(3) Show Complete List" << endl;
      cout << "(4) Exit And Save" << endl;
      cout << endl;

        cout << "Please enter your selection (1-4) and press enter: ";
      cin >> num;
      cout << endl;

      if (num == 1)
         AddressBook.AddEntry();
      else if (num == 2)
         AddressBook.SearchLast();
      else if (num == 3)
         AddressBook.DispAll();
      else if (num == 4)
         BoolQuit = true;
      else
         cout << "Please enter a number (1-4) and press enter: " << endl;

      cout << endl;
   }

   return 0;
}

int main (){
   Menu();

   return 0;
}
