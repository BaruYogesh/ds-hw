#include "BookInfo.h"
#include <iostream>

BookInfo::BookInfo(string title, string firstName, string lastName)
{
    this->title = title;
    this->firstName = firstName;
    this->lastName = lastName;
}

void BookInfo::incrementLetterCount(char letter){
    this->letterCount[int(tolower(letter))-97] += 1;
}

BookInfo::incrementWordCount(){
    this->wordCount++;
}

BookInfo::incrementLineCount(){
    this->lineCount++;
}

string BookInfo::getTitle(){
    return this->title;
}

string BookInfo::getFirstName(){
    return this->firstName;
}

string BookInfo::getLastName(){
    return this->lastName;
}

int BookInfo::getWordCount(){
    return this->wordCount;
}

int BookInfo::getLineCount(){
    return this->lineCount;
}

void BookInfo::showLetterFreq(){
    int length;
    for(int i = 0; i<26; i++){
        length+=letterCount[i];
    }

    for(int j = 0; j<26; j++){
        cout  << char(j + 97) << ": " << letterCount[j]/static_cast<double>(length) << endl;
    }

}
BookInfo::~BookInfo()
{
    //dtor
}
