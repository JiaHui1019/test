#include <stdio.h>
#include <stdlib.h>

// 1 Define the Node struct (the Body of the LinkList)
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// 2 Define the LinkList struct (the Head of the LinkList)
// Including the headPtr and the length of linkList
typedef struct LinkList {
    int length;
    struct Node *next;
} LinkList;

// 3 InitTheLinkList
// FunctionName: InitTheLinkList
// ParameterList: LinkList *linkList
// ReturnValue: void
void InitTheLinkList(LinkList *linkList) {
    linkList->length = 0;
    Node *headNode = (Node *)malloc(sizeof(Node));
    linkList->next = headNode;
    headNode->data = 0;
    headNode->next = NULL;
}

// 4 Input Array Through scanf(!!USING THE Iterative Method!!)
// FunctionName: InputLinkListByScanf
// ParameterList: LinkList *linkList, Node *lastNode
// ReturnValue: Node *newlastNode (if input equals -1 then return NULL)
// Explanation: The number input will be set in the end of linkList
Node *InputLinkListByScanf(LinkList *linkList, Node *lastNode) {
    Node *newlastNode = (Node *)malloc(sizeof(Node));
    newlastNode->next = NULL;
    scanf("%d", &newlastNode->data);
    if (newlastNode->data == -1) {
        return NULL;
    }
    else {
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
    Node *node = linkList->next->next;
    if (node == NULL) {
        printf("The linkList is empty!\n");
        linkList->length = 0;
        return;
    }
    for (int i = 0; i < linkList->length; i++) {
        printf("%d ", node->data);
    }
    putchar('\n');
}

// 6 LinkList Matching
// FunctionName: LinkListMatching
// ParameterList: LinkList *linkList1, LinkList *linkList2
// ReturnValue: int (1||0)
int LinkListMatching(LinkList *linkList1, LinkList *linkList2) {
    if (linkList1->length < linkList2->length) {
        return 0;
    }
    Node *standNodeOfL1 = linkList1->next->next;
    for (int i = 0; i < linkList1->length - linkList2->length + 1; i++) {
        Node *currentNodeOfL1 = standNodeOfL1;
        Node *currentNodeOfL2 = linkList2->next->next;
        for (int j = 0; j < linkList2->length; j++) {
            if (currentNodeOfL1->data != currentNodeOfL2->data) {
                break;
            }
            else {
                currentNodeOfL1 = currentNodeOfL1->next;
                currentNodeOfL2 = currentNodeOfL2->next;
            }
        }
        if (currentNodeOfL2 == NULL) {
            return 1;
        }
        else {
            standNodeOfL1 = standNodeOfL1->next;
        }
    }
    return 0;
}

// 7 Clear the LinkList
// FunctionName: ClearLinkList
// ParameterList: LinkList *linkList
// ReturnValue: void
void ClearLinkList(LinkList *linkList) {
    Node *node = linkList->next->next;
    Node *nextNode = NULL;
    while (node) {
        node->next = nextNode;
        free(node);
        node = nextNode;
    }
    free(linkList->next);
    linkList->next = NULL;
    linkList->length = 0;
}

// 0 int main
int main() {
    LinkList linkList1, linkList2;
    InitTheLinkList(&linkList1);
    InitTheLinkList(&linkList2);
    InputLinkListByScanf(&linkList1, linkList1.next);
    InputLinkListByScanf(&linkList2, linkList2.next);
    LinkListMatching(&linkList1, &linkList2) == 1
        ? printf("ListB is the sub sequence of ListA.\n")
        : printf("ListB is not the sub sequence of ListA.\n");
    ClearLinkList(&linkList1);
    ClearLinkList(&linkList2);
    return 0;
}