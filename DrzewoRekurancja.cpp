#include <iostream>

class Node
{
public:
	
	Node* l;
	Node* r;
	int value;
};

void printNode(const Node* root)
{
	if (root == nullptr)
	{
		return;
	}
	std::cout << "root->value "<< root->value << std::endl;
	printNode(root->l);
	printNode(root->r);
}

Node G = { nullptr, nullptr, 1 };
Node H = { nullptr, nullptr, 2 };
Node I = { nullptr, nullptr, 3 };
Node J = { nullptr, nullptr, 4 };
Node K = { nullptr, nullptr, 5 };

Node D = { &H,  &I, 6 };
Node E = { &J, nullptr, 7 };
Node F = { &K, nullptr, 8 };
Node B = { &D,  &E, 9 };
Node C = { &F,  &G, 0 };

Node A = { &B,  &C, 10 };


int main()
{
	printNode(&A);  
	std::cout << std::endl;
	return 0;
}

