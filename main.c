#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* p = fopen("mat.txt", "r");
    if(p==NULL)
    {
        return 0;
    }
    int m, n, x,y;
    fscanf(p,"%d", &m);//muchii
    fscanf(p,"%d", &n);//noduri

    int** mat = (int**)calloc(n+1, sizeof(int*));
    for(int i =1; i<=n ;i++)
    {
        mat[i] = (int*)calloc(n+1, sizeof(int));
    }

    for(int i=1; i<=m;i++)
    {
        fscanf(p,"%d-%d", &x, &y);
        mat[x][y] = 1;
        //mat[y][x] = 1;
    }

    fclose(p);

    for(int i = 1; i<=n; i++){
        for(int j=1; j<= n; j++)
        {
            printf("%d ", mat[i][j]);

        }
        printf("\n");
    }

    return 0;
}
