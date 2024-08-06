//Neighbor Sum
class neighborSum {
public:

    vector<vector<int>> grid;   int n;

    neighborSum(vector<vector<int>>& grid) {
        this->grid = grid;
        this->n = grid.size();
    }
    
    int adjacentSum(int value) {
        int row = 0, col = 0;
        bool flag = false;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==value){
                    row = i; col=j; 
                    flag = true;
                    break;
                }
            }
            if(flag)    break;
        }

        int sum=0;
        if(row-1>=0)    sum += grid[row-1][col];
        if(col-1>=0)    sum += grid[row][col-1];
        if(row+1<=(n-1))    sum += grid[row+1][col];
        if(col+1<=(n-1))    sum += grid[row][col+1];

        return sum;
    }
    
    int diagonalSum(int value) {
        int row = 0, col = 0;
        bool flag = false;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==value){
                    row = i; col=j; 
                    flag = true;
                    break;
                }
            }
            if(flag)    break;
        }

        int sum=0;
        if(row-1>=0 && col-1>=0)    sum += grid[row-1][col-1];
        if(row-1>=0 && col+1<=(n-1))    sum += grid[row-1][col+1];
        if(row+1<=(n-1) && col-1>=0)    sum += grid[row+1][col-1];
        if(col+1<=(n-1) && row+1<=(n-1))    sum += grid[row+1][col+1];

        return sum;
    }
};