#include <iostream>
#include <string>
#include <vector>

#include "Graph.h"
#include "LinkedBagDS/LinkedBag.h"
#include "Product.h"

using namespace std;
int main() {
	// Create a list of Users
	
	// Add 10 distinct products to the vector
	// Create an adjacency list?
	/*
	LinkedBag<Product> products;
	products.add(Product("Product0", "Description0", 3, 14));
	products.add(Product("Product1", "Description1", 4.5, 11));
	products.add(Product("Product2", "Description2", 5.5, 38));
	products.add(Product("Product3", "Description3", 4.5, 22));
	products.add(Product("Product4", "Description4", 7.7, 31));
	products.add(Product("Product5", "Description5", 1.3, 75));
	products.add(Product("Product6", "Description6", 0.4, 45));
	products.add(Product("Product7", "Description7", 5.5, 27));
	products.add(Product("Product8", "Description8", 9, 101));
	products.add(Product("Product9", "Description9", 7, 100));
	*/

	LinkedBag<pair<int, Product>> products; // I think this is the correct way to do it... It matches the data type to go inside Graph::Vector<T> adjList
	products.add({0, Product("Apples", "Description0", 3, 14)});
	products.add({1, Product("Pasta", "Description1", 4.5, 11)});
	products.add({2, Product("Dates", "Description2", 5.5, 38)});
	products.add({3, Product("Bananas", "Description3", 4.5, 22)});
	products.add({4, Product("Oranges", "Description4", 7.7, 31)});	
	products.add({5, Product("Steak", "Description5", 1.3, 75)});
	products.add({6, Product("Kiwis", "Description6", 0.4, 45)});
	products.add({7, Product("Ice Cream", "Description7", 5.5, 27)});
	products.add({8, Product("Casava", "Description8", 9, 101)});
	products.add({9, Product("Baking Soda", "Description9", 7, 100)});

	
	Graph<double> graph(10, false); // Init the graph with 10 verticies. It is undirected

	// We chose to do an undirected graph, because we felt it would be cleaner to represent the graph. We wouldn't
	// have to worry about the direction of the edges and it just seemed easier to do.

	// vector<LinkedBag<pair<int, T>>> adjList; LinkedBag is of <Product>, but should be <pair<int, Product>>

	// Add 15-20 edges (productA, productB, weight)
	graph.addEdge(0, 1, 0.1);
	graph.addEdge(0, 3, 0.15);
	graph.addEdge(0, 4, 0.6);
	graph.addEdge(1, 2, 0.58);
	graph.addEdge(1, 7, 0.9);
	graph.addEdge(1, 8, 0.2);
	graph.addEdge(2, 0, 0.43);
	graph.addEdge(2, 5, 0.4);
	graph.addEdge(3, 5, 0.7);
	graph.addEdge(4, 6, 0.88);
	graph.addEdge(4, 8, 0.91);
	graph.addEdge(5, 8, 0.2);
	graph.addEdge(6, 0, 0.6);
	graph.addEdge(7, 3, 0.5);
	graph.addEdge(8, 6, 0.8);



	// Print the adjacency list
	graph.printGraph();

	// Depth First traversal should print product information not just indices
	int start = 0;
	// Call DFT 
	// productGraph.DFT(0, ...);


	bool found = false;
	// Depth First search
	string prodName1 = ""; //replace with a product nanme that exists 
	// Call DFS 
	// TO DO:  
	// found = productGraph.DFS(prodName1, ...);
	if(found){
		cout << prodName1 << " has been found in the graph!" << endl;
	}else{
		cout << prodName1 << " has not been found in the graph!" << endl;
	}

	string prodName2 = ""; //replace with a product nanme that DOES NOT exist 
	// Call DFS 
	// TO DO:
	// found = productGraph.DFS(prodName2, ...);
	if(found){
		cout << prodName2 << " has been found in the graph!" << endl;
	}else{
		cout << prodName2 << " has not been found in the graph!" << endl;
	}

	return 0;
}
