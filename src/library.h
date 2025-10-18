#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "book.h"
#include "audiobook.h"

class Library {
  private:
    std::string name;
    int numBooks;
    int numAudiobooks;
    std::vector<Book*> books;
    std::vector<AudioBook*> audiobooks;
    int totalBooks;
    int totalBandwidthUsed;

  public:
    Library(){
      name = "";
      numBooks = 0;
      numAudiobooks = 0;
      totalBooks = 0;
      totalBandwidthUsed = 0;
    }

    Library(std::string name){
      this->name = name;
      numBooks = 0;
      numAudiobooks = 0;
      totalBooks = 0;
      totalBandwidthUsed = 0;
    }

    int getNumAudiobooks() { return numAudiobooks; }
    int getNumBooks() { return numBooks; }
    vector<Book*> getBooks() const { return books; }
    vector<AudioBook*> getAudiobooks() const { return audiobooks; }

    void addBook(Book* book) { books.push_back(book); }
    void addAudioBook(AudioBook* audiobook) { audiobooks.push_back(audiobook); }

    void printAllBook(){
      for(auto book : books){
        book->printBook();
      }
    }

    void printAllAudioBook(){
      for(auto audiobook : audiobooks){
        audiobook->printAudioBook();
      }
    }

    std::string getName() { return name; }
    int getTotalBooks() { return totalBooks; }
    int getTotalBandwidthUsed() { return totalBandwidthUsed; }

    void setName(std::string name) { this->name = name; }
    void setTotalBooks(int totalBooks) { this->totalBooks = totalBooks; }
    void setTotalBandwidthUsed(int totalBandwidthUsed) { this->totalBandwidthUsed = totalBandwidthUsed; }
    void printLibrary() { cout << "Library: " << name << endl; }
};

// Helper functions
void userOptions();
void useropt(Library* library, string title, bool r);
void options();
void opt(Library* library, string title, bool r);
void loadBooksFromFile(const std::string& filename, Library* library);
bool findBook(Library* library, string title);

#endif