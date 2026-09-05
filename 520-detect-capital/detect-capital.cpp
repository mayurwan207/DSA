class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercase = 0;

        for (int i = 0; i < word.size(); i++) {
            if (isupper(word[i])) {
                uppercase++;
            }
        }

        if (uppercase == word.size()) {
            return true;
        }

        if (uppercase == 0) {
            return true;
        }

        if (uppercase == 1 && isupper(word[0])) {
            return true;
        }

        return false;
    }
};