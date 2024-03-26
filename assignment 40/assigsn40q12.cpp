// 12. Given a string S containing letters and ‘#‘. The ‘#” represents a backspace. The task is to print the new string without ‘#‘.
// String after processing backspace characters using deque
// Examples:
// Input : S = "abc#de#f#ghi#jklmn#op#"
// Output : abdghjklmo
// Input : S = "##iNeuron##Education##hub#"
// Output : iNeurEducatihu
//last progeram of 2022
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    deque<string> s1, s2;
    deque<string>::iterator it, st;
    int i, l;
    getline(cin, a);
    l = a.length();
    for (i = 0; i != a.length(); i++)
    {
        b = a.at(i);
        s1.insert(s1.begin() + i, b);
    }
    for (it = s1.begin(); it != s1.end(); it++)
    {
        if (it == s1.end() - 1)
        {
            if (*it != "#")
            {
                b = *it;
                s2.push_back(b);
            }
        }
        else
        {
            if (*(it + 1) != "#" && *it != "#")
            {
                b = *it;
                // cout << b;

                s2.push_back(b);
            }
            else
            {
                if (it < s1.end() - 2)
                {
                    if (*(it + 1) == "#" && *(it + 2) == "#")
                    {
                        if (!s2.empty())
                        {
                            s2.pop_back();
                        }
                    }
                }
            }
        }
    }
    cout << "\n\n";
    for (it = s2.begin(); it != s2.end(); it++)
    {
        cout << *it;
    }
    return 0;
}