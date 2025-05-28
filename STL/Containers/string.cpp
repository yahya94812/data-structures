#include <iostream>
#include <string>
using namespace std;

int main()
{
    // initialization
    string s1 = "hello";
    string s2("world");
    string s3 = s1; // copy

    // concatenation
    string s = s1 + " " + s2;
    s += "!";
    s.append("again");
    s.push_back('!');
    s.pop_back();

    // length and size
    int len = s.length();
    int size = s.size(); // exactly same
    s.empty();
    s.clear();

    // accessing char
    char c = s[0];
    char last = s[s.size() - 1]; // no bounds check
    last = s.at(s.size() - 1);

    // substring
    string sub = s.substr(0, 5); //(index, length)

    // find
    auto pos = s.find("world"); // return position of npos, std::string::npos. This is a special static member constant value that indicates "not found."

    // replace
    s.replace(6, 5, "universe"); //(index, length, string);

    // insert
    s.insert(5, ",");

    // erase
    s.erase(5, 1); // remove 1 char at index 5

    // compare
    if (s1 == s2)
    {

    } // for equal
    int cmp = s1.compare(s2); // for <0, 0 and >0

    return 0;
}