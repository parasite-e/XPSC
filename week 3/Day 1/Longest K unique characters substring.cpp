#include<bits/stdc++.h>

using namespace std;

int longestKSubstr(string s, int k) {
    // your code here

    int i = 0, j= 0, n = s.size(), ans = -1, unq = 0;
    int freq[26] = {0};

    while(j < n)
    {
        char c = s[j];
        if(freq[c- 'a'] == 0) unq++;
        freq[c- 'a']++;

        if(unq > k)
        {
            while(unq > k)
            {
                char leftC = s[i];
                freq[leftC - 'a']--;

                if(freq[leftC - 'a'] == 0) unq--;

                i++;
            }

        }

        if(unq == k)
        {
            ans = max(ans, j-i+1);
        }
        j++;
    }
    return ans;

    }

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;

    cout << longestKSubstr(s, k);
}
