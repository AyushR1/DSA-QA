# Binary Search

```cpp

```

# Binary Search In 2D matrix

Approach ➖

Simple binary search considering 2d matrix as single sorted list

**col size =mat.size row size=mat[0].size** 

last elem r*c-1

mid i

```cpp
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int col = matrix.size();
        int row = matrix[0].size();
        int l = 0, r = col * row - 1;
        while (l < r){
            int mid = (l + r - 1) >> 1;
          
            if (matrix[mid / row][mid % row] == target)
                 return true;
     
            else if (matrix[mid / row][mid % row] < target)
                l = mid + 1;
            else 
                r = mid;
        }
        
        if (matrix[0][0] == target || matrix[col-1][row-1]==target)
            return true;
            
            return false;
    }
```