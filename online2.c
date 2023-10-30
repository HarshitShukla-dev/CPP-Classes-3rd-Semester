#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t mutex;  // Controls access to critical sections
sem_t wrt;    // Controls write access
int readCount = 0;  // Number of readers reading currently

void *reader(void *arg) {
    sem_wait(&mutex);   // Enter critical section to modify readCount
    readCount++;        // Increment the number of readers
    if (readCount == 1) {
        sem_wait(&wrt);  // If this is the first reader, wait for writers
    }
    sem_post(&mutex);   // Exit critical section

    // Reading...

    sem_wait(&mutex);   // Enter critical section to modify readCount
    readCount--;        // Decrement the number of readers
    if (readCount == 0) {
        sem_post(&wrt);  // If there are no readers, allow waiting writers
    }
    sem_post(&mutex);   // Exit critical section

    return NULL;
}

void *writer(void *arg) {
    sem_wait(&wrt);      // Wait for write access

    // Writing...

    sem_post(&wrt);      // Release write access

    return NULL;
}

int main() {
    // Initialize semaphores
    sem_init(&mutex, 0, 1);
    sem_init(&wrt, 0, 1);

    // Create threads for readers and writers
    pthread_t readers[5], writers[5];
    int i;

    for (i = 0; i < 5; i++) {
        pthread_create(&readers[i], NULL, reader, NULL);
        pthread_create(&writers[i], NULL, writer, NULL);
    }

    // Join threads
    for (i = 0; i < 5; i++) {
        pthread_join(readers[i], NULL);
        pthread_join(writers[i], NULL);
    }

    // Destroy semaphores
    sem_destroy(&mutex);
    sem_destroy(&wrt);

    return 0;
}