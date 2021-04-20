#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale (LC_ALL, "bulgarian");
    char a;
    cin>>a;
    switch (a)
    {
        case '0' : cout<< "Нула\n"; break;
        case '1' : cout<< "Едно\n"; break;
        case '2' : cout<< "Две\n"; break;
        case '3' : cout<< "Три\n"; break;
        case '4' : cout<< "Четири\n"; break;
        case '5' : cout<< "Пет\n"; break;
        case '6' : cout<< "Шест\n"; break;
        case '7' : cout<< "Седем\n"; break;
        case '8' : cout<< "Осем\n"; break;
        case '9' : cout<< "Девет\n"; break;
        default : cout<< "Този символ не е число!\n";
    }
    return 0;
}
