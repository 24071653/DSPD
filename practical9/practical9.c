#include <stdio.h>

#define SIZE 7

int main() {
    int hashTable[SIZE];
    int keys[SIZE];
    int n, i, index;

    // Initialize hash table with -1 (empty)
    for (i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    printf("Enter number of keys: ");
    scanf("%d", &n);

    printf("Enter %d keys:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &keys[i]);

    // Insert keys using hash function and linear probing
    for (i = 0; i < n; i++) {
        index = keys[i] % SIZE;

        // Linear probing if collision occurs
        while (hashTable[index] != -1) {
            index = (index + 1) % SIZE;
        }

        hashTable[index] = keys[i];
    }

    // Display final hash table
    printf("\nFinal Hash Table:\n");
    for (i = 0; i < SIZE; i++)
        printf("Slot %d --> %d\n", i, hashTable[i]);

    return 0;
}

