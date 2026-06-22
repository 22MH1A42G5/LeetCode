class Solution {
    public int maxNumberOfBalloons(String text) {
        Map<Character, Integer> mpp = new HashMap<>();
        for(int i = 0; i < text.length(); i++) {
            mpp.put(text.charAt(i),mpp.getOrDefault(text.charAt(i),0) + 1);
        }
        String str = "balon";
        int ans = Integer.MAX_VALUE;
        for(int i = 0; i < str.length(); i++) {
            int cnt;
            if(i == 2 || i == 3)
                cnt = mpp.getOrDefault(str.charAt(i), 0)/2;
            else
                cnt = mpp.getOrDefault(str.charAt(i), 0);
            ans = Math.min(cnt,ans);
        }
        return ans;
    }
}