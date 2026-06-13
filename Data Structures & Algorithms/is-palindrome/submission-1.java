class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder sb = new StringBuilder();

        for(int i =0 ;i<s.length() ; i++){
            char temp = s.charAt(i);
            if((temp>= 'a' && temp<='z')  || (temp>= 'A' && temp<='Z') ||  (temp>= '0' && temp<='9') ){
                sb.append(temp);
            }
        }

        String result = sb.toString().toLowerCase();

        int l =0, r= result.length()-1 ;
        while(l<r){
            if(result.charAt(l) == result.charAt(r)){
                l++;
                r--;
            }
            else{
                return false;
            }
        }
        return true;
    }
}
