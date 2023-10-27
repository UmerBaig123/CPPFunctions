#include <iostream>
#include <vector>
using namespace std;

// Returns a vector <vector<int>> type that has sets of all starting and ending indexes
// of second param inside first param

vector<vector<int>> find(string a, string b)
{
    vector<vector<int>> result = {};
    for (int i = 0; i < int(a.size()); i++)
    {
        bool equals = true;
        vector<int> temp = {};
        for (int x = 0; x < int(b.size()) && equals; x++)
        {
            if (b[x] == a[i + x])
            {
                temp.push_back(i + x);
            }
            else
            {
                equals = false;
            }
        }
        if (int(temp.size()) > 0 && equals)
        {
            result.push_back({temp[0], temp[int(temp.size()) - 1]});
        }
    }
    return result;
}
// Replaces the index1-index2 of first param with second param and returns it
string replace(string repl, string replaceBy, int index1, int index2)
{
    string replaced = "";
    for (int i = 0; i < index1; i++)
    {
        replaced += repl[i];
    }
    replaced += replaceBy;
    for (int i = index2 + 1; i < int(repl.size()); i++)
    {
        replaced += repl[i];
    }
    return replaced;
}
// returns reversed version of first string
string reverse(string str)
{
    string reversed = "";
    for (int i = int(str.size()) - 1; i >= 0; i--)
    {
        reversed += str[i];
    }
    return reversed;
}
// cuts first param from index1-index2
string cut(string repl, int index1, int index2)
{
    string cutted = "";
    for (int i = 0; i < index1; i++)
    {
        cutted += repl[i];
    }
    for (int i = index2 + 1; i < int(repl.size()); i++)
    {
        cutted += repl[i];
    }
    return cutted;
}
// adds second param into first param after the index index1 and returns it
string add(string str, string addition, int index1)
{
    string added = "";
    for (int i = 0; i <= index1; i++)
    {
        added += str[i];
    }
    added += addition;
    for (int i = index1 + 1; i < int(str.size()); i++)
    {
        added += str[i];
    }
    return added;
}
// returns a string which is the substring of first param from index1-index2 inclusive
// if second param is greater than third param the substring is reversed
string substring(string str, int index1, int index2)
{
    string substr = "";
    if (index1 <= index2)
    {
        for (int i = index1; i <= index2; i++)
        {
            substr += str[i];
        }
    }
    else
    {
        for (int i = index1; i >= index2; i--)
        {
            substr += str[i];
        }
    }
    return substr;
}
// replaces all occurences of second param in first param with third param and returns it
string replaceAll(string str, string repl, string replaceBy)
{
    string replaced = str;
    vector<vector<int>> result = find(replaced, repl);
    for (int i = 0; i < int(result.size()); i++)
    {
        vector<vector<int>> resultTemp = find(replaced, repl);
        replaced = replace(replaced, replaceBy, resultTemp[0][0], resultTemp[0][1]);
    }
    return replaced;
}
// cuts all occurences of second param in first param and returns it
string cutAll(string str, string cuting)
{
    string cutted = str;
    vector<vector<int>> result = find(cutted, cuting);
    for (int i = 0; i < int(result.size()); i++)
    {
        vector<vector<int>> resultTemp = find(cutted, cuting);
        cutted = cut(cutted, resultTemp[0][0], resultTemp[0][1]);
    }
    return cutted;
}
// returns a string which has all the characters of param 1 but all lowercases are converted to uppercases
string toUpperCase(string str)
{
    string uppercase = "";
    for (int i = 0; i < int(str.size()); i++)
    {
        if (int(str[i]) >= int('a') && int(str[i]) <= int('z'))
        {
            uppercase += char(int(str[i]) - 32);
        }
        else
        {
            uppercase += str[i];
        }
    }
    return uppercase;
}
// returns a string which has all the characters of param 1 but all uppercases are converted to lowercases
string toLowerCase(string str)
{
    string lowercase = "";
    for (int i = 0; i < int(str.size()); i++)
    {
        if (int(str[i]) >= int('A') && int(str[i]) <= int('Z'))
        {
            lowercase += char(int(str[i]) + 32);
        }
        else
        {
            lowercase += str[i];
        }
    }
    return lowercase;
}