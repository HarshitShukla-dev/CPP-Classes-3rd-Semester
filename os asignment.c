#include <stdio.h>

void sort(int a, int b, int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

}

int main(){
    int n;;
    scanf("%d %d", &n, &m);

    int a[n], b[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }

    sort(a, b, n);

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    printf("\n");

    for(int i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
}