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
        case '0' : cout<< "����\n"; break;
        case '1' : cout<< "����\n"; break;
        case '2' : cout<< "���\n"; break;
        case '3' : cout<< "���\n"; break;
        case '4' : cout<< "������\n"; break;
        case '5' : cout<< "���\n"; break;
        case '6' : cout<< "����\n"; break;
        case '7' : cout<< "�����\n"; break;
        case '8' : cout<< "����\n"; break;
        case '9' : cout<< "�����\n"; break;
        default : cout<< "���� ������ �� � �����!\n";
    }
    return 0;
}
