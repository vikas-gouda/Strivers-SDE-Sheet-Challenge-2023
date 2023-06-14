int calculateMinPatforms(int at[], int dt[], int n)
{ // Write your code here.
    sort(at, at + n);
    sort(dt, dt + n);
    int count = 1, j = 1, i = 0;
    while (j < n)
    {
        if (at[j] > dt[i])
            i++;
        else
            count++;
        j++;
    }
    return count;
}