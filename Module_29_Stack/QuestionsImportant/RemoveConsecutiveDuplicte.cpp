#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;
string RemoveDuplicate(string s)
{
    stack<char> st;
    st.push(s[0]);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != st.top())
            st.push(s[i]);
    }

    // now clear the string so that i can reuse it brother !!!!
    s = "";
    while (st.size() > 0)
    {
        s = s + st.top();
        st.pop();
    }
    // now reverse the string
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    string s  = "afkhfuwqauwioerjmwlkefhsaaaaaaaaaaaaaaaaerjkefjwherjqowripoewngjerhgoe";
    string k = RemoveDuplicate(s);
    cout<<k;

}