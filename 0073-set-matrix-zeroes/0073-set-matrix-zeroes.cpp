class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<int> x, y;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j]==0)
                {
                    x.push_back(i);
                    y.push_back(j);
                }

            }

        }
    
    //row ko zero karte ha phle
    for(int i=0; i<x.size(); i++)
    {
        int index=x[i];
        for(int j=0;j<m; j++){
            matrix[index][j]=0;
        }
    }

    //column ko zero karte ha ab
    for(int i=0; i<y.size(); i++)
    {
        int index=y[i];
        for(int j=0;j<n; j++){
            matrix[j][index]=0;
        }
    }
    }
};



/* class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> setRows; 
        unordered_set<int> setColumns; 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    setRows.insert(i);
                    setColumns.insert(j);
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(setRows.count(i) > 0 || setColumns.count(j) > 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

 */