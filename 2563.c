#include <stdio.h>

#include <math.h>



int main()

{

    int n, i, s = 0;

    scanf("%d", &n);

    char a[n+1];

    scanf("%s", &a[0]);

    for (i = 0; i < n; i++){

        if (a[i] == '1') {

            s += pow(2, n-i-1);

        }

    }

    printf("%d\n", s);

    return 0;

}
