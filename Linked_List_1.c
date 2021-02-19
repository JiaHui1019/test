#include <stdio.h>
#include <stdlib.h>

// 1 Define the Node struct (the Body of the LinkList)
typedef struct Node {
    int number;
    struct Node *next;
} Node;

// 2 Define the LinkList struct (the Head of the LinkList)
// Including the headPtr and the length of LinkList
typedef struct LinkList {
    struct Node *next;
    int length;
} LinkList;

// 3 InitTheLinkList
// FunctionName: InitTheLinkList
// ParameterList: LinkList *linkList
// ReturnValue: void
void InitTheLinkList(LinkList *linkList) {
    linkList->length = 0;
    Node *headNode = (Node*)malloc(sizeof(Node));
    linkList->next = headNode;
    headNode->number = 0;
    headNode->next = NULL;
}

// 4 Input Array Through scanf (!!USING THE Iterative Method!!)
// FunctionName: InputLinkListByScanf
// ParameterList: LinkList *linkList, Node *lastNode
// ReturnValue: Node *newlastNode (if input equals -1 then return NULL)
// Explanation: The number input will be set in the end of linkList
Node *InputLinkListByScanf(LinkList *linkList, Node *lastNode) {
    Node *newlastNode = (Node*)malloc(sizeof(Node));
    newlastNode->next = NULL;
    scanf("%d", &newlastNode->number);
    if (newlastNode->number == -1) {
        return NULL;
    } 
    else
    {
        lastNode->next = newlastNode;
        linkList->length += 1;
        InputLinkListByScanf(linkList, newlastNode);
    }
}

// 5 Print the LinkList
// FunctionName: PrintLinkList
// ParameterList: LinkList *linkList
// ReturnValue: void
void PrintLinkList(LinkList *linkList) {
    Node *node = linkList->next;
    node = node->next;
    if (node == NULL) {
        printf("The linkList is empty!\n");
        linkList->length = 0;
        return;
    }
    for (int i = 0; i < linkList->length; i++) {
        printf("%d", node->number);
        node = node->next;
    }
}

// 6 Return the MAX MIN SUM of LinkList
// FunctionName: TheMAXMINSUMofLinkList
// ParameterList: LinkList *linkList
// ReturnValue: int *theReturnArray
int *TheMAXMINSUMofLinkList(LinkList *linkList) {
    int *theReturnArray = (int*)malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++)
        theReturnArray[i] = 0;
    Node *node = linkList->next;
    node = node->next;
    if (node == NULL) {
        printf("The linkList is empty!\n");
        linkList->length = 0;
        return theReturnArray;
    }
    theReturnArray[1] = node->number;
    for (int i = 0; i < linkList->length; i++) {
        if (node->number > theReturnArray[0]) {
            theReturnArray[0] = node->number;
        }
        if (node -> number < theReturnArray[1]) {
            theReturnArray[1] = node->number;
        }
        theReturnArray[2] += node->number;
        node = node->next;
    }
    return theReturnArray;
}

// 7 Clear the LinkList
// FunctionName: ClearLinkList
// ParameterList: LinkList *linkList
// ReturnValue: void
void ClearLinkList(LinkList *linkList) {
    Node *node = linkList->next;
    node = node->next;
    Node *nextNode = NULL;
    while (node) {
        nextNode = node->next;
        free(node);
        node = nextNode;
    }
    free(linkList->next);
    linkList->next = NULL;
    linkList->length = 0;
}

// 0 int main
int main() {
    LinkList linkList;
    InitTheLinkList(&linkList);
    InputLinkListByScanf(&linkList, linkList.next);
    //PrintLinkList(&linkList);
    int *theReturn = TheMAXMINSUMofLinkList(&linkList);
    printf("The maximum, minimum, and the total are:%d %d %d\n",
    theReturn[0], theReturn[1], theReturn[2]);
    ClearLinkList(&linkList);
    return 0;
}