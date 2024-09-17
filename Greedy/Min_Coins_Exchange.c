#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)b - *(int*)a);
}

int minCoinSum(int coins[], int m, int sum){
    qsort(coins,m,sizeof(int),compare);
    
    int count = 0;
    
    for(int i=0; i<m; i++)
    {
        if(sum == 0){
            break;
        }
        
        while(sum >= coins[i]){
            sum -= coins[i];
            count++;
        }
    }
    
    

    
    if(sum != 0) return -1;
    
    return count;
    
}

int main()
{
    int n,sum;
    
    scanf("%d",&n);
    
    int* coins = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d",&coins[i]);
    }
    
    scanf("%d",&sum);
    
    int result = minCoinSum(coins, n, sum);
    
    if(result == -1){
        printf("No\n");
    }
    
    else{
        printf("%d",result);
    }
    free(coins);
    return 0;
}
