#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int main()
{
    char c, polje[3][8] = { {'A','_', '_', '_', '_', '_', '_', 'g'},{'B','_', '_', '_', '_', '_','_','f'},{'C','_', '_', '_', '_','_','_', 'k'} };
    int x1 = 0, y1 = 0, x2 = 1, y2 = 0, x3 = 2, y3 = 0, z;
    cout << "Dobrodošli u utrke konja, odaberite konja na kojega se kladite: A)\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    B)\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    C)\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t    ";
    for (int i = 1; i > 0; i++)
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
    cout << "Napiši koliko ulažeš: ";
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
        system("clear");
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
        system("clear");
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
        system("clear");
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
        cout << "Èestitamo! Vaš konj je pobijedio.";
        cout << "\n";
        cout << "Vaš dobitak je: " << z;
        goto kraj;
    }
    if (polje[0][7] == 'A' && c != 'A')
    {
        cout << "Izgubili ste, više sreæe drugi put";
        goto kraj;
    }
    if (polje[1][7] == 'B' && c == 'B')
    {
        z = z * 100000;
        cout << "Èestitamo! Vaš konj je pobijedio.";
        cout << "\n";
        cout << "Vaš dobitak je: " << z;
        goto kraj;
    }
    if (polje[1][7] == 'B' && c != 'B')
    {
        cout << "Izgubili ste, više sreæe drugi put";
        goto kraj;
    }
    if (polje[2][7] == 'C' && c == 'C')
    {
        z = z * 100000;
        cout << "Èestitamo! Vaš konj je pobijedio.";
        cout << "\n";
        cout << "Vaš dobitak je: " << z;
        goto kraj;
    }
    if (polje[2][7] == 'C' && c != 'C')
    {
        cout << "Izgubili ste, više sreæe drugi put";
        goto kraj;
    }

kraj:
    return 0;
}