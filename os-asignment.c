#include <stdio.h>

int main() {
    int n, total = 0;
    float avg_wt, avg_tat;

    // Prompt the user to enter the number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int processId[n];
    int burstTime[n];
    int arrivalTime[n];
    int waitingTime[n];
    int turnaroundTime[n];

    // Input burst times and arrival times
    for (int i = 0; i < n; i++) {
        processId[i] = i + 1;
        printf("Enter Burst Time for Process P%d: ", processId[i]);
        scanf("%d", &burstTime[i]);

        // Validate and re-enter arrival time if it's 0
        do {
            printf("Enter Arrival Time for Process P%d: ", processId[i]);
            scanf("%d", &arrivalTime[i]);
            if (arrivalTime[i] == 0) {
                printf("Error: Arrival time cannot be 0. Please re-enter.\n");
            }
        } while (arrivalTime[i] == 0);
    }

    int time = 0; // Current time
    int remainingTime[n];

    for (int i = 0; i < n; i++) {
        remainingTime[i] = burstTime[i];
    }

    while (1) {
        int minTime = 9999; // A large initial value
        int shortest = -1;

        for (int i = 0; i < n; i++) {
            if (arrivalTime[i] <= time && remainingTime[i] < minTime && remainingTime[i] > 0) {
                minTime = remainingTime[i];
                shortest = i;
            }
        }

        if (shortest == -1) {
            // No valid process available to run
            time += 2; // Delay for queue checking
        } else {
            // Execute the shortest job for 1 unit of time
            remainingTime[shortest]--;
            time++;

            if (remainingTime[shortest] == 0) {
                // Process has finished execution
                turnaroundTime[shortest] = time - arrivalTime[shortest];
                waitingTime[shortest] = turnaroundTime[shortest] - burstTime[shortest];
            }
        }

        // Check if all processes have completed
        int done = 1;
        for (int i = 0; i < n; i++) {
            if (remainingTime[i] > 0) {
                done = 0;
                break;
            }
        }

        if (done == 1) {
            break;
        }
    }

    printf("Process    Arrival Time    Burst Time    Waiting Time    Turnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("P%d         %d               %d               %d               %d\n",
               processId[i], arrivalTime[i], burstTime[i], waitingTime[i], turnaroundTime[i]);
        avg_wt += waitingTime[i];
        avg_tat += turnaroundTime[i];
    }

    avg_wt /= n;
    avg_tat /= n;
    printf("Average Waiting Time = %f\n", avg_wt);
    printf("Average Turnaround Time = %f\n", avg_tat);

    return 0;
}
