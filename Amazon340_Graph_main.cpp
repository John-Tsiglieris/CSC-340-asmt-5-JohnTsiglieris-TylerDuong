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
	LinkedBag<Product> products;
	products.add(Product("Product1", "Description1", 3, 14));
	products.add(Product("Product2", "Description2", 4.5, 11));
	products.add(Product("Product3", "Description3", 5.5, 38));
	products.add(Product("Product4", "Description4", 4.5, 22));
	products.add(Product("Product5", "Description5", 7.7, 31));
	products.add(Product("Product6", "Description6", 1.3, 75));
	products.add(Product("Product7", "Description7", 0.4, 45));
	products.add(Product("Product8", "Description8", 5.5, 27));
	products.add(Product("Product9", "Description9", 9, 101));
	products.add(Product("Product10", "Description10", 7, 100));
	
	Graph<Product> graph = new Graph(10, false); // Init the graph with 10 verticies. It is undirected

	// Insert a comment on why we chose not directed. OR directed if we decide to change

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
	productGraph.printGraph();

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
