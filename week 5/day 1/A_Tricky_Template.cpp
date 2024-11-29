#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char a[21], b[21], c[21];
        scanf("%s%s%s", a, b, c);

        int valid = 1;

  for(int i=0;i<n;i++){


  if(c[i]!=b[i] && c[i]!=a[i]){
    valid=0;
    break;
  }

  }

        if (valid==0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    }
    return 0;
}