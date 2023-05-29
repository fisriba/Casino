#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <fstream>
using namespace std;
int main()
{
    fstream datoteka;
        datoteka.open("Povijest.txt", ios::app);
    char c, polje[3][8] = { {'A','_', '_', '_', '_', '_', '_', 'g'},{'B','_', '_', '_', '_', '_','_','f'},{'C','_', '_', '_', '_','_','_', 'k'} };
    int x1 = 0, y1 = 0, x2 = 1, y2 = 0, x3 = 2, y3 = 0, z, g;
    cout << "Dobrodosli u utrke konja, unesite svoje ime: ";
        cin >> g;
        cout << "Dobrodošli " << g;
    cout <<"odaberite konja na kojega se kladite : \n                                                    A)\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                                                    B)\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                                                    C)\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    ";
    cin.ignore();
    for (int i = 1; i < 2; i++)
    {
        cin >> c;
        if (c == 'A')
            break;
        else if (c == 'B')
            break;
        else if (c == 'C')
            break;
        else
            cout << "\nUnesite valjanog konja: ";
    }
    cout << "\n";
    cout << "Napisi koliko ulazes: ";
    cin >> z;
    while ((polje[0][7] == 'g') && (polje[1][7] == 'f') && (polje[2][7] == 'k'))
    {
        int nasumicno;
        Sleep(700);
        srand(time(NULL));
        nasumicno = rand() % 10;
        if (nasumicno > 4)
        {
            polje[x1][y1] = '_';
            polje[x1][y1 + 1] = 'A';
            y1++;
        }
        system("cls");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 8; j++)
                cout << polje[i][j];
            cout << "\n";
        }
        Sleep(700);
        srand(time(NULL));
        nasumicno = rand() % 10;
        if (nasumicno > 4)
        {
            polje[x2][y2] = '_';
            polje[x2][y2 + 1] = 'B';
            y2++;
        }
        system("cls");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 8; j++)
                cout << polje[i][j];
            cout << "\n";
        }
        Sleep(700);
        srand(time(NULL));
        nasumicno = rand() % 10;
        if (nasumicno > 4)
        {
            polje[x3][y3] = '_';
            polje[x3][y3 + 1] = 'C';
            y3++;
        }
        system("cls");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 8; j++)
                cout << polje[i][j];
            cout << "\n";
        }
    }
    cout << "\n";

    if (polje[0][7] == 'A' && c == 'A')
    {
        z = z * 100000;
        cout << "Cestitamo! Vas konj je pobijedio.";
        cout << "\n";
        cout << "Vas dobitak je: " << z;
        goto kraj;
    }
    if (polje[0][7] == 'A' && c != 'A')
    {
        cout << "Izgubili ste, vise srece drugi put";
        goto kraj;
    }
    if (polje[1][7] == 'B' && c == 'B')
    {
        z = z * 100000;
        cout << "Cestitamo! Vas konj je pobijedio.";
        cout << "\n";
        cout << "Vas dobitak je: " << z;
        goto kraj;
    }
    if (polje[1][7] == 'B' && c != 'B')
    {
        cout << "Izgubili ste, vise srece drugi put";
        goto kraj;
    }
    if (polje[2][7] == 'C' && c == 'C')
    {
        z = z * 100000;
        cout << "Cestitamo! Vas konj je pobijedio.";
        cout << "\n";
        cout << "Vas dobitak je: " << z;
        goto kraj;
    }
    if (polje[2][7] == 'C' && c != 'C')
    {
        cout << "Izgubili ste, vi�e srece drugi put";
        goto kraj;
    }

kraj:
    return 0;
}