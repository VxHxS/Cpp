
#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    char word[] = "Hi!";  // { 'H', 'i', '!'};
    for (int i = 0; i < 3; i++)
        cout << word[i];

  //  getline(cin, word);

    string words = "Hello World!";
    words[0] = 'W';
    cout << "\n" << words;

    cin >> words;
    cout << "New: " << words;

    return 0;
}

