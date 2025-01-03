#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string text = "hello world";
    string oldWord = "world";
    string newWord = "newWord";

    text.replace(text.find(oldWord), oldWord.length(), newWord);
    cout << text << endl;

    return 0;
}