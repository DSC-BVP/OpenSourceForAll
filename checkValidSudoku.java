// Hi i needed help with this problem most of the test cases are running correctly , only 30 test cases are failing out of 503
// 473 has worked properly , need assistance with the issue and please help me understand where i am wrong .
// I have added all test case that is failing at the end of the code

import java.util.HashMap;
class checkValidSudoku {
    public boolean isValidSudoku(char[][] board) {
        int m = board.length; // ---> Checked the size of Sudoku board in length
        int n = board[0].length; // ---> Checked the size of sudoku board in width
        // for(int a =0;a<3;a++){
        //     Hashmap<Integer,Integer>cell = new Hashmap<>();
        //     for(int b=a;b<a+3;b++){
        //         if cell.containsKey(board[a][b]){
        //             return false;
        //         }
        //     }
        // }
        for(int i=0;i<m;i++){ //---> Loop is running row wise
            HashMap<Character,Integer>row = new HashMap<>(); // ---> made a Hashmap for the row
            HashMap<Character,Integer>column = new HashMap<>(); // ---> made a Hashmap for the column
            for(int j = 0;j<n;j++){ //---> Loop is running column wise
                if ((row.containsKey(board[i][j]))&&((board[i][j]!='.'))){
                    return false;
                }
                else{
                    row.put(board[i][j],0);
                }
                if ((column.containsKey(board[j][i]))&&(board[j][i]!='.')){
                    return false;
                }
                else{
                    column.put(board[j][i],0);
                }

            }
            for(int a =i;a<3;a++){
                HashMap<Character,Integer>cell = new HashMap<>();
                for(int b=a;b<a+3;b++){
                    if ((cell.containsKey(board[a][b]))&&(board[a][b]!='.')){
                        return false;
                    }
                    else{
                        cell.put((board[a][b]),0);
                    }
                }
            }
        }
//        for(int k=0;k<n;k++){
//
//            for(int l=0;l<m;l++){
//                if ((column.containsKey(board[k][l]))&&(board[l][k]!='.')){
//                    return false;
//                }
//                else{
//                    column.put(board[k][l],0);
//                }
//            }
//        }
        return true;

    }
}




}

// Test case 1 --> Input: board =
//[["5","3",".",".","7",".",".",".","."]
//,["6",".",".","1","9","5",".",".","."]
//,[".","9","8",".",".",".",".","6","."]
//,["8",".",".",".","6",".",".",".","3"]
//,["4",".",".","8",".","3",".",".","1"]
//,["7",".",".",".","2",".",".",".","6"]
//,[".","6",".",".",".",".","2","8","."]
//,[".",".",".","4","1","9",".",".","5"]
//,[".",".",".",".","8",".",".","7","9"]]
//Output: true

// Test case 2 ---> Input: board =
//[["8","3",".",".","7",".",".",".","."]
//,["6",".",".","1","9","5",".",".","."]
//,[".","9","8",".",".",".",".","6","."]
//,["8",".",".",".","6",".",".",".","3"]
//,["4",".",".","8",".","3",".",".","1"]
//,["7",".",".",".","2",".",".",".","6"]
//,[".","6",".",".",".",".","2","8","."]
//,[".",".",".","4","1","9",".",".","5"]
//,[".",".",".",".","8",".",".","7","9"]]
//Output: false


// ---> Question is to check if the Sudoku board is valid or not
// Points to check
// Each row must contain the digits 1-9 without repetition.
//Each column must contain the digits 1-9 without repetition.
//Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.


// test case failing
//[[".",".",".",".","5",".",".","1","."],
// [".","4",".","3",".",".",".",".","."],
// [".",".",".",".",".","3",".",".","1"],
// ["8",".",".",".",".",".",".","2","."],
// [".",".","2",".","7",".",".",".","."],
// [".","1","5",".",".",".",".",".","."],
// [".",".",".",".",".","2",".",".","."],
// [".","2",".","9",".",".",".",".","."],
// [".",".","4",".",".",".",".",".","."]]