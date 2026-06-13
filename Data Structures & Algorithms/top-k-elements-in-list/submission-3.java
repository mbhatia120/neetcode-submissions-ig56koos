class Solution {
    class Pair{
        public int x;
        public int y;
        Pair(int x, int y){
            this.x = x;
            this.y = y;
        }
    }
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer,Integer> map = new HashMap<>();

        for(int num: nums){
            map.put(num , 1 + map.getOrDefault(num, 0));
        }
        PriorityQueue<Pair> pq = new PriorityQueue<>((a,b) ->{
            if(a.y == b.y){
                return 0;
            }
            if(a.y < b.y){
                return 1;
            }
            return -1;
        });

        for(Integer key : map.keySet()){
            pq.offer(new Pair(key, map.get(key)));
        }

        int[] result = new int[k];
        for(int i = 0 ; i< k ; i++){
            result[i] = pq.poll().x;
        }

        return result;
    }
}
