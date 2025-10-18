#include "book.h"
#include <iostream>
#include <vector>
#include <string>
#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

class AudioBook: public Book {
  private:
    vector<string>* narrator; 
    bool audiobookStatus; 
    string duration;
    string format;
  public:
    AudioBook() : Book(){
      narrator = new vector<string>();
      audiobookStatus = true;
      duration = "";
      format = "";
    }

    AudioBook(string title, string author, string genre, int id, string format, string duration): Book(title, author, genre, id) {
      this->format = format;
      this->duration = duration;
      this->audiobookStatus = true;
}
~AudioBook() {
    delete narrator;
}
  string getFormat(){
    return format;
  }

    vector<string> getNarrator(){
      return *narrator;
    }
    string getDuration(){
      return duration;
    }
    bool getAudiobookStatus(){
      return audiobookStatus;
    }
    vector<string> setNarrator(vector<string> narrator);

    void setDuration(string duration){
      this->duration = duration;
    }
    void setAudiobookStatus(bool audiobookStatus){
      this->audiobookStatus = audiobookStatus;
    }
    void printAudioBook(){
      printBook();
      cout << "Format: " << format << endl;
      cout << "Duration: " << duration << endl;
      cout<< "---------------------"<<endl;
    }

};

#endif