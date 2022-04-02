#include "tokenizer.cpp"

int main()
{   
    string target = "This is the string to be tokenizer !! \n END";
    string delimiter = (" \n");
    
    Tokenizer tokenizer(target, delimiter);

    while(tokenizer.moreToken()) {
        cout << tokenizer.nextToken() << endl;
    }

    return 0;
}