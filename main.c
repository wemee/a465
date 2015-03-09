#include "stdio.h"
#include "stdlib.h"

int main(){
    int t, n, i, j, scarecrow_count;
    char *farm;
    char *farm_record;
    
    scanf("%d", &t);
    for (i=0; i<t; i++) {
        scanf("%d", &n);
        farm = malloc(n*sizeof(char)+1);
        scanf("%s", farm);
        farm_record = calloc(n, sizeof(char));
        
        scarecrow_count = 0;
        for (j=0; j<n-2; j++)
            if (farm[j]=='.' && farm_record[j]==0){
                scarecrow_count++;
                farm_record[j+1] = 1;
                farm_record[j+2] = 1;
            }
        
        
        if (farm[n-2]=='.' && farm_record[n-2]==0){
            scarecrow_count++;
            farm_record[j+1] = 1;
        }
        
        if (farm[n-1]=='.' && farm_record[n-1]==0)
            scarecrow_count++;
        
        printf("Case %d: %d\n",i+1 ,scarecrow_count);
        free(farm);
        free(farm_record);
    }
    return 0;
}
