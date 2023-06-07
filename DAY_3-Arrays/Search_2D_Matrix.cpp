int n = matrix.size();
int m = matrix[0].size();
int left = 0, right = m - 1, bottom = n - 1, top = 0;
int direction = 1;
while (left <= right && top <= bottom)
{
    if (direction == 1)
    {
        for (int i = left; i <= right; i++)
        {
            if (matrix[top][i] == target)
                return true;
        }
        direction = 2;
        top++;
    }

    else if (direction == 2)
    {
        for (int i = top; i <= bottom; i++)
            if (matrix[i][right] == target)
                return true;
        direction = 3;
        right--;
    }

    else if (direction == 3)
    {
        for (int i = right; i >= left; i--)
            if (matrix[bottom][i] == target)
                return true;
        direction = 4;
        bottom--;
    }

    else if (direction == 4)
    {
        for (int i = bottom; i >= top; i--)
            if (matrix[i][left] == target)
                return true;
        direction = 1;
        left++;
    }
}
return false;