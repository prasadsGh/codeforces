
  int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 'B')
        {
            break;
        }
    }
    if (j = 0; j < n; j++)
    {
        if (a[j] == 'B')
        {
            break;
        }
    }
    flag = 0;
    if (i > j)
    {
        int temp = i;
        i = j;
        j = temp;
        flag = 1;
    }
    for (int k = i; k < n; k++)
    {
        if (a[k] == 'W' && b[k] == 'W')
            flag = 1;
    }
    track[i][j]=1;
    if (flag)
    {
        while (true)
        {
            if(vla)
            if(mat[i-1][j]=='B' && track[i-1][j]==0)
            {

            }
        }
    }
}
