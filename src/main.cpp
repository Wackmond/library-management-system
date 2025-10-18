#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "book.h"
#include "audiobook.h"
#include "library.h"

using namespace std;

void User_menu() {
  cout<<"===================================="<<endl;
  cout<<"Library Menu           "<<endl;
  cout<<"===================================="<<endl;
  cout<<"1. Search for Book or audiobook to borrow or return"<<endl;
  cout<<"2. Display All Books"<<endl;
  cout<<"3. Display All Audiobooks"<<endl;
  cout<<"4. Exit"<<endl;
  cout<<"5. Go to User Menu"<<endl;
  cout<<"===================================="<<endl;
}

void Admin_menu() {
  cout<<"===================================="<<endl;
  cout<<"Admin Menu           "<<endl;
  cout<<"===================================="<<endl;
  cout<<"0. To load data from a file"<<endl;
  cout<<"1. Add New Book"<<endl;
  cout<<"2. Add New Audiobook"<<endl;
  cout<<"3. Search for Books or Audiobook"<<endl;
  cout<<"4. Display All Books"<<endl;
  cout<<"5. Display All Audiobooks"<<endl;
  cout<<"6. Save book added"<<endl;
  cout<<"7. Exit"<<endl;
  cout<<"8. Go to User Menu"<<endl;
  cout<<"===================================="<<endl;
}

int main() {
  Library* library = new Library("My Library");
  // Main program loop implementation here
  return 0;
}
