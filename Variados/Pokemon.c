#include <stdio.h>
#include <math.h>
 
int main() {
    int l;
    scanf("%d", &l);
 
    int bs_hp, iv_hp, ev_hp;
    scanf("%d %d %d", &bs_hp, &iv_hp, &ev_hp);
 
    int bs_at, iv_at, ev_at;
    scanf("%d %d %d", &bs_at, &iv_at, &ev_at);
 
    int bs_df, iv_df, ev_df;
    scanf("%d %d %d", &bs_df, &iv_df, &ev_df);
 
    int bs_ep, iv_sp, ev_sp;
    scanf("%d %d %d", &bs_ep, &iv_sp, &ev_sp);
 

    int HP = ((iv_hp + bs_hp + sqrt(ev_hp) / 8 + 50) * l) / 50 + 10;
    int AT = ((iv_at + bs_at + sqrt(ev_at) / 8) * l) / 50 + 5;
    int DF = ((iv_df + bs_df + sqrt(ev_df) / 8) * l) / 50 + 5;
    int SP = ((iv_sp + bs_ep + sqrt(ev_sp) / 8) * l) / 50 + 5;
 
    printf("%d %d %d %d\n", HP, AT, DF, SP);
 
    return 0;
}
