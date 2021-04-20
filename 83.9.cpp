#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale (LC_ALL, "bulgarian");
    int den, mesec, godina;
    cin>>den>>mesec>>godina;
    switch (den)
    {
        case 1 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 2 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 3 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 4 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 5 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 6 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 7 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 8 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 9 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 10 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 11 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 12 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 13 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 14 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 15 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 16 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 17 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 18 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 19 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 20 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 21 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 22 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 23 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 24 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 25 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 26 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 27 : cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; break;
        case 28 : if ((((godina%400!=0)&&(godina%100 == 0))||(godina%4!=0)) && mesec ==2) {cout<< "1 3 "<< godina;} else {cout<<den+1<<" "<<mesec<<" "<<godina<<'\n';} break;
        case 29 : if (mesec == 2) {if (((godina%400!=0)&&(godina%100 == 0))||(godina%4!=0)){cout<< "Годината е невисокосна, следователно такъв ден не съществува!";} else {cout<<"1 3 "<<godina;}} else {cout<<den+1<<" "<<mesec<<" "<<godina<<'\n';} break;
        case 30 : if (mesec == 2 || mesec == 4 || mesec == 6 || mesec == 9 || mesec == 11){ if (mesec == 2){ cout<< "Такъв ден не съществува!";}else{ cout<<"1 "<<mesec+1<<" "<<godina<<'\n';}} else { cout<<den+1<<" "<<mesec<<" "<<godina<<'\n'; } break;
        case 31 : if (mesec == 2 || mesec == 4 || mesec == 6 || mesec == 9 || mesec == 11) { cout<< "Такъв ден не съществува!";} else { if (mesec == 12){cout<<"1 1 "<<godina+1<<'\n';} else {cout<<"1 "<<mesec+1<<" "<<godina<<'\n';}} break;
    }
    return 0;
}
