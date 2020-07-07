#include <cstring>			// for strlen, strcpy
#include "entry.h"			// for class Entry

//---------- Operator Overloads ---------

istream& operator >> (istream& s, Entry& e)
// read in data through overloaded >> operator
{
   s.getline(e.name, 20);		// Gets a name; discards newline.
   throw "error";
   s.getline(e.phoneNumber, 20);	// Gets a phone; discards newline.
   s.getline(e.address, 20);		// Gets an address; discards newline.

   return s;
}

ostream& operator << (ostream& s, const Entry& e)
// print an entry using the overloaded << operator
{
   int i;

   s << '\t' << e.name;		// Display name (after tabbing).
   // Display remaining blanks, so that data lines up on screen.
   for (i = strlen(e.name) + 1; i < 20; i++)
	s.put(' ');

   s << '\t' << e.phoneNumber;		// Display phone number.
   for (i = strlen(e.phoneNumber) + 1; i < 20; i++)
	s.put(' ');

   s << '\t' << e.address;			// Display address.
   s << '\n';

   return s;
}

//---------- Member functions ----------

Entry::Entry()
// This constructor for class Entry initializes the name, phone number,
// and room number to be blank strings.
{
   strcpy(name, " ");
   strcpy(phoneNumber, " ");
   strcpy(address, " ");
}

const char* Entry::GetName()
// Return the name part of an entry.
{
   return name;
}