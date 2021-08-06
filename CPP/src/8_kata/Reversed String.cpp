#include <iostream>

#include <string>
using namespace std;

string reverseString(string str)
{
    string tmp;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        tmp.push_back(str[i]);
    }
    return tmp;
}

int main(int argc, char const *argv[])
{
    cout << reverseString("hello") << endl;
    cout << reverseString("rat") << endl;
    cout << reverseString("alpha") << endl;
    cout << reverseString("codewars") << endl;
    cout << reverseString("football") << endl;
    cout << reverseString("translation") << endl;
    return 0;
}
