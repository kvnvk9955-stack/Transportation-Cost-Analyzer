

# Transportation Cost Analyzer

## Overview

The Transportation Cost Analyzer is a project developed as part of the Design and Analysis of Algorithms (DAA) course. It computes the minimum travel cost between all pairs of locations in a transportation network using the Floyd–Warshall Algorithm.

The system takes a cost matrix as input and transforms it into an optimized matrix representing the cheapest possible routes, including cases where indirect paths are more efficient than direct ones.

---

## Objectives

* Automate route cost analysis in transportation networks
* Compute all-pairs shortest paths (APSP) efficiently
* Demonstrate the use of dynamic programming
* Provide both matrix-based and user-friendly outputs

---

## Key Concepts Used

* Graph Representation (Nodes and Edges)
* Cost Matrix
* Dynamic Programming
* Floyd–Warshall Algorithm
* All-Pairs Shortest Path (APSP)

---

## How It Works

### Input

* Number of locations (n)
* Cost matrix of size n × n
* INF represents no direct route

### Processing

The algorithm updates the matrix using:

```
dist[i][j] = min(dist[i][j], dist[i][k] + dist[i][j])
```

It checks whether going through an intermediate node reduces the travel cost.

### Output

* Optimized cost matrix
* Readable route summary (Location → Location cost)

---

## Algorithm Used: Floyd–Warshall

### Why Floyd–Warshall?

* Computes shortest paths between all pairs of nodes
* Works directly on a cost matrix
* Handles dense graphs efficiently
* Guarantees an optimal solution

### Time Complexity

```
O(n^3)
```

---

## System Architecture

### Input Module

* Reads number of locations
* Accepts cost matrix
* Validates input

### Processing Module

* Implements the Floyd–Warshall algorithm
* Updates matrix iteratively

### Output Module

* Displays optimized matrix
* Prints readable route costs
* Indicates “No route available” where applicable

---

## Example Use Case

If:

* A → C has no direct route
* A → B and B → C are cheaper

Then:

```
Cost(A → C) = Cost(A → B) + Cost(B → C)
```

---

## Results

* The algorithm progressively improves the matrix
* Considers both direct and indirect paths
* Produces a final matrix with minimum travel costs

---

## Advantages

* Efficient for moderate-sized networks
* Works with incomplete route data
* Ensures globally optimal results
* Simple to implement

---

## Limitations

* Does not display the actual path, only cost
* No interactive route query feature
* Not optimized for very large datasets

---

## Future Enhancements

* Path reconstruction to show actual routes
* Search feature for specific source–destination queries
* Graphical user interface
* Integration with real-time data

---

## Team Members

* Nukanaboina Sreehari
* Kundheti Venkata Kalyan
* Aarth Goyal
* Kolli Venkata Naga Vamsi Krishna
* Abhinav Kumar

---

## Institution

SRM University – AP
Department of Computer Science and Engineering

---

## References

* GeeksforGeeks – Floyd Warshall Algorithm
* Programiz – Floyd Warshall Algorithm

---
