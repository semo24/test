#include <stdio.h>
int coin[100];
int count=0;
void coinSum(int start, int targetMoney, int sum){
    if (!coin[start]){
        coinSum(start-1, targetMoney, sum);
        return;
    }
    for (int i=0; ;i++){
        if (sum==targetMoney) count++;
        if (sum>targetMoney) return;
        sum += coin[start]*i;
        coinSum(start-1, targetMoney, sum);
    }
}
int main()
{
    int coinType, targetMoney, money, count;
    scanf("%d %d", &coinType, &targetMoney);
    for (int i=0; i<coinType; i++){
        scanf("%d", &coin[i]);
    }
    coinSum(coinType, targetMoney, 0);
    printf("%d", count);
    return 0;
}