// Заменить все символы в строке s из которых состоит строка t на символ x
#include <iostream>
using namespace std;

int main(){
    
    string s, t;
    char x;
    getline(cin, s); // считываем всю строку (учитывая пробелы)
    cin >> t >> x;

    for (int i = 0; i < s.size(); ++i){ // пробегаемся по строке где заменяем символы
        for (int j = 0; j < t.size(); ++j){ // пробегаемся по строке, на наличие символов из которой надо проверить первую строку
            if (s[i] == t[j]) s[i] = x; // заменяем символы в первой строке на символ x
        }
    }
    cout << s; // вывод измененной первой строки

    return 0;
}