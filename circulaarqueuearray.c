#inculde<stdio.h>

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node * createNode(int data){
struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=data;
newnode->left=NULL;
newnode_>right=NULL;
return newnode;
}

struct Node * BSTInsert(struct Node*root,int data)
{
	if(root==NULL)
	{
		return createNode(data);
	}
	if(root >data)
	{
		root->left =BSTInsert(root->left,data);
	}
	else
	{
	      root->right=BSTInsert(root->right,data);
	}
		
	return root;

}

void inorder(struct Node *root)
{
	 if(root!=NULL)
	 {
	 	inorder(root->left);
	 	printf("%d",root->data);
	 	inorder(root->right);
	 }
	 
}

void preorder(sturct Node *root)
{
	if(root!=NULL)
	{
		printf("%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct Node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->data);
	}
}


int main()
{
	struct Node *root=NULL
	int data,i,n;
	
	printf("enter the num of elemets");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the elements %d : ",i+1);
		scanf("%d",&data);
		
		root=BSTInsert(root,data);
	}
	
	 printf("Inorder Traversal of the BST: ");
    inorderTraversal(root);
    printf("\n");
    
    printf("Preorder Traversal of BST : ");
    preorderTraversal(root);
    printf("\n");
    
    printf("postorder Traversal of the BST: ");
    postorderTraversal(root);
    printf("\n");

    return 0;
}
