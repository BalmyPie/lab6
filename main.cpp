#include "header.hpp"
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
    #ifdef _WIN32
      SetConsoleOutputCP(866);
      SetConsoleCP(866);
    #endif
    char sep = separator();
    string str = stringdef();
    bool fl = 0;
    while(fl == 0){
        char choice = menu();
            switch(choice) {
                case '1':
                    sep = separator();
                    break;
                case '2':
                    str = stringdef();
                    break;
                case '3':
                    separating(sep, str);
                    break;
                default:
                    return 0;
                    fl = 1;
                    break;
        }
    }
}
