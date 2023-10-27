#include <iostream>
#include <vector>
using namespace std;

// Checks if a character is a uppercased used in characterPriority function
bool isUpperCase(char a)
{
    return int(a) >= int('A') && int(a) <= int('Z');
}
// Returns the sum of all elements in a vector <int> type
int sum(vector<int> a)
{
    int sum = 0;
    for (int i = 0; i < int(a.size()); i++)
    {
        sum += a[i];
    }
    return sum;
}
// Returns the greatest of all elements in a vector <int> type
int greatest(vector<int> a)
{
    int greatest = a[0];
    for (int i = 1; i < int(a.size()); i++)
    {
        if (a[i] > greatest)
        {
            greatest = a[i];
        }
    }
    return greatest;
}
// Returns the smallest of all elements in a vector <int> type
int minimum(vector<int> a)
{
    int minimum = a[0];
    for (int i = 1; i < int(a.size()); i++)
    {
        if (a[i] < minimum)
        {
            minimum = a[i];
        }
    }
    return minimum;
}
// Returns the index of the smallest of all elements in a vector <int> type
int minimumIndex(vector<int> a)
{
    int minimum = a[0];
    int minind = 0;
    for (int i = 1; i < int(a.size()); i++)
    {
        if (a[i] < minimum)
        {
            minimum = a[i];
            minind = i;
        }
    }
    return minind;
}
// Returns the average of all elements in a vector <int> type
int average(vector<int> a)
{
    return sum(a) / int(a.size());
}
// Returns all occurences of a element in a vector <int> type
vector<int> occurences(vector<int> param1, int param2)
{
    vector<int> occurences = {};
    for (int i = 0; i < int(param1.size()); i++)
    {
        if (param1[i] == param2)
        {
            occurences.push_back(i);
        }
    }
    return occurences;
}
// Returns all occurences of a element in a vector <char> type
vector<int> occurences(vector<char> param1, char param2)
{
    vector<int> occurences = {};
    for (int i = 0; i < int(param1.size()); i++)
    {
        if (param1[i] == param2)
        {
            occurences.push_back(i);
        }
    }
    return occurences;
}
// Returns all occurences of a element in a vector <string> type
vector<int> occurences(vector<string> param1, string param2)
{
    vector<int> occurences = {};
    for (int i = 0; i < int(param1.size()); i++)
    {
        if (param1[i] == param2)
        {
            occurences.push_back(i);
        }
    }
    return occurences;
}
// returns a reverse vector of parameter
vector<int> reverse(vector<int> a)
{
    vector<int> reversed = {};
    for (int i = int(a.size()) - 1; i >= 0; i--)
    {
        reversed.push_back(a[i]);
    }
    return reversed;
}
// returns a reverse vector of parameter
vector<char> reverse(vector<char> a)
{
    vector<char> reversed = {};
    for (int i = int(a.size()) - 1; i >= 0; i--)
    {
        reversed.push_back(a[i]);
    }
    return reversed;
}
// returns a reverse vector of parameter
vector<string> reverse(vector<string> a)
{
    vector<string> reversed = {};
    for (int i = int(a.size()) - 1; i >= 0; i--)
    {
        reversed.push_back(a[i]);
    }
    return reversed;
}
// returns a vector by cutting specific indexes of parameter1 index1-index2 inclusive
vector<int> cut(vector<int> a, int index1, int index2)
{
    vector<int> cutted = {};
    for (int i = 0; i < index1; i++)
    {
        cutted.push_back(a[i]);
    }
    for (int i = index2 + 1; i < int(a.size()); i++)
    {
        cutted.push_back(a[i]);
    }
    return cutted;
}
// returns a vector by cutting specific indexes of parameter1 index1-index2 inclusive
vector<char> cut(vector<char> a, int index1, int index2)
{
    vector<char> cutted = {};
    for (int i = 0; i < index1; i++)
    {
        cutted.push_back(a[i]);
    }
    for (int i = index2 + 1; i < int(a.size()); i++)
    {
        cutted.push_back(a[i]);
    }
    return cutted;
}
// returns a vector by cutting specific indexes of parameter1 index1-index2 inclusive
vector<string> cut(vector<string> a, int index1, int index2)
{
    vector<string> cutted = {};
    for (int i = 0; i < index1; i++)
    {
        cutted.push_back(a[i]);
    }
    for (int i = index2 + 1; i < int(a.size()); i++)
    {
        cutted.push_back(a[i]);
    }
    return cutted;
}
// returns a vector by removing all occurences of param2 in param1
vector<int> removeAll(vector<int> param1, int param2)
{
    vector<int> removed = {};
    for (int i = 0; i < int(param1.size()); i++)
    {
        if (param1[i] != param2)
        {
            removed.push_back(param1[i]);
        }
    }
    return removed;
}
// returns a vector by removing all occurences of param2 in param1
vector<char> removeAll(vector<char> param1, char param2)
{
    vector<char> removed = {};
    for (int i = 0; i < int(param1.size()); i++)
    {
        if (param1[i] != param2)
        {
            removed.push_back(param1[i]);
        }
    }
    return removed;
}
// returns a vector by removing all occurences of param2 in param1
vector<string> removeAll(vector<string> param1, string param2)
{
    vector<string> removed = {};
    for (int i = 0; i < int(param1.size()); i++)
    {
        if (param1[i] != param2)
        {
            removed.push_back(param1[i]);
        }
    }
    return removed;
}
// returns an integer which signifies the priority of a character
int characterPriority(char a)
{
    if (isUpperCase(a))
    {
        return (int(a) - int('A')) + 1;
    }
    else
    {
        return (int(a) - int('a')) + 1;
    }
}
// returns an integer which signifies the priority of a string
float stringPriority(string a)
{
    float priorit = 0;
    float divider = 1;
    for (int i = 0; i < int(a.size()); i++)
    {
        priorit += float(characterPriority(a[i])) / divider;
        divider *= 100;
    }
    return priorit;
}
// sorts an array in ascending order
vector<int> sort(vector<int> a)
{
    vector<int> sorted = {};
    vector<int> sortt = a;
    for (int i = 0; i < int(a.size()); i++)
    {
        int smallest = minimum(sortt);
        sorted.push_back(smallest);
        sortt = cut(sortt, minimumIndex(sortt), minimumIndex(sortt));
    }
    return sorted;
}
// sorts an array in ascending order
vector<char> sort(vector<char> a)
{
    vector<char> sorted = a;
    for (int i = 0; i < int(sorted.size()); i++)
    {
        for (int x = 0; x < int(sorted.size()) - 1; x++)
        {
            if (characterPriority(sorted[i]) < characterPriority(sorted[x]))
            {
                char temp = sorted[i];
                sorted[i] = sorted[x];
                sorted[x] = temp;
            }
        }
    }
    return sorted;
}
// sorts an array in ascending order
vector<string> sort(vector<string> a)
{
    vector<string> sorted = a;
    for (int i = 0; i < int(sorted.size()); i++)
    {
        for (int x = 0; x < int(sorted.size()) - 1; x++)
        {
            if (stringPriority(sorted[i]) < stringPriority(sorted[x]))
            {
                string temp = sorted[i];
                sorted[i] = sorted[x];
                sorted[x] = temp;
            }
        }
    }
    return sorted;
}
// returns a vector by replacing index1-index2 of param1 with param2
vector<int> replace(vector<int> a, vector<int> replaceBy, int index1, int index2)
{
    vector<int> replaced = {};
    for (int i = 0; i < index1; i++)
    {
        replaced.push_back(a[i]);
    }
    for (int i = 0; i < int(replaceBy.size()); i++)
    {
        replaced.push_back(replaceBy[i]);
    }
    for (int i = index2 + 1; i < int(a.size()); i++)
    {
        replaced.push_back(a[i]);
    }
    return replaced;
}
// returns a vector by replacing index1-index2 of param1 with param2
vector<char> replace(vector<char> a, vector<char> replaceBy, int index1, int index2)
{
    vector<char> replaced = {};
    for (int i = 0; i < index1; i++)
    {
        replaced.push_back(a[i]);
    }
    for (int i = 0; i < int(replaceBy.size()); i++)
    {
        replaced.push_back(replaceBy[i]);
    }
    for (int i = index2 + 1; i < int(a.size()); i++)
    {
        replaced.push_back(a[i]);
    }
    return replaced;
}
// returns a vector by replacing index1-index2 of param1 with param2
vector<string> replace(vector<string> a, vector<string> replaceBy, int index1, int index2)
{
    vector<string> replaced = {};
    for (int i = 0; i < index1; i++)
    {
        replaced.push_back(a[i]);
    }
    for (int i = 0; i < int(replaceBy.size()); i++)
    {
        replaced.push_back(replaceBy[i]);
    }
    for (int i = index2 + 1; i < int(a.size()); i++)
    {
        replaced.push_back(a[i]);
    }
    return replaced;
}
// returns a vector by replacing all occurences of param2 in param1 with param3
vector<int> replaceAll(vector<int> param1, int param2, int param3)
{
    vector<int> replaced = {};
    for (int i = 0; i < int(param1.size()); i++)
    {
        if (param1[i] == param2)
        {
            replaced.push_back(param3);
        }
        else
        {
            replaced.push_back(param1[i]);
        }
    }
    return replaced;
}
// returns a vector by replacing all occurences of param2 in param1 with param3
vector<char> replaceAll(vector<char> param1, char param2, char param3)
{
    vector<char> replaced = {};
    for (int i = 0; i < int(param1.size()); i++)
    {
        if (param1[i] == param2)
        {
            replaced.push_back(param3);
        }
        else
        {
            replaced.push_back(param1[i]);
        }
    }
    return replaced;
}
// returns a vector by replacing all occurences of param2 in param1 with param3
vector<string> replaceAll(vector<string> param1, string param2, string param3)
{
    vector<string> replaced = {};
    for (int i = 0; i < int(param1.size()); i++)
    {
        if (param1[i] == param2)
        {
            replaced.push_back(param3);
        }
        else
        {
            replaced.push_back(param1[i]);
        }
    }
    return replaced;
}
