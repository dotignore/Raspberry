//AddressBook Program
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

class AddressBook{

public :
  AddressBook()
     {
        count = 0;
     }

  void AddEntry();
  void DisplayAll();
  void DisplayEntry(int i); // Displays one entry
  void SearchEntry();

  int MainMenu();

  struct Entry_Struct
  {
     char firstName[ 15 ] ;
     char lastName[ 15 ] ;
     char birthday[ 15 ] ;
     char phone[ 15 ] ;
     char email[ 15 ] ;
  };

  Entry_Struct entries[100];
  unsigned int count;
};


void AddressBook::AddEntry()
{
  cout << "Entry number " << (count + 1) << " : " << endl;

  cout << "Enter First Name: ";
  cin >> entries[count].firstName;

  cout << "Enter Last Name: ";
  cin >> entries[count].lastName;

  cout << "Enter Date of Birth: ";
  cin >> entries[count].birthday;

cout << "Enter Phone Number: ";
  cin >> entries[count].phone;

  cout << "Enter Email: ";
  cin >> entries[count].email;

  ++count; // tally total entry count
}


void AddressBook::DisplayEntry(int i)
{
  cout << "Entry[" << i + 1 << "] : " << endl; // states # of entry
  cout << "First name : " << entries[i].firstName << endl;
  cout << "Last name : " << entries[i].lastName << endl;
  cout << "Date of birth : " << entries[i].birthday << endl;
  cout << "Phone number : " << entries[i].phone << endl;
  cout << "Email: " << entries[i].email << endl;
}

void AddressBook::DisplayAll()
{
  cout << "Number of entries : " << count << endl;

  for(int i = 0;i < count;++i)
     DisplayEntry(i);
}

void AddressBook::SearchEntry()
{
  char lastname[32];
  cout << "Enter last name : ";
  cin >> lastname;

  for(int i = 0;i < count;++i)
  {
     if(strcmp(lastname, entries[i].lastName) == 0)
     {
        cout << "Found ";
        DisplayEntry(i);
        cout << endl;
     }
  }
}


// Your class
AddressBook my_book;

int MainMenu()
{
  int num;
  bool bQuit = false;

  // Put all your code into a while loop.
  while(bQuit == false)
  {

     cout << "+-------------------------------------+" << endl;
     cout << "|         Address Book Menu           |" << endl;
     cout << "|                                     |" << endl;
     cout << "| 1- Add an entry                     |" << endl;
     cout << "| 2- Search for an entry by last name |" << endl;
     cout << "| 3- Display all entries              |" << endl;
     cout << "| 4- Exit                             |" << endl;
     cout << "|                                     |" << endl;
     cout << "+-------------------------------------+" << endl;

     cout << endl;
     cout << "Please enter a number for one of the above options: ";
     cin >> num;
     cout << endl;

     if (num == 1)
        my_book.AddEntry();
     else if (num == 2)
        my_book.SearchEntry();
     else if (num == 3)
        my_book.DisplayAll();
     else if (num == 4)
        bQuit = true;
     else
        cout << "Invalid choice. Please try again" << endl;

     cout << endl;
  }

  return 0;
}

int main (){
  MainMenu();
  return 0;
}
