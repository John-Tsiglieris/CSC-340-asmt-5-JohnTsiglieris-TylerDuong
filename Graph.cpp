#include "Graph.h"
#include "Product.h"


// Constructor
template <typename T>
Graph<T>::Graph(int vertices, bool directed)
    : V(vertices), directed(directed) {
    adjList.resize(V);
}

// Add an edge
template <typename T>
void Graph<T>::addEdge(int u, int v, T weight) {
    if (u != v) { // Avoid self-loops
        adjList[u].append({v, weight});
        if (!directed) {
            adjList[v].append({u, weight});
        }
    } else {
        cout << "Self-loops are not allowed." << endl;
    }
}

// Get number of nodes
template <typename T>
int Graph<T>::getNumVertices() const{
	return V;
}

/*
// Print the adjacency list
template <typename T>
void Graph<T>::printGraph() const {
    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << ": ";
        for (const auto& neighbor : adjList[i]) {
            cout << "(" << neighbor.first << ", " << neighbor.second << ") ";
        }
        cout << endl;
    }
}
*/
template <typename T>
void Graph<T>::printGraph() const {
    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << ": ";
        for (const auto& neighbor : adjList[i].toVector()) {
            cout << "(" << neighbor.first << ", " << neighbor.second << ") ";
        }
        cout << endl;
    }
}

// Get neighbors of a vertex
template <typename T>
const LinkedBag<pair<int, T>>& Graph<T>::getNeighbors(int vertex) const {
    return adjList[vertex];
}


// DFS Traversal (Recursive approach)
template <typename T>
void Graph<T>::DFT(int start, const LinkedBag<pair<int, Product>>& products) const {
    vector<bool> visited(V, false); // To keep track of visited vertices
    vector<T> productsList = products.toVector(); // Convert LinkedBag to vector for easier access
    DFTRecursive(start, visited, productsList);
    cout << endl;
}

// Utility function for DFS (Recursive)
template <typename T>
void Graph<T>::DFTRecursive(int v, vector<bool>& visited, const vector<Product>& products) const {
    visited[v] = true;
    // Print the product information instead of just the vertex index
    // Use LinkedBag.toVector() to get the product information
    /*
    for (const auto& product : products.toVector()) {
        if (product.first == v) {
            cout << "Product: " << product.second.getName() << ", Description: " << product.second.getDescription() << endl;
            break; // Assuming unique vertex-product mapping
        }
    }
    */
    cout << products[v].getName() << endl;


    // Recur for all the vertices adjacent to this vertex
    for (const auto& neighbor : adjList[v]) {
        if (!visited[neighbor.first]) {
            DFTRecursive(neighbor.first, visited);
        }
    }
}

// -----------------------------------------------------
// Depth First Search (by username)
// TO DO 
// Add DFS implementation 
// Add DFSRecursive implementation 
