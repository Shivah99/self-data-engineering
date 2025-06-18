// Simple ETL example in C: Reads and prints CSV data
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("data/sample_trending_data.csv", "r"); // fixed path
    if (!file) {
        printf("Could not open data/sample_trending_data.csv\n");
        return 1;
    }
    char line[1024];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line); // Print each row (simulate ETL)
    }
    fclose(file);
    return 0;
}
