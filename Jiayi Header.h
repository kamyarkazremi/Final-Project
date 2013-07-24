typedef struct node
{
  void* dataPtr;
	struct node* left;
	struct node* right;
}NODE;
typedef struct
{
	int count;
	int (*compare)(void*argu1,void*argu2);
	NODE* root;
}BST_TREE;
typedef struct
{
	int studentID;
	char FirstName[40];
	char LastName[40];
	int PhoneNumber;
}STUDENT;
BST_TREE * BST_Create(int (*compare)(void*argu1,void*argu2));
bool BST_Insert(BST_TREE *tree,void *dataPtr);
bool BST_Delete(BST_TREE *tree,void *dltKey);
void BST_Traverse(BST_TREE *tree,void(*process)(void*dataPtr));
static NODE* _insert(BST_TREE *tree, NODE* root, NODE* newPtr);
static NODE* _delete(BST_TREE *tree, NODE* root,void*dataPtr,bool*success);
void _traverse(NODE* root,void(*process)(void* dataPtr));
char getOption(void);
void addStu(BST_TREE*list);
void deleteStu(BST_TREE*list);
void printList(BST_TREE*list);
void processStu(void *StuPtr);
int compareStu(void * stu1,void *stu2);
