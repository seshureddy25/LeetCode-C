int orangesRotting(int** grid, int gridSize, int* gridColSize)
{
    int rows = gridSize;
    int cols = gridColSize[0];
    int fresh = 0;
    int minutes = 0;
    int *temp = malloc(rows * cols * sizeof(int));
    if(temp == NULL)
        return -1;
    // Count fresh oranges
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(grid[i][j] == 1)
                fresh++;
        }
    }
    while(fresh > 0)
    {
        // Take a snapshot of the current grid
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                temp[i * cols + j] = grid[i][j];
            }
        }

        int changed = 0;

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                if(temp[i * cols + j] == 2)
                {
                    // Right
                    if(j + 1 < cols && grid[i][j+1] == 1)
                    {
                        grid[i][j+1] = 2;
                        fresh--;
                        changed = 1;
                    }

                    // Left
                    if(j - 1 >= 0 && grid[i][j-1] == 1)
                    {
                        grid[i][j-1] = 2;
                        fresh--;
                        changed = 1;
                    }

                    // Down
                    if(i + 1 < rows && grid[i+1][j] == 1)
                    {
                        grid[i+1][j] = 2;
                        fresh--;
                        changed = 1;
                    }

                    // Up
                    if(i - 1 >= 0 && grid[i-1][j] == 1)
                    {
                        grid[i-1][j] = 2;
                        fresh--;
                        changed = 1;
                    }
                }
            }
        }
        if(changed == 0)
            break;
        minutes++;
    }
    free(temp);
    return fresh == 0 ? minutes : -1;
}