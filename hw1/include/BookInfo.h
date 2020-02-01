#ifndef BOOKINFO_H
#define BOOKINFO_H

#include <string>
using namespace std;
class BookInfo
{
    public:
        string getTitle();
        string getFirstName();
        string getLastName();
        int getWordCount();
        int getLetterCount();
        int getLineCount();
        int incrementWordCount();
        int incrementLineCount();
        void showLetterFreq();
        void toString();
        void incrementLetterCount(char);

        BookInfo();
        BookInfo(string, string, string);
        virtual ~BookInfo();

    protected:

    private:
        string title;
        string firstName;
        string lastName;
        int wordCount;
        int letterCount[26];
        int lineCount;
};

#endif // BOOKINFO_H
