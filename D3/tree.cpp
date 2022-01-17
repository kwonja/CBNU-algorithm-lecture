#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

typedef struct Node {
	int key;
	struct Node* left;
	struct Node* right;
}Node;

Node *tree = NULL;
vector<int> arr1;
vector<int> arr2;
void initialize()
{
	tree = (Node*)malloc(sizeof(Node));
	tree->key = 0;
	tree->left = NULL;
	tree->right = NULL;
}
void insert(Node *node, int key)
{
	if (node->key == 0)
	{
		node->key = key;
	}
	else
	{
		Node* temp = (Node*)malloc(sizeof(Node));
		temp->key = key;
		temp->left = NULL;
		temp->right = NULL;
		//새로운 노드 생성

		while (1)
		{
			if (node->key > key)
			{
				if (node->left == NULL)
				{
					node->left = temp;
					break;
				}
				node = node->left;
			}
			else if (node->key < key)
			{
				if (node->right == NULL)
				{
					node->right = temp;
					break;
				}
				node = node->right;
			}
		}
	}
}
void find(Node* node, int key)
{
	while (node != NULL)
	{
		if (node->key == key)
		{
			cout << " yes";
			return;
		}
		if(node->key < key)
		{
			node = node->right;
		}
		else if (node->key > key)
		{
			node = node->left;
		}
	}
	cout << " no";
}
void display(Node* x, int h)
{
	if (x == NULL)
	{
		return;
	}
	printf("[ %d ] : ", h);
	printf("%d", x->key);
	printf("\n");
	display(x->left, h + 1);
	display(x->right, h + 1);
}
void freeBST(Node* node)
{
	if (node)
	{
		freeBST(node->left);
		freeBST(node->right);
		free(node);
	}
}
int main(void)
{
	initialize();
	int n, n1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> n1;
		insert(tree, n1);
	}
	display(tree,0);
	int m, m1;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> m1;
		arr2.push_back(m1);
	}
	for (int i = 0; i < m; i++)
	{
		find(tree, arr2[i]);
	}
	freeBST(tree);
}