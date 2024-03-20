#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    int maxNum[3], num;
    for (int i=0; i<tc; i++){
        maxNum[0]=0; maxNum[1]=0; maxNum[2]=0;
        for (int j=0; j<10; j++){
            scanf("%d", &num);
            for (int k=0; k<3; k++){
                if (maxNum[k]<num){
                    for (int l=2; l>k; l--)
                        maxNum[l] = maxNum[l-1];
                    maxNum[k]=num;
                    break;
                }
            }
        }
        printf("%d\n", maxNum[2]);
    }

    return 0;
}