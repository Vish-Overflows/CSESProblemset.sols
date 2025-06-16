//You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
//Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
#include <iostream>
using namespace std;
int main() 
{
    string s;
    cin >> s;
    int max_len = 1, curr_len = 1;
    for (int i = 1; i < s.size(); ++i) 
    {
        if (s[i] == s[i - 1])
            ++curr_len;
        else
            curr_len = 1;
        if (curr_len > max_len)
            max_len = curr_len;
    }
    cout << max_len << endl;
    return 0;
}
