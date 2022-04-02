#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <iostream>
#include <string>
using namespace std;

class Tokenizer
{
    private:
        string target;
        string delimiter;
        int begin;
        int end;
    public:
        Tokenizer(const string & target, const string & delimiter);
        ~Tokenizer();
        bool moreToken() const;
        string nextToken();
};

#endif