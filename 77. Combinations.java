class Solution {
    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> answer = new ArrayList<>();

        List<Integer> current = new ArrayList<>();
        b(n , k , 1 , current , answer);

        return answer ;

    }

    private void b(int n , int k , int start, List<Integer>current , List<List<Integer>>result){
        if(current.size() == k ){
            result.add(new ArrayList<>(current));
            return ;
        }
        for(int i = start ; i<=n ; i++){
            current.add(i);
            b(n ,k , i+1 , current , result );
            current.remove(current.size()-1 );
        }

    }
}
