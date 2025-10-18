#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <string>
#include <vector>

using namespace std;

class Book
{
  private:
    string title;
    string genre;
    string author; 
    bool availabilityStatus;  
    int id; 

  public:
    Book(){
      title = "";
      genre = "";
      author = "";
      availabilityStatus = true;
      id = 0;
    }
    Book(string title, string author, string genre, int id){
      this->title = title;
      this->genre = genre;
      this->author = author;
      availabilityStatus= true;
      this->id = id;
          }
    string getTitle(){return title;}
    string getGenre(){return genre;}
    string getAuthor(){return author;}
    bool getAvailabilityStatus(){return availabilityStatus;}
    int getId(){return id;}
    void setTitle(string title){this-> title =title;}
    void setGenre(string genre){this->genre = genre;}
    void setAuthor(string author){this-> author =author;}
    void setAvailabilityStatus(bool availabilityStatus){this->availabilityStatus = availabilityStatus;}
    void setId(int id){this-> id = id;}
    void printBook() const{
      cout << "Title: " << title << endl;
      cout << "Genre: " << genre << endl;
      cout << "Author: " << author << endl;
      cout << "Availability Status: " << (availabilityStatus ? "Available" : "Not Available") << endl;
      cout << "ID: " << id << endl;
      cout<< "=============="<<endl;
    }

    virtual ~Book(){

    }

};

#endif