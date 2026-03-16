class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1 = word1.size();
        int s2 = word2.size();

        string res;
        int i = 0;
        int j = 0;
        while(i < s1 && j < s2) {
            res += word1[i];
            res += word2[j];

            i++;
            j++;
        }

        while (i < s1) {
            res += word1[i];
            i++;
        }

        while (j < s2) {
            res += word2[j];
            j++;
        }

        return res;
    }
};