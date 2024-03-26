#include <iostream>
using namespace std;

int main()
{
    int m[20][20]={0};
    int x, y, V, E, directed,w;
    cout << "enter number of vertices and edges in graph : ";
    cin >> V >> E;
    cout << "1. DIRECTED GRAPH ";
    cout << "\n0. UNDIRECTD GRAPH ";
    cin >> directed;
    for (int i = 1; i <= E; i++)
    {
        cout << "\nenter source and destinantion for " << i << " edge";
        cin >> x >> y;
        cout<<"enter weight of "<<i<< " edge : ";
        cin>>w;
        if (x <= V && y <= V)
        {
            m[x][y] = w;
            if (directed == 0)
            {
                m[y][x] = w;
            }
        }
        else
        {
            cout << "\ninvalid edge\n";
        }
    }
    int i, j;
    for (i = 1; i <= V; i++)
    {
        for (j = 1; j <= V; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}