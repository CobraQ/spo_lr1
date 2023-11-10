

#ifndef INC_1_TREE_H
#define INC_1_TREE_H
typedef struct TreeNode TreeNode;

struct TreeNode {
    char *type;
    TreeNode *left;
    TreeNode *right;
    char *value;
    int id;
};

void printTreeNode();

TreeNode *createNode(char *type, TreeNode *left, TreeNode *right, char *value);
#endif //INC_1_TREE_H
