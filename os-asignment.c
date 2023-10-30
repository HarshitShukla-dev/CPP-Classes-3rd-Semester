#include <stdio.h>

int main() {
    int n, total = 0;
    float avg_wt, avg_tat;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int process[n][5]; // Array to store Process Id, Arrival Time, Burst Time, Waiting Time, and Turnaround Time

    // User Input Arrival Time and Burst Time, and alloting Process Id.
    for (int i = 0; i < n; i++) {
        process[i][0] = i + 1; // Process Id
        printf("Enter Arrival Time for P%d: ", i + 1);
        scanf("%d", &process[i][1]); // Arrival Time
        printf("Enter Burst Time for P%d: ", i + 1);
        scanf("%d", &process[i][2]); // Burst Time
        process[i][3] = 0; // Waiting Time
        process[i][4] = 0; // Turnaround Time
        total += process[i][2]; // Calculate the total burst time
    }

    int currentTime = 0;

    while (currentTime < total) {
        int shortestBurst = 9999; // Initialize to a large value
        int shortestIndex = -1;

        // Find the process with the shortest remaining burst time among the arriving processes
        for (int i = 0; i < n; i++) {
            if (process[i][1] <= currentTime && process[i][2] < shortestBurst && process[i][2] > 0) {
                shortestBurst = process[i][2];
                shortestIndex = i;
            }
        }

        if (shortestIndex == -1) {
            currentTime++;
        } else {
            // Execute the process with the shortest burst time
            process[shortestIndex][2]--;
            currentTime++;

            // Update waiting time for other processes
            for (int i = 0; i < n; i++) {
                if (i != shortestIndex && process[i][1] <= currentTime && process[i][2] > 0) {
                    process[i][3]++;
                }
            }

            // Check if the process has completed
            if (process[shortestIndex][2] == 0) {
                process[shortestIndex][4] = currentTime - process[shortestIndex][1];
            }
        }
    }

    // Calculate and print turnaround time for each process
    printf("P   AT   BT   WT   TAT\n");
    for (int i = 0; i < n; i++) {
        printf("P%d   %d   %d   %d   %d\n", process[i][0], process[i][1], process[i][2], process[i][3], process[i][4]);
    }

    // Calculate and print average waiting time and average turnaround time
    for (int i = 0; i < n; i++) {
        avg_wt += process[i][3];
        avg_tat += process[i][4];
    }
    avg_wt /= n;
    avg_tat /= n;

    printf("Average Waiting Time= %f\n", avg_wt);
    printf("Average Turnaround Time= %f\n", avg_tat);

    return 0;
}
