

// Back tracking says
// 1 prunning :) cutting off the unwanted branch where we dont get the answer !!
// 2 reversal the change !!!

#include <iostream>
#include <unordered_set>

using namespace std;

void permutation(string &str, int i)
{
    if (i == str.size() - 1)
    {
        cout << str << " \n";
        return;
    }

    unordered_set<char> s;
    for (int idx = i; idx < str.size(); idx++)
    {
        if (s.count(str[idx]))
            continue;
        s.insert(str[idx]);
        swap(str[idx], str[i]);
        permutation(str, i + 1);
        swap(str[idx], str[i]);
    }
}
int main()
{
    string str = "abc";
    permutation(str,0);
    return 0 ;
}