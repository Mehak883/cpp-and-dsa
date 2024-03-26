#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int i, j, choice, flag = 0,k;
    char count = '0', x[3][3], num;
    cout << "***TIC TAC TOE***\n";
    cout << "Enter your choice\n1. Want to play with smart computer\n";
    cout << "2. Want to play with evil computer\n3. Want to play with player\n4. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 2:

            break;
        case 3:
            getchar();
            system("cls");
            for (i = 0; i <= 2; i++)
            {
                for (j = 0; j <= 2; j++)
                {
                    count++;
                    x[i][j] = count;
                    cout << x[i][j] << " | ";
                }
                printf("\n");
            }
            cout << "Player 1:O\n";
            cout << "Player 2:X\n";
            for ( k = 0; k < 9; k++)
            {
                if (k % 2 == 0)
                {
                    cout << "Player 1's turn:";
                }
                else
                    cout << "Player 2's turn:";
                cin >> num;
                for (i = 0; i <= 2; i++)
                {
                    if (x[i][0] == 'O' && x[i][1] == 'O' && x[i][2] == 'O')
                    {
                        cout << "Player 1 is winner" << endl;
                        exit(0);
                    }
                    else if (x[0][i] == 'O' && x[1][i] == 'O' && x[2][i] == 'O')
                    {
                        cout << "Player 1 is winner" << endl;
                        exit(0);
                    }
                    else if (x[0][0] == 'O' && x[1][1] == 'O' && x[2][2] == 'O')
                    {
                        cout << "Player 1 is winner" << endl;
                        exit(0);
                    }
                    else if (x[2][0] == 'O' && x[1][1] == 'O' && x[0][2] == 'O')
                    {
                        cout << "Player 1 is winner" << endl;
                        exit(0);
                    }
                }
                for (i = 0; i <= 2; i++)
                {
                    if (x[i][0] == 'X' && x[i][1] == 'X' && x[i][2] == 'X')
                    {
                        cout << "Player 2 is winner" << endl;
                        exit(0);
                    }
                    else if (x[0][i] == 'X' && x[1][i] == 'X' && x[2][i] == 'X')
                    {
                        cout << "Player 2 is winner" << endl;
                        exit(0);
                    }
                    else if (x[0][0] == 'X' && x[1][1] == 'X' && x[2][2] == 'X')
                    {
                        cout << "Player 2 is winner" << endl;
                        exit(0);
                    }
                    else if (x[2][0] == 'X' && x[1][1] == 'X' && x[0][2] == 'X')
                    {
                        cout << "Player 2 is winner" << endl;
                        exit(0);
                    }
                }
                getchar();
                system("cls");
                for (i = 0; i <= 2; i++)
                {
                    for (j = 0; j <= 2; j++)
                    {
                        if (x[i][j] == num)
                        {
                            if (k % 2 == 0)
                            {
                                x[i][j] = 'O';
                            }
                            else
                            {
                                x[i][j] = 'X';
                            }
                            cout << x[i][j] << " | ";
                        }
                        else
                            cout << x[i][j] << " | ";
                    }

                    cout << endl;
                }
            }
            break;
        case 1:
            int r;
            char c;
            getchar();
            system("cls");
            for (i = 0; i <= 2; i++)
            {
                for (j = 0; j <= 2; j++)
                {
                    count++;
                    x[i][j] = count;
                    cout << x[i][j] << " | ";
                }
                printf("\n");
            }
            cout << "Player 1:O\n";
            cout << "Player 2:X (Smart Computer)\n";
            for ( k = 1; k <= 9; k++)
            {
                if (k % 2 == 0)
                {
                    cout << "Player 1's turn:";
                    cin >> num;
                }
                if (k % 2 != 0)
                {
                    cout << "Computer's turn:\n";
                    r = rand() % 9;
                    c = '1' + r;
                    for (i = 0; i <= 2; i++)
                    {
                        if (x[i][0] == 'O' && x[i][1] == 'O')
                        {
                            c = x[i][2];

                            break;
                        }
                        if (x[i][0] == 'O' && x[i][2] == 'O')
                        {
                            c = x[i][1];

                            break;
                        }
                        if (x[i][1] == 'O' && x[i][2] == 'O')
                        {
                            c = x[i][0];

                            break;
                        }
                        if (x[0][i] == 'O' && x[1][i] == 'O')
                        {
                            c = x[2][i];

                            break;
                        }
                        if (x[0][i] == 'O' && x[2][i] == 'O')
                        {
                            c = x[1][i];

                            break;
                        }
                        if (x[1][i] == 'O' && x[2][i] == 'O')
                        {
                            c = x[0][i];

                            break;
                        }
                    }
                    if (x[0][0] == 'O' && x[1][1] == 'O')
                    {
                        c = x[2][2];
                    }
                    if (x[0][0] == 'O' && x[2][2] == 'O')
                    {
                        c = x[1][1];
                    }
                    if (x[1][1] == 'O' && x[2][2] == 'O')
                    {
                        c = x[0][0];
                    }
                    if (x[2][0] == 'O' && x[1][1] == 'O')
                    {
                        c = x[0][2];
                    }
                    if (x[2][0] == 'O' && x[0][2] == 'O')
                    {
                        c = x[1][1];
                    }
                    if (x[1][1] == 'O' && x[0][2] == 'O')
                    {
                        c = x[2][0];
                    }
                }

                for (i = 0; i <= 2; i++)
                {
                    if (x[i][0] == 'O' && x[i][1] == 'O' && x[i][2] == 'O')
                    {
                        cout << "Player 1 is winner" << endl;
                        exit(0);
                    }
                    if (x[i][0] == 'X' && x[i][1] == 'X' && x[i][2] == 'X')
                    {
                        cout << "Computer is winner" << endl;
                        exit(0);
                    }
                }
                for (i = 0; i < 3; i++)
                {
                    if (x[0][i] == 'O' && x[1][i] == 'O' && x[2][i] == 'O')
                    {
                        cout << "Player 1 is winner" << endl;
                        exit(0);
                    }
                    if (x[0][i] == 'X' && x[1][i] == 'X' && x[2][i] == 'X')
                    {
                        cout << "Computer is winner" << endl;
                        exit(0);
                    }
                }
                if (x[0][0] == 'O' && x[1][1] == 'O' && x[2][2] == 'O')
                {
                    cout << "Player 1 is winner" << endl;
                    exit(0);
                }
                if (x[2][0] == 'O' && x[1][1] == 'O' && x[0][2] == 'O')
                {
                    cout << "Player 1 is winner" << endl;
                    exit(0);
                }
            }
            if (x[0][0] == 'X' && x[1][1] == 'X' && x[2][2] == 'X')
            {
                cout << "Computer is winner" << endl;
                exit(0);
            }
            if (x[2][0] == 'X' && x[1][1] == 'X' && x[0][2] == 'X')
            {
                cout << "Computer is winner" << endl;
                exit(0);
            }
            getchar();
            system("cls");
            for (i = 0; i <= 2; i++)
            {
                for (j = 0; j <= 2; j++)
                {
                    if (x[i][j] == num && k % 2 == 0)
                    {
                        x[i][j] = 'O';
                        cout << x[i][j] << " | ";
                    }
                    else if (x[i][j] == c)
                    {
                        x[i][j] = 'X';
                        cout << x[i][j] << " | ";
                    }
                    else
                        cout << x[i][j] << " | ";
                }
                cout << endl;
            }

            break;
        case 4:
            exit(0);
        }
        return 0;
    }