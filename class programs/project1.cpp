#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    char a[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int i, j, choice, flag1, flag, flag3, k;
    char n, tic, q, s;
    system("cls");
    cout << "*************************TIC TAC TOE*************************\n";
    cout << "Enter your choice\n1. Want to play with samrt computer\n";
    cout << "2. Want to play with evil computer\n3. Want to play with player\n4. Exit\n";
    cin >> choice;
    getchar();
    system("cls");
    for (i = 0; i < 3; i++)
    {

        cout << "    |    |    \n";
        for (j = 0; j < 3; j++)
        {
            cout << "  " << a[i][j] << " ";
            if (j < 2)
                cout << "|";
        }
        cout << "\n";
        cout << "____|____|____\n";
    }
    switch (choice)
    {
    case 1:

        cout << "Player  X\nSmart computer  O\n";
        for (k = 1; k <= 9; k++)
        {
            if (k % 2 != 0)
            {
                cout << "player 1 : ";
                cin >> n;
                getchar();
                system("cls");
                tic = 'X';
            }
            if (k % 2 == 0)
            {
                cout << "smart computer ";
                int r;

                r = rand() % 9;
                n = '1' + r;

                getchar();

                for (i = 0; i < 3; i++)
                {
                    if (a[i][0] == 'X' && a[i][1] == 'X')
                    {
                        n = a[i][2];
                        break;
                    }
                    if (a[i][0] == 'X' && a[i][2] == 'X')
                    {
                        n = a[i][1];
                        break;
                    }
                    if (a[i][0] == 'X' && a[i][2] == 'X')
                    {
                        n = a[i][1];
                        break;
                    }
                }
                for (j = 0; j < 3; j++)
                {
                    if (a[0][j] == 'X' && a[1][j] == 'X')
                    {
                        n = a[2][j];
                        break;
                    }
                    if (a[0][j] == 'X' && a[2][j] == 'X')
                    {
                        n = a[1][j];
                        break;
                    }
                    if (a[1][j] == 'X' && a[2][j] == 'X')
                    {
                        n = a[0][j];
                        break;
                    }
                }
                if (a[0][0] == 'X' && a[1][1] == 'X')
                {
                    n = a[2][2];
                }
                if (a[2][2] == 'X' && a[1][1] == 'X')
                {
                    n = a[0][0];
                }
                if (a[0][0] == 'X' && a[2][2] == 'X')
                {
                    n = a[1][1];
                }
                if (a[0][2] == 'X' && a[1][1] == 'X')
                {
                    n = a[2][0];
                }
                if (a[1][1] == 'X' && a[2][0] == 'X')
                {
                    n = a[0][2];
                }
                if (a[0][2] == 'X' && a[2][0] == 'X')
                {
                    n = a[1][1];
                }
                system("cls");
                tic = 'O';
            }
            for (i = 0; i < 3; i++)
            {
                cout << "    |    |    \n";
                for (j = 0; j < 3; j++)
                {
                    if (n == a[i][j])
                    {
                        a[i][j] = tic;
                    }
                    cout << "  " << a[i][j] << " ";
                    if (j < 2)
                        cout << "|";
                }
                cout << "\n";
                cout << "____|____|____\n";
            }
            flag = 0;
            flag1 = 0;
            for (i = 0; i < 3; i++)
            {
                if (a[i][0] == 'X' && a[i][1] == 'X' && a[i][2] == 'X')
                {
                    flag = 1;
                    break;
                }
                if (a[i][0] == 'O' && a[i][1] == '0' && a[i][2] == '0')
                {
                    flag1 = 1;
                    break;
                }
            }
            for (j = 0; j < 3; j++)
            {
                if (a[0][j] == 'X' && a[1][j] == 'X' && a[2][j] == 'X')
                {
                    flag = 1;
                    break;
                }
                if (a[0][j] == 'O' && a[1][j] == 'O' && a[2][j] == 'O')
                {
                    flag1 = 1;
                    break;
                }
            }
            if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
            {
                flag = 1;
            }
            if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
            {
                flag1 = 1;
            }
            if (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')
            {
                flag = 1;
            }
            if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')
            {
                flag1 = 1;
            }
            if (flag == 1)
            {
                cout << "################################################\n";
                cout << "                  Player 1 win";
                cout << "\n################################################";
                exit(0);
            }
            if (flag1 == 1)
            {
                cout << "################################################\n";
                cout << "                  Computer win";
                cout << "\n################################################";
                exit(0);
            }
        }
        cout << "################################################\n";
        cout << "                 Game Over";
        cout << "\n################################################";
    case 2:
        flag1 = 0;
        flag = 0;
        flag3 = 0;
        cout << "Player  X\nEvil computer  O\n";
        for (k = 1; k <= 9; k++)
        {
            if (k % 2 != 0)
            {
                cout << "player 1 : ";
                cin >> n;

                tic = 'X';
                for (i = 0; i < 3; i++)
                {
                    cout << "    |    |    \n";
                    for (j = 0; j < 3; j++)
                    {
                        if (n == a[i][j])
                        {
                            a[i][j] = tic;
                        }
                        cout << "  " << a[i][j] << " ";
                        if (j < 2)
                            cout << "|";
                    }
                    cout << "\n";
                    cout << "____|____|____\n";
                }
            }
            if (k % 2 == 0)
            {
                cout << "\nsmart computer\n";
                int r;
                char n1;

                r = rand() % 9;
                n1 = '1' + r;
                // getchar();
                // system("cls");
                for (i = 0; i < 3; i++)
                {
                    if (a[i][0] == 'X' && a[i][1] == 'X')
                    {
                        n = a[i][2];
                        flag = 1;
                        break;
                    }
                    if (a[i][0] == 'X' && a[i][2] == 'X')
                    {
                        n = a[i][1];
                        flag = 1;
                        break;
                    }
                    if (a[i][0] == 'X' && a[i][2] == 'X')
                    {
                        n = a[i][1];
                        flag = 1;
                        break;
                    }
                }
                for (j = 0; j < 3; j++)
                {
                    if (a[0][j] == 'X' && a[1][j] == 'X')
                    {

                        s = a[2][j];
                        flag1 = 1;
                        break;
                    }
                    if (a[0][j] == 'X' && a[2][j] == 'X')
                    {

                        s = a[1][j];
                        flag1 = 1;
                        break;
                    }
                    if (a[1][j] == 'X' && a[2][j] == 'X')
                    {
                        s = a[0][j];
                        flag1 = 1;
                        break;
                    }
                }
                if (a[0][0] == 'X' && a[1][1] == 'X')
                {
                    q = a[2][2];
                    flag3 = 1;
                }
                if (a[2][2] == 'X' && a[1][1] == 'X')
                {
                    q = a[0][0];
                    flag3 = 1;
                }
                if (a[0][0] == 'X' && a[2][2] == 'X')
                {
                    q = a[1][1];
                    flag3 = 1;
                }
                if (a[0][2] == 'X' && a[1][1] == 'X')
                {
                    q = a[2][0];
                    flag3 = 1;
                }
                if (a[1][1] == 'X' && a[2][0] == 'X')
                {
                    q = a[0][2];
                    flag3 = 1;
                }
                if (a[0][2] == 'X' && a[2][0] == 'X')
                {
                    q = a[1][1];
                    flag3 = 1;
                }
                tic = 'O';
                if (flag == 0 && flag1 == 0 && flag3 == 0)
                {
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            if (n1 == a[i][j])
                            {
                                a[i][j] = tic;
                            }
                        }
                    }
                }
                else if (flag1 == 1 && flag == 1)
                {
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            if (n == a[i][j])
                            {
                                a[i][j] = tic;
                            }
                            if (s == a[i][j])
                            {
                                a[i][j] = tic;
                            }
                        }
                    }
                }
                else if (flag3 == 1 && flag == 1)
                {
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            if (n == a[i][j])
                            {
                                a[i][j] = tic;
                            }
                            if (q == a[i][j])
                            {
                                a[i][j] = tic;
                            }
                        }
                    }
                }
                else if (flag1 == 1 && flag3 == 1)
                {
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            if (s == a[i][j])
                            {
                                a[i][j] = tic;
                            }
                            if (q == a[i][j])
                            {
                                a[i][j] = tic;
                            }
                        }
                    }
                }
                else if (flag == 1)
                {
                    for (i = 0; i < 3; i++)
                    {

                        for (j = 0; j < 3; j++)
                        {
                            if (n == a[i][j])
                            {
                                a[i][j] = tic;
                            }
                        }
                    }
                }
                else if (flag1 == 1)
                {
                    for (i = 0; i < 3; i++)
                    {

                        for (j = 0; j < 3; j++)
                        {
                            if (s == a[i][j])
                            {
                                a[i][j] = tic;
                            }
                        }
                    }
                }

                else
                {
                    for (i = 0; i < 3; i++)
                    {

                        for (j = 0; j < 3; j++)
                        {
                            if (q == a[i][j])
                            {
                                a[i][j] = tic;
                            }
                        }
                    }
                }
                for (i = 0; i < 3; i++)
                {
                    cout << "    |    |    \n";
                    for (j = 0; j < 3; j++)
                    {
                        cout << "  " << a[i][j] << " ";
                        if (j < 2)
                        {
                            cout << "|";
                        }
                    }
                    cout << "\n";
                    cout << "____|____|____\n";
                }
            }

            flag = 0;
            flag1 = 0;
            for (i = 0; i < 3; i++)
            {
                if (a[i][0] == 'X' && a[i][1] == 'X' && a[i][2] == 'X')
                {
                    flag = 1;
                    break;
                }
                if (a[i][0] == 'O' && a[i][1] == '0' && a[i][2] == '0')
                {
                    flag1 = 1;
                    break;
                }
            }
            for (j = 0; j < 3; j++)
            {
                if (a[0][j] == 'X' && a[1][j] == 'X' && a[2][j] == 'X')
                {
                    flag = 1;
                    break;
                }
                if (a[0][j] == 'O' && a[1][j] == 'O' && a[2][j] == 'O')
                {
                    flag1 = 1;
                    break;
                }
            }
            if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
            {
                flag = 1;
            }
            if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
            {
                flag1 = 1;
            }
            if (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')
            {
                flag = 1;
            }
            if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')
            {
                flag1 = 1;
            }
            if (flag == 1)
            {
                cout << "################################################\n";
                cout << "                  Player 1 win";
                cout << "\n################################################";
                exit(0);
            }
            if (flag1 == 1)
            {
                cout << "################################################\n";
                cout << "                  Computer win";
                cout << "\n################################################";
                exit(0);
            }
        }
        cout << "################################################\n";
        cout << "                 Game Over";
        cout << "\n################################################";
    case 3:
        cout << "Player 1  X\nPlayer 2  O\n";
        for (k = 1; k <= 9; k++)
        {
            if (k % 2 != 0)
            {
                cout << "player 1 : ";
                cin >> n;
                getchar();
                system("cls");
                tic = 'X';
            }
            if (k % 2 == 0)
            {
                cout << "player 2 : ";
                cin >> n;
                getchar();
                system("cls");
                tic = 'O';
            }
            for (i = 0; i < 3; i++)
            {
                cout << "    |    |    \n";
                for (j = 0; j < 3; j++)
                {
                    if (n == a[i][j])
                    {
                        a[i][j] = tic;
                    }
                    cout << "  " << a[i][j] << " ";
                    if (j < 2)
                        cout << "|";
                }
                cout << "\n";
                cout << "____|____|____\n";
            }
            flag = 0;
            flag1 = 0;
            for (i = 0; i < 3; i++)
            {
                if (a[i][0] == 'X' && a[i][1] == 'X' && a[i][2] == 'X')
                {
                    flag = 1;
                    break;
                }
                if (a[i][0] == 'O' && a[i][1] == 'O' && a[i][2] == 'O')
                {
                    flag1 = 1;
                    break;
                }
            }
            for (j = 0; j < 3; j++)
            {
                if (a[0][j] == 'X' && a[1][j] == 'X' && a[2][j] == 'X')
                {
                    flag = 1;
                    break;
                }
                if (a[0][j] == 'O' && a[1][j] == 'O' && a[2][j] == 'O')
                {
                    flag1 = 1;
                    break;
                }
            }
            if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
            {
                flag = 1;
            }
            if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
            {
                flag1 = 1;
            }
            if (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')
            {
                flag = 1;
            }
            if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')
            {
                flag1 = 1;
            }
            if (flag == 1)
            {
                cout << "################################################\n";
                cout << "                  player 1 win";
                cout << "\n################################################";
                exit(0);
            }
            if (flag1 == 1)
            {
                cout << "################################################\n";
                cout << "                  player 2 win";
                cout << "\n################################################";
                exit(0);
            }
        }
        cout << "################################################\n";
        cout << "                 Game Over";
        cout << "\n################################################";
    case 4:
        exit(0);
    }
    return 0;
}