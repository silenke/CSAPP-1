#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 10

char *longestCommonPrefix(char **strs, int strsSize) { return NULL; }

int main() {

    int n;
    scanf("%d%c", &n);

    char *strs[n];
    for (int i = 0; i < n; i++) {
        strs[i] = (char *)malloc(MAXLINE);
        gets_s(strs[i], MAXLINE);
    }
    puts(longestCommonPrefix(strs, n));

    return 0;
}