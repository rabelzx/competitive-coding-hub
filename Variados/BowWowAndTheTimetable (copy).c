#include <stdio.h>
#include <string.h>

#define ll long long

int main() {
    char s[100];
    scanf("%s", s);
    ll n = strlen(s), cnt = 0;
    ll res = n / 2;
    if (n % 2 == 0) {
        printf("%lld", res);
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            cnt++;
        }
    }
    res += (cnt > 1);
    printf("%lld", res);
    return 0;
}

