#include <iostream>
#include <cstring>
using namespace std;
int main()
 {
    char arr[999];
    int sentence_count = 0, word_count = 0, char_count = 0, capital_count = 0, small_count = 0;
    cout << "Enter the paragraph (each sentence must end with a full stop): " << endl;
    cin.getline(arr, 999);
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
     {
        if (arr[i] == '.')
        {
            sentence_count++;
        }
        if (arr[i] == ' ' || arr[i] == '.')
        {
            word_count++;
        }
        if (isalnum(arr[i]))
        {
            char_count++;
        }
        if (isupper(arr[i]))
        {
            capital_count++;
        }
        else if (islower(arr[i]))
        {
            small_count++;
        }
    }
    word_count++;
    cout << "Number of sentences: " << sentence_count << endl;
    cout << "Number of words: " << word_count << endl;
    cout << "Number of characters: " << char_count << endl;
    cout << "Number of capital characters: " << capital_count << endl;
    cout << "Number of small characters: " << small_count << endl;
    return 0;
}

