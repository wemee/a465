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
        for (j=0; j<n; j++) {
            if (farm[j] == '.') {
                if (farm_record[j] == 0){
                    scarecrow_count++;
                    if (j+1 < n){
                        farm_record[j+1] = 1;
                        farm_record[j] = 1;
                        if (j+2 < n) farm_record[j+2] = 1;
                    }
                    else {
                        farm_record[j] = 1;
                    }
                }
            }
        }
        
        printf("Case %d: %d\n",i+1 ,scarecrow_count);
        free(farm);
        free(farm_record);
    }
    return 0;
}
