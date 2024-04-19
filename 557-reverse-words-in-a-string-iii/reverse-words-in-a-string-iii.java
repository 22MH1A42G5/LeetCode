class Solution {
    public String reverseWords(String s) {
        StringBuilder sbr = new StringBuilder(s);
        sbr.reverse();
        String[] arr=s.split(" ");
        String ans=new String();
        ans="";
        for(int i=0;i<arr.length;i++){
            StringBuilder sb=new StringBuilder(arr[i]);
            sb.reverse();
            if(i<arr.length-1)
            ans=ans+sb+" ";
            else
            ans=ans+sb;
            System.out.println(arr[i]);
        }
        return ans;
    }
}