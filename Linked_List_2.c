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
    Node *node = linkList->next;
    node = node->next;
    if (node == NULL) {
        printf("The LinkList is empty.\n");
        linkList->length = 0;
        return;
    }
    for (int i = 0; i < linkList->length; i++) {
        printf("%d ", node->data);
        node = node->next;
    }
    putchar('\n');
}

// 6 Sort The Linklist with Bubble Sort
// FunctionName: SortLinklist
// ParameterList: LinkList *linkList
// ReturnValue: void
void SortLinkList(LinkList *linkList) {
    Node *theFrontNode = linkList->next;
    Node *currentNode1 = NULL;
    Node *currentNode2 = NULL;
    for (int i = 0; i < linkList->length - 1; i++) {
        theFrontNode = linkList->next;
        for (int j = 0; j < linkList->length - 1 - i; j++) {
            currentNode1 = theFrontNode->next;
            currentNode2 = currentNode1->next;
            if (currentNode1->data > currentNode2->data) {
                currentNode1->next = currentNode2->next;
                currentNode2->next = currentNode1;
                theFrontNode->next = currentNode2;
            }
            theFrontNode = theFrontNode->next;
        }
    }
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
        node->next = nextNode;
        free(node);
        node = nextNode;
    }
    free(linkList->next);
    linkList->next = NULL;
    linkList->length = 0;
}

// 8 Sort The LinkList with Bubble Sort(!!USING THE Iterative Method!!)
// FunctionName: SortLinkListByIterativeMethod
// ParameterList: LinkList *linkList
// ReturnValue: void
void SortLinkListByIterativeMethod(LinkList *linkList, Node *theFrontOfStartNode, int *sortTime,
                  int *turns) {
    if (*sortTime > linkList->length - *turns - 1) {
        return;
    }
    Node *currentNode1 = theFrontOfStartNode->next;
    Node *currentNode2 = currentNode1->next;
    if (currentNode1->data > currentNode2->data) {
        currentNode1->next = currentNode2->next;
        currentNode2->next = currentNode1;
        theFrontOfStartNode->next = currentNode2;
    }
    *sortTime += 1;
    SortLinkListByIterativeMethod(linkList, theFrontOfStartNode->next, sortTime, turns);
}

// 0 int main
int main() {
    LinkList linkList;
    InitTheLinkList(&linkList);
    InputLinkListByScanf(&linkList, linkList.next);
    SortLinkList(&linkList);
    printf("The new list is:");
    PrintLinkList(&linkList);
    for (int i = 0; i < linkList.length; i++) {
        int j = 1;
        SortLinkListByIterativeMethod(&linkList, linkList.next, &j, &i);
    }
    printf("By Iterative Method\n");
    printf("The new list is:");
    PrintLinkList(&linkList);
    ClearLinkList(&linkList);
    return 0;
}
