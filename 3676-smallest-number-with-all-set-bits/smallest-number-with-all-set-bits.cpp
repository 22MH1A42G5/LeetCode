class Solution {
public:
    int binaryToDecimal(string& str) {
        int n = 0;
        for (char ch : str) {
            n <<= 1;
            if (ch == '1') {
                n += 1;
            }
        }
        return n;
    }
    int smallestNumber(int n) {
        string s = "";
        while(n > 0){
            s += "1";
            n >>= 1;
        }
        return binaryToDecimal(s);
    }
};