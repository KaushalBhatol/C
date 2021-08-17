 #include <stdio.h>

int main()
{
    int i, n;
    printf("How much arrays you want to alocate : ");
    scanf("%d", &n);
    int stor[n];
    for (int i = 0; i < n; i++)
    {
        printf("array store[%d] = ", i);
        scanf("%d", &stor[i]);
    }
    printf("\narrays are : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", stor[i]);
    }
    printf("\nReverse array is : ");
    for ( i = 0; i < n; i++)
    {
        int j = n-1-i;
        printf("%d ", stor[j]);
    }
    
    
    
    
    return 0;
}
