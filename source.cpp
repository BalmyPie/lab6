#include "header.hpp"

char separator(){
    cout << "Введите разделитель: ";
    string inp;
    char var;
    cin >> inp;
    var = inp[0];
    cout << endl;
    return var;
}

string stringdef(){
    cout << "Введите строку: ";
    string str;
    cin >> str;
    cout << endl;
    return str;
}

void separating(char sep, string str){
    int N = str.length();
    for (int i = 0; i < N; i++){
        if(str[i] == sep){
            cout << "     ";
        }
        else cout << str[i];
    }
    cout << endl;
}

char menu(){
    char choice;
    cout << "1. Ввести разделитель" << endl;
    cout << "2. Ввести строку" << endl;
    cout << "3. Разделить" << endl;
    cout << "Х. Выйти" << endl;
    cout << "Выберите действие: ";
    cin >> choice;
    for (int i = 0; i < 2; i++)
        cout << endl;
    return choice;
}
