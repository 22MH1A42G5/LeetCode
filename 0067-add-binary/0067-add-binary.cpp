class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1;
        string str = "";
        bool carry = false;
        bool b1 = false;

        while (i >= 0 || j >= 0) {
            string st = "";
            if (i >= 0) {
                st += a[i];
                i--;
            }
            if (j >= 0) {
                st += b[j];
                j--;
            }

            if (st.size() == 2) {
                if (st[0] == '1' && st[1] == '1') {
                    
                    if(carry){
                        b1=true;
                        carry=true;
                    }
                    else{
                        b1 = false;
                    carry = true;
                    }
                } else if (st[0] == '1' && st[1] == '0') {
                    if (carry) {
                        b1 = false;
                        carry = true;
                    } else {
                        b1 = true;
                    }
                } else if (st[0] == '0' && st[1] == '1') {
                    if (carry) {
                        b1 = false;
                        carry = true;
                    } else {
                        b1 = true;
                    }
                } else if (st[0] == '0' && st[1] == '0') {
                    if (carry) {
                        b1 = true;
                        carry = false;
                    } else {
                        b1 = false;
                    }
                }
            } else if (st.size() == 1) {
                if (st[0] == '1') {
                    if (carry) {
                        b1 = false;
                        carry = true;
                    } else {
                        b1 = true;
                    }
                } else if (st[0] == '0') {
                    if (carry) {
                        b1 = true;
                        carry = false;
                    } else {
                        b1 = false;
                    }
                }
            }
            if (b1 == true) {
                str = "1" + str;
            } else {
                str = "0" + str;
            }
        }
        if (carry) {
            str = "1" + str;
        }
        return str;
    }
};