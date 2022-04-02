#include "tokenizer.h"

Tokenizer::Tokenizer(const string & target, const string & delimiter)
:target(target), delimiter(delimiter)
{
    begin = target.find_first_not_of(delimiter, 0);
    end = target.find_first_of(delimiter, begin);
}

Tokenizer::~Tokenizer()
{

}

bool Tokenizer::moreToken() const
{
    return (begin != -1);
}

string Tokenizer::nextToken()
{
    string token = target.substr(begin, end - begin);
    begin = target.find_first_not_of(delimiter, end);
    end = target.find_first_of(delimiter, begin);
    
    return token;
}

