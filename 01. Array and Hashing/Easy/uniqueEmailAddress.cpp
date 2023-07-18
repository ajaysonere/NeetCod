#include<iostream>
#include<vector>
#include<set>
using namespace std;

void isEmail(string str, set<string> &s)
{
    string local = "";
    for (int i = 0; i < str.size() && str[i] != '@'; i++)
    {
        if (str[i] == '+')
            break;
        if (str[i] == '.')
            continue;
        local += str[i];
    }
    local += str.substr(str.find('@'));
    s.insert(local);
}

int numUniqueEmails(vector<string> &emails)
{
    set<string> s;
    for (int i = 0; i < emails.size(); i++)
    {
        isEmail(emails[i], s);
    }
    return s.size();
}

int main ()
{
    vector<string> emails = {"a@leetcode.com","b@leetcode.com","c@leetcode.com"};
    int ans = numUniqueEmails(emails);
    cout << ans << "\n";
    return 0;
}