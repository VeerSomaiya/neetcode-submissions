class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //check row wise
        for(int i=0;i<9;i++)
        {
            unordered_map<char,int> m;
            for(int j=0;j<9;j++)
            {
m[board[i][j]]++;
if(board[i][j]!='.'&&m[board[i][j]]>1)
return false;
            }
        }
        //check col wise
        for(int i=0;i<9;i++)
        {
            unordered_map<char,int> m;
            for(int j=0;j<9;j++)
            {
m[board[j][i]]++;
if(board[j][i]!='.'&&m[board[j][i]]>1)
return false;
            }
        }


    // 1st quad
    unordered_map<char,int> m;
    for(int i=0;i<=2;i++)
    {
        
        for(int j=0;j<=2;j++){
m[board[i][j]]++;
if(board[i][j]!='.'&&m[board[i][j]]>1)
return false;
        }
    }
m.clear();

  for(int i=0;i<=2;i++)
    {
    
        for(int j=3;j<=5;j++){
m[board[i][j]]++;
if(board[i][j]!='.'&&m[board[i][j]]>1)
return false;
        }
    }
m.clear();
      for(int i=0;i<=2;i++)
    {
        for(int j=6;j<=8;j++){
m[board[i][j]]++;
if(board[i][j]!='.'&&m[board[i][j]]>1)
return false;
        }
    }
    m.clear();

      for(int i=3;i<=5;i++)
    {
        for(int j=0;j<=2;j++){
m[board[i][j]]++;
if(board[i][j]!='.'&&m[board[i][j]]>1)
return false;
        }
    }
m.clear();

    for(int i=3;i<=5;i++)
    {
        for(int j=3;j<=5;j++){
m[board[i][j]]++;
if(board[i][j]!='.'&&m[board[i][j]]>1)
return false;
        }
    }
m.clear();
        for(int i=3;i<=5;i++)
    {
        for(int j=6;j<=8;j++){
m[board[i][j]]++;
if(board[i][j]!='.'&&m[board[i][j]]>1)
return false;
        }
    }
m.clear();
        for(int i=6;i<=8;i++)
    {
        for(int j=0;j<=2;j++){
m[board[i][j]]++;
if(board[i][j]!='.'&&m[board[i][j]]>1)
return false;
        }
    }
    m.clear();

  for(int i=6;i<=8;i++)
    {
        for(int j=3;j<=5;j++){
m[board[i][j]]++;
if(board[i][j]!='.'&&m[board[i][j]]>1)
return false;
        }
    }

m.clear();
      for(int i=6;i<=8;i++)
    {
        for(int j=6;j<=8;j++){
m[board[i][j]]++;
if(board[i][j]!='.'&&m[board[i][j]]>1)
return false;
        }
    }

return true;

    }
};
