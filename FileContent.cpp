#include <fstream>
#include <iostream>
#include <cstring>
#include <clocale>
#include <string.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    const int len = 99999;
    int numLine=0;
    char word[len], line[len];
    char path[255];

    cout << "Введите путь к файлу: ";cin >> path;
    cout << "Введите слово для поиска: ";cin >> word;
    ifstream fin(path);
    if (!fin){cout << "Ошибка открытия файла." << endl; cin >> word; return 1;}
    while (fin.getline(line,len))
        {
            numLine++;
            if (strstr(strlwr(line),strlwr(word)))
                cout << "Присутствует в строке " << numLine << endl;
        }
    cin >> word;
    cout << "Отсутствует!" << endl;
    cin >> word;
}
