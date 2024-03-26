#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main()
{
     multimap<int, int> m;
     map<multimap<int,int>,int>mp;
     
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(4, 40));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(5, 50));
    m.insert(pair<int, int>(5, 60));
    // m[9]=100;   //it only work in map
    // m[9]=80;
    // m.erase(5);
   //mp.insert(pair<map<int,int>,int>(m.find(2),200));
    map<int, int>::iterator x;
    for (x = m.begin(); x != m.end(); x++)
    {
        cout << x->first;
        cout.width(5);
        cout.setf(ios::right);
        cout << x->second << endl;
    }
    return 0;
}