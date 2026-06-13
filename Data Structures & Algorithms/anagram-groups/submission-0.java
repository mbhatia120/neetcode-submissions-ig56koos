class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> map = new HashMap<>();
        for(String str : strs){
            char[] arr = str.toCharArray();
            Arrays.sort(arr);
            String key = new String(arr);
            map.computeIfAbsent(key, k-> new ArrayList<>()).add(str);
        }
        List<List<String> > result = new ArrayList<>();
        for(List<String> s : map.values()){
            result.add(s);
        }
        return result;
    }
}
