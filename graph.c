#include <stdio.h>
#include "graph.h"

void printGraph(const int graph[MAX_VERTICES][MAX_VERTICES], const int vertices) {
    printf("Graph adjacency matrix:\n");
    for (int i = 0; i < vertices; ++i) {
        for (int j = 0; j < vertices; ++j) {
            printf("%d ", graph[i][j]);
        }
        putchar('\n');
    }
}

// Example function for adding an edge (undirected graph)
void addEdge(int graph[MAX_VERTICES][MAX_VERTICES], int src, int dest) {
    graph[src][dest] = 1;
    graph[dest][src] = 1; // For undirected graph
}
