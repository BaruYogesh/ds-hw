#include "BookInfo.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int main(){

    string filename;
    ifstream input;

    cout << "input the name of the file: " << endl;
    cin >> filename;

    input.open(filename, ios::app);

    if(input.fail()){
        cout << "file DNE";
        string wait;
        cin >> wait;
        return 0;

    } else {
        string title;
        string first;
        string last;
        string contents;

        BookInfo book = BookInfo(title, first, last);

        getline(input, title);
        input >> first;
        input >> last;
        input >> contents;

        while(!input.eof()){
            char letter;

            input.get(letter);

            if(isalpha(letter)){
                book.incrementLetterCount(letter);

            } else if(letter == ' '){
                book.incrementWordCount();
            } else if(letter == '\n'){
                book.incrementLineCount();
            }

        }
        ofstream output;
        output.open("CardCatalog.txt", ios::app);

        output << "Title: " << book.getTitle() << endl;
        output << "Author full name: " << book.getFirstName() << " " << book.getLastName() << endl;
        output << "Author first name: " << book.getFirstName() << endl;
        output << "Author last name: " << book.getLastName() << endl;
        output << "Word count: " << book.getWordCount() << endl;
        output << "Line count: " << book.getLineCount() << endl;

        string ans;
        cout << "would you like to see the letter count? " << endl;
        cin >> ans;

        if(tolower(ans[0]) == 'y'){
            book.showLetterFreq();
        }
    }


    return 0;
}
