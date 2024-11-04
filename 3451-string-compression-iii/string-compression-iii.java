class Solution {
    public String compressedString(String s) {
	    StringBuffer ans = new StringBuffer("");
	    StringBuffer str = new StringBuffer(s);
	    int i = 0 , j = 0;
	    while(j < s.length() && i < s.length()){
	        int cnt = 0;
	        while(str.charAt(i)==str.charAt(j) && j < s.length() && i < s.length()){
	            cnt++;
	            j++;
	            if(cnt==9){
	                ans.append(9);
	                ans.append(str.charAt(i));
	                i=j;
	                cnt=0;
	            }
	            if(j >= s.length())
	            break;
	        }
	        if(i < s.length()){
    	        ans.append(cnt);
    	        ans.append(str.charAt(i));
	        }
	        i=j;
	    }
        String ans1 = ans.toString();
        return ans1;
    }
}