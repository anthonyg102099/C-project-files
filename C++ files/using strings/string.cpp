#include <iostream>

using namespace std;

int main()
{
    string phrasesub;
    string word = "Bug";
    string phrase = "Bug man Darren cool";
    cout << phrase << endl;
    cout << "There are " << phrase.length() << " letters in that phrase" << endl;
    cout << "The word " << word << " starts at index place "<< phrase.find(word, 0) << "." << endl;
    phrasesub = phrase.substr(8, 6);
    cout << phrasesub;
    return 0;
}
