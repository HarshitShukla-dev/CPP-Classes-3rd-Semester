#include <stdio.h>

int main() {
    int arrival_time[10], burst_time[10], temp[10];
    int i, smallest, count = 0, time = 0, limit;
    double wait_time = 0, turnaround_time = 0, end;
    float average_waiting_time, average_turnaround_time;

    printf("Enter the Total Number of Processes: ");
    scanf("%d", &limit);
    printf("\nEnter Details of %d Processes\n", limit);

    for (i = 0; i < limit; i++) {
        printf("Process %d:\n", i + 1);

        // Check if the arrival time is zero and discard the process
        do {
            printf("Enter Arrival Time: ");
            scanf("%d", &arrival_time[i]);
            if (arrival_time[i] == 0) {
                printf("Processes with arrival time zero are discarded. Please enter a non-zero arrival time.\n");
            }
        } while (arrival_time[i] == 0);

        printf("Enter Burst Time: ");
        scanf("%d", &burst_time[i]);
        temp[i] = burst_time[i];
    }

    printf("\nP\tAT\tBT\n");

    while (count < limit) {
        smallest = 9;
        for (i = 0; i < limit; i++) {
            if (arrival_time[i] <= time && burst_time[i] < burst_time[smallest] && burst_time[i] > 0) {
                smallest = i;
            }
        }

        // Account for 2 time units to check and arrange the process
        time += 2;

        burst_time[smallest]--;
        if (burst_time[smallest] == 0) {
            count++;
            end = time;
            wait_time = wait_time + end - arrival_time[smallest] - temp[smallest];
            turnaround_time = turnaround_time + end - arrival_time[smallest];
        }
    }

    average_waiting_time = wait_time / limit;
    average_turnaround_time = turnaround_time / limit;

    for (i = 0; i < limit; i++) {
        printf("P%d\t%d\t%d\n", i + 1, arrival_time[i], temp[i]);
    }

    printf("\nAverage Waiting Time: %.2f\n", average_waiting_time);
    printf("Average Turnaround Time: %.2f\n", average_turnaround_time);

    // Print the total time taken by the processor
    printf("Total Time Taken: %d\n", time);

    return 0;
}
