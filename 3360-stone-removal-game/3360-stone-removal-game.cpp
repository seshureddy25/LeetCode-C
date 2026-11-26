
class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10;

        while (n >= remove) {
            n -= remove;
            remove--;

            if (n < remove)
                return true;

            n -= remove;
            remove--;
        }

        return false;
    }
};
