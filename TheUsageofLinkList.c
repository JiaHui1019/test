#include <stdio.h>
#include <stdlib.h>

// 1 Define the ElementType struct
// YOU CAN CHANGE THE VALUE TYPE WHEN USING IT!
typedef struct ElementType {
    int number;
    char *name;
    // DISTRIBUTE THE MEMORY SPACE WHEN USING IT
    // OR USING THE POINTER FUNCTION
} ElementType;

// 2 Define the Node struct (the Body of the LinkList)
typedef struct Node {
    ElementType data;
    struct Node *next;
} Node;

// 3 Define the LinkList struct (the Head of the LinkList)
// Including the headPtr and the length of linkList
typedef struct LinkList {
    struct Node *next;
    int length;
} LinkList;

// 0 The Data using for TESTING
ElementType dataArray[] = {
    {1, "Apple"}, {2, "Microsoft"}, {3, "Intel"}, {4, "AMD"}};

// 4 The Functions Of Using The LinkList

// 4-1 Insert a ElementType at a certain Position
// FunctionName: InsertLinkList
// ParameterList: LinkList *linkList, int pos, ElementType element
// ReturnValue: int (Insert Successfully return 1 else return 0)
int InsertLinkList(LinkList *linkList, int pos, ElementType element) {

    if (pos - 1 > linkList->length || pos <= 0) {
        return 0;
    }
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = element;
    node->next = NULL;
    Node *currentNode = linkList->next;
    for (int i = 0; i < pos - 1; i++) {
        currentNode = currentNode->next;
    }
    node->next = currentNode->next;
    currentNode->next = node;
    linkList->length += 1;
    return 1;
}

// 4-2 The Initializer Of a LinkList
// FunctionName: InitLinkList
// ParameterList: LinkList *linkList,ElementType *dataArray, int length
// ReturnValue: int (Insert Successfully return 1 else return 0)
// BUG REMAINING: THE LENGTH MAY BE GREATER THAN THE DATAARRAY'S LENGTH
int InitLinkList(LinkList *linkList, ElementType *dataArray, int length) {
    if (length < 0) {
        return 0;
    }
    Node *headNode = (Node *)malloc(sizeof(Node));
    ElementType headNodeElement = {0, "I am a headNode"};
    headNode->data = headNodeElement;
    headNode->next = NULL;
    linkList->length = 0;
    linkList->next = headNode;
    for (int i = 0; i < length; i++) {
        InsertLinkList(linkList, i + 1, dataArray[i]);
    }
    return 1;
}

// 4-3 Print the LinkList
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
        printf("%d\t%s\n", node->data.number, node->data.name);
        node = node->next;
    }
}

// 4-4 ReversePrint the LinkList
// FunctionName: ReversePrintLinkList
// ParameterList: Node *headNode
// ReturnValue: void
void ReversePrintLinkList(Node *theNextOfheadNode) {
    Node *node = theNextOfheadNode;
    if (node != NULL) {
        ReversePrintLinkList(node->next);
        printf("%d\t%s\n", node->data.number, node->data.name);
    } else {
        return;
    }
}

// 4-5 Reverse the LinkList
// FunctionName: ReverseLinkList
// ParameterList: LinkList *linkList
// ReturnValue: void
void ReverseLinkList(LinkList *linkList) {
    Node *preNode = linkList->next->next;
    Node *currentNode = preNode->next;
    Node *currentNodeNext = currentNode->next;
    linkList->next->next->next = NULL;
    while (currentNodeNext != NULL) {
        currentNode->next = preNode;
        preNode = currentNode;
        currentNode = currentNodeNext;
        currentNodeNext = currentNode->next;
    }
    currentNode->next = preNode;
    linkList->next->next = currentNode;
    return;
}

// 4-6 Judge whether the Linklist is empty or not
// FunctionName: IsLinkListEmpty
// ParameterList: LinkList *linkList
// ReturnValue: int
int IsLinkListEmpty(LinkList *linkList) {
    return linkList->length == 0 ? 1 : 0;
}

// 4-7 Return the Element at a certain Position
// COMMENT: IF YOUR POS IS IRCORRECT THEN THE HEADNODE'S DATA WILL RETURN
ElementType GetLinkListElement(LinkList *linkList, int pos) {
    Node *node = linkList->next;
    if (pos <= 0 || pos > linkList->length) {
        return node->data;
    }
    for (int i = 1; i <= pos; i++) {
        node = node->next;
    }
    return node->data;
}

// 4-8 Delete the certain Node at a given Position
// FunctionName: DeleteLinkListElement
// ParameterList: LinkList *linkList, int pos
// ReturnValue: ElementType
ElementType DeleteLinkListElement(LinkList *linkList, int pos) {
    Node *node = linkList->next;
    if (pos <= 0 || pos > linkList->length) {
        return node->data;
    }
    ElementType element;
    node = node->next;
    Node *preNode;
    for (int i = 1; i < pos; i++) {
        preNode = node;
        node = node->next;
    }
    element = node->data;
    preNode->next = node->next;
    free(node);
    linkList->length -= 1;
    return element;
}

// 4-9 Clear the LinkList
// FunctionName: ClearLinkList
// ParameterList: LinkList *linkList
// ReturnValue: void
void ClearLinkList(LinkList *linkList) {
    Node *node = linkList->next;
    node = node->next;
    Node *nextNode;
    while (node) {
        nextNode = node->next;
        free(node);
        node = nextNode;
    }
    linkList->next->next = NULL;
    linkList->length = 0;
}

// 4-0 Test All The Fuctions
// FunctionName: TestLinkList
// ParameterList:
// ReturnValue: void
void TestLinkList() {
    LinkList linkList;
    InitLinkList(&linkList, dataArray, 3);
    printf("Print the linlist:\n");
    PrintLinkList(&linkList);
    printf("Is LinkList Empty? %d\n", IsLinkListEmpty(&linkList));
    ElementType element;
    element = GetLinkListElement(&linkList, 3);
    printf("Get the element at no.3:\n");
    printf("%d\t%s\n", element.number, element.name);
    printf("ReversePrint the linlist:\n");
    ReversePrintLinkList(linkList.next->next);
    printf("Reverse the linlist:\n");
    ReverseLinkList(&linkList);
    PrintLinkList(&linkList);
    element = DeleteLinkListElement(&linkList, 2);
    printf("After Deleting the node at no.2:\n");
    PrintLinkList(&linkList);
    printf("The deleted element:\n");
    printf("%d\t%s\n", element.number, element.name);
    ClearLinkList(&linkList);
    printf("After Clearing the linklist:\n");
    PrintLinkList(&linkList);
    printf("Is LinkList Empty? %d\n", IsLinkListEmpty(&linkList));
}

int main() {
    TestLinkList();
    return 0;
}
