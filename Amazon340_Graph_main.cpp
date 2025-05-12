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
	LinkedBag<Product> distinctProducts;
	distinctProducts.add(Product("Product1", "Description1", 3, 14));
	distinctProducts.add(Product("Product2", "Description2", 4.5, 11));
	distinctProducts.add(Product("Product3", "Description3", 5.5, 38));
	distinctProducts.add(Product("Product4", "Description4", 4.5, 22));
	distinctProducts.add(Product("Product5", "Description5", 7.7, 31));
	distinctProducts.add(Product("Product6", "Description6", 1.3, 75));
	distinctProducts.add(Product("Product7", "Description7", 0.4, 45));
	distinctProducts.add(Product("Product8", "Description8", 5.5, 27));
	distinctProducts.add(Product("Product9", "Description9", 9, 101));
	distinctProducts.add(Product("Product10", "Description10", 7, 100));
	

	
	

	// Initialize a graph with n vertices (where n is the number of Products) 
	//	 Indicate whether it is directed or undirected 
	// TO DO 


	// Add 15-20 edges (productA, productB, weight)
	// TO DO 

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
