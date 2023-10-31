#include <stdio.h>
#include <string.h>

int main() {
    int bt[20], at[10], n, i, j, temp, st[10], ft[10], wt[10], ta[10];
    int totwt = 0, totta = 0;
    double awt, ata;
    char pn[10][10], t[10];

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter process name, arrival time, and burst time for process %d: ", i + 1);
        scanf("%s%d%d", pn[i], &at[i], &bt[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (bt[i] < bt[j]) {
                temp = at[i];
                at[i] = at[j];
                at[j] = temp;
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
                strcpy(t, pn[i]);
                strcpy(pn[i], pn[j]);
                strcpy(pn[j], t);
            }
        }
    }

    printf("\nProcess\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");

    for (i = 0; i < n; i++) {
        if (i == 0)
            st[i] = at[i];
        else
            st[i] = ft[i - 1];
        wt[i] = st[i] - at[i];
        ft[i] = st[i] + bt[i];
        ta[i] = ft[i] - at[i];
        totwt += wt[i];
        totta += ta[i];

        printf("%s\t%5d\t\t%5d\t\t%5d\t\t%5d\n", pn[i], at[i], bt[i], wt[i], ta[i]);
    }

    awt = (double)totwt / n;
    ata = (double)totta / n;
    printf("\nAverage Waiting Time: %.2f\n", awt);
    printf("Average Turnaround Time: %.2f\n", ata);

    return 0;
}
