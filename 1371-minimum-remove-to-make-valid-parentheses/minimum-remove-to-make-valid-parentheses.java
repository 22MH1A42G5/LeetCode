class Solution {
    public String minRemoveToMakeValid(String s) {
        int d = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                d++;
            } else if (s.charAt(i) == ')') {
                d--;
            }
            if (d < 0) {
                s = s.substring(0, i) + s.substring(i + 1);
                i--;
                d++;
            }
        }
        int i = s.length() - 1;
        while (d > 0) {
            if (s.charAt(i) == '(') {
                s = s.substring(0, i) + s.substring(i + 1);
                d--;
            }
            i--;
        }
        return s;
    }
}