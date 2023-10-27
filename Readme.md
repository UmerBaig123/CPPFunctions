# cppFunctions

As c++ does not have a lot of built in functions
I have made this project to provide users with basic string and vector manipulation functions.

## Usage/Examples

Be sure to clone this files in the same folder as your project or copy paste them and use them as follows

```c++
#include "stringManipulation.h"
#include "vectorManipulation.h"

int main(){
    string a , b , c;
    cin >> a >> b >> c;
    replaceAll(a,b,c);
}
```

## Functions

### String Functions

#### find()

Takes two returns a vector <vector<int>> type that has sets of all starting and ending indexes of second param inside first param.

```c++
vector <vector<int>> indexes = find("abcdab","ab");
```

This will return a vector: {{0,1},{4,5}}

#### replace()

Takes four parameters i.e. string param1,string param2, int index1, int index2 and replaces the index1-index2 including index1 and 2 of first param with second param and returns it.

```c++
cout<<replace("abcdefghi","HELLOWORLD",2,4);
```

This will print "abHELLOWORLDfghi"

#### replaceAll()

Takes three parameters string param1,string param2,string param3 and replaces all occurences of second param in first param with third param and returns it

```c++
cout<<replaceAll("athisbthiscthis","this","replaced");
```

This will print "areplacedbreplacedcreplaced"

#### reverse()

Takes a parameter string a, and returns a reversed version of a.

```c++
cout<<reverse("reverse");
```

This will print "esrever".

#### cut()

Takes three parameters string param1, int index1, int index2 and cuts first param from index1-index2 and returns the string.

```c++
cout<<cut("012345",1,3);
```

This will print "045".

#### cutAll()

Takes two parameters string param1, string param2 and cuts all occurences of param2 in param1 and returns it.

```c++
cout<<cutAll("Hi my name is Umer"," ");
```

This will print "HimynameisUmer"

#### substring()

Takes three parameters string param1,int index1,int index2 and returns a substring of param1 index1-index2 inclusive

```c++
cout<<substring("Hello world!",1,5);
```

This will print "ello "

#### toUpperCase()

Takes a parameter string param and returns uppercased version of param.

```c++
cout<<toUpperCase("Hello world!");
```

This will print "HELLO WORLD!"

#### toLowerCase()

Takes a parameter string param and returns lowerCased version of param.

```c++
cout<<toLowerCase("HeLLO wOrLd!");
```

This will print "hello world!"

### Vector Functions

#### sum()

Returns the greatest of all elements in a vector <int> type

```c++
cout<<sum({1,2,3,4,5});
```

This will print 15

#### greatest()

Returns the greatest of all elements in a vector <int> type

```c++
cout<<greatest({1,2,3,4,5});
```

This will print 5

#### minimum()

Returns the minimum of all elements in a vector <int> type

```c++
cout<<minimum({1,2,3,4,5});
```

This will print 1

#### minimumIndex()

Returns the index of the smallest element in a vector <int> type

```c++
cout<<minimumIndex({1,2,3,4,5});
```

This will print 0

#### average()

Returns the average of all elements in a vector <int> type

```c++
cout<<average({1,2,3,4,5});
```

This will print 3

#### occurences()

Returns the vector <int> of all the indexes of the second parameter in the first parameter

```c++
vector <int> occ = occurences({1,2,3,4,5},3);
```

This will return a vector: {2}

#### reverse()

Returns the reversed version of a vector of any type

```c++
vector <int> reversed = reverse({1,2,3,4,5});
```

This will return a vector: {5,4,3,2,1}
<<<<<<< HEAD

```c++
vector <string> reversed = reverse({"Hello","World","!"});
```

=======
```c++
vector <string> reversed = reverse({"Hello","World","!"});
```
>>>>>>> 004e77dc757d9ac2953d11cc6985d9d0a846f2f6
This will return a vector: {"!","World","Hello"}

#### cut()

Returns a vector of any type with the elements exclusive of from index1-index2

```c++
vector <int> cutted = cut({1,2,3,4,5},1,3);
```

This will return a vector: {1,4,5}

#### removeAll()

Returns a vector of anytime exclusive of all occurences of the second parameter in the first parameter

```c++
vector <int> removed = removeAll({1,3,2,3,4,3,5,3},3);
```

This will return a vector: {1,2,4,5}

#### sort()

Returns a sorted vector of any type in ascending order

```c++
vector <int> sorted = sort({1,3,2,3,4,3,5,3});
```

This will return a vector: {1,2,3,3,3,3,4,5}

```c++
vector <string> sorted = sort({"AAC","ABA","AAB","AAA"});
```

This will return a vector: {"AAA","AAB","AAC","ABA"}

#### replace()

Returns a vector after replacing index1-index2 of param1 with param2

```c++
vector <int> replaced = replace({1,2,3,4,5},{0,0,0},1,3);
```

This will return a vector: {1,0,0,0,5}

#### replaceAll()

Return a vector from param1 with all occurences of param2 replaced with param3

```c++
vector <int> replaced = replaceAll({1,3,2,3,4,3,5,3},3,0);
```

This will return a vector: {1,0,2,0,4,0,5,0}

