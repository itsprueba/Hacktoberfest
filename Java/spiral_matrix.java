 public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> ans = new ArrayList<>();
        int m = matrix.length, n = matrix[0].length;
        int count = 0;
        int top = 0, bottom = n-1, left = 0, right = m-1;
        
        while(top <= right && left <= bottom){
            
            if(count == 0){
                for(int i = left; i<=bottom; i++){
                    ans.add(matrix[top][i]);
                }
                top++;
            }
            
            else if(count == 1){
                for(int j = top; j<= right; j++ ){
                    ans.add(matrix[j][bottom]);
                }
                bottom--;
            }
            
            else if(count == 2){
                for(int i= bottom ; i>=left; i-- ){
                    ans.add(matrix[right][i]);

                }
                right--;
            }
            else{
                for(int i = right ; i>= top; i-- ){
                    ans.add(matrix[i][left]);

                }
                left++;
            }
            
            count = (count+1)%4;
        }
        
        return ans;
        
    }
