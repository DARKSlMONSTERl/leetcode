#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> pila;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                pila.push(s[i]);
            }
            else
            {
                if (pila.empty()) return false;

                char c = pila.top();
                pila.pop();

                if ((s[i] == ')' && c != '(') ||
                    (s[i] == '}' && c != '{') ||
                    (s[i] == ']' && c != '['))
                {
                    return false;
                }
            }
        }
        return pila.empty();
    }
};
