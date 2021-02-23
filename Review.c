#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// // 1 Define the Node struct (the Body of the LinkList)
// typedef struct Node {
//     int data;
//     struct Node *next;
// } Node;

// // 2 Define the LinkList struct (the Head of the LinkList)
// // Including the headPtr and the length of LinkList
// typedef struct LinkList {
//     struct Node *next;
//     int length;
// } LinkList;

// // 3 InitTheLinkList
// // FunctionName: InitTheLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void InitTheLinkList(LinkList *linkList) {
//     linkList->length = 0;
//     Node *headNode = (Node *)malloc(sizeof(Node));
//     linkList->next = headNode;
//     headNode->data = 0;
//     headNode->next = NULL;
// }

// // 4 Input Array Through scanf (!!USING THE Iterative Method!!)
// // FunctionName: InputLinkListByScanf
// // ParameterList: LinkList *linkList, Node *lastNode
// // ReturnValue: Node *newlastNode (if input equals -1 then return NULL)
// // Explanation: The number input will be set in the end of linkList
// Node* InputLinkListByScanf(LinkList *linkList, Node *lastNode) {
//     Node *newlastNode = (Node*)malloc(sizeof(Node));
//     newlastNode->next = NULL;
//     scanf("%d", &newlastNode->data);
//     if (newlastNode->data == -1) {
//         return NULL;
//     }
//     else {
//         lastNode->next = newlastNode;
//         linkList->length += 1;
//         InputLinkListByScanf(linkList, newlastNode);
//     }
// }

// // 5 Print the LinkList
// // FunctionName: PrintLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void PrintLinkList(LinkList *linkList) {
//     Node *node = linkList->next;
//     node = node->next;
//     if (node == NULL) {
//         printf("The LinkList is empty.\n");
//         linkList->length = 0;
//         return;
//     }
//     for (int i = 0; i < linkList->length; i++) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
// }

// // 6 Return the MAX MIN SUM of LinkList
// // FunctionName: TheMAXMINSUMofLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: int *theReturnArray
// int *TheMAXMINSUMofLinkList(LinkList *linkList) {
//     int *theReturnArray = (int *)malloc(sizeof(int)*3);
//     for (int i = 0; i < 3; i++)
//         theReturnArray[i] = 0;
//     Node *node = linkList->next;
//     node = node->next;
//     if (node == NULL) {
//         printf("The linkList is empty!\n");
//         linkList->length = 0;
//         return theReturnArray;
//     }
//     theReturnArray[1] = node->data;
//     for (int i = 0; i < linkList->length; i++) {
//         if (theReturnArray[0] < node->data) {
//             theReturnArray[0] = node->data;
//         }
//         if (theReturnArray[1] > node->data) {
//             theReturnArray[1] = node->data;
//         }
//         theReturnArray[2] += node->data;
//         node = node->next;
//     }
//     return theReturnArray;
// }

// // 7 Clear the LinkList
// // FunctionName: ClearLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void ClearLinkList(LinkList *linkList) {
//     Node *node = linkList->next;
//     node = node->next;
//     Node *nextNode = NULL;
//     while (node) {
//         nextNode = node->next;
//         free(node);
//         node = node->next; 
//     }
//     free(linkList->next);
//     linkList->next = NULL;
//     linkList->length = 0;
// }

// // 0 int main
// int main() {
//     LinkList linkList;
//     InitTheLinkList(&linkList);
//     InputLinkListByScanf(&linkList, linkList.next);
//     //PrintLinkList(&linkList);
//     int *theReturn = TheMAXMINSUMofLinkList(&linkList);
//     printf("The maximum, minimum, and the total are:%d %d %d\n",
//     theReturn[0], theReturn[1], theReturn[2]);
//     ClearLinkList(&linkList);
//     return 0;
// }



// // 1 Define the Node struct (the Body of the LinkList)
// typedef struct Node {
//     int number;
//     struct Node *next;
// } Node;

// // 2 Define the LinkList struct (the Head of the LinkList)
// // Including the headPtr and the length of LinkList
// typedef struct LinkList {
//     struct Node *next;
//     int length;
// } LinkList;

// // 3 InitTheLinkList
// // FunctionName: InitTheLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void InitTheLinkList(LinkList *linkList) {
//     Node *headNode = (Node *)malloc(sizeof(Node));
//     headNode->number = 0;
//     headNode->next = NULL;
//     linkList->next = headNode;
//     linkList->length = 0;
// }

// // 4 Input Array Through scanf (!!USING THE Iterative Method!!)
// // FunctionName: InputLinkListByScanf
// // ParameterList: LinkList *linkList, Node *lastNode
// // ReturnValue: Node *newlastNode (if input equals -1 then return NULL)
// // Explanation: The number input will be set in the end of linkList
// Node *InputLinkListByScanf(LinkList *linkList, Node *lastNode) {
//     Node *newlastNode = (Node *)malloc(sizeof(Node));
//     newlastNode->next = NULL;
//     scanf("%d", &newlastNode->number);
//     if (newlastNode->number == -1) {
//         return NULL;
//     }
//     else {
//         lastNode->next = newlastNode;
//         linkList->length += 1;
//         InputLinkListByScanf(linkList, newlastNode);
//     }
// }

// // 5 Print the LinkList
// // FunctionName: PrintLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void PrintLinkList(LinkList *linkList) {
//     Node *node = linkList->next;
//     node = node->next;
//     if (node->next == NULL) {
//         printf("The LinkList is empty.\n");
//         linkList->length = 0;
//         return;
//     }
//     for (int i = 0; i < linkList->length; i++) {
//         printf("%d ", node->number);
//         node = node->next;
//     }
// }

// // 6 Return the MAX MIN SUM of LinkList
// // FunctionName: TheMAXMINSUMofLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: int *theReturnArray
// int *TheMAXMINSUMofLinkList(LinkList *linkList) {
//     int *theReturnArray = (int *)malloc(sizeof(int) * 3);
//     for (int i = 0; i < linkList->length; i++) {
//         theReturnArray[i] = 0;
//     }
//     Node *node = linkList->next;
//     if (node->next == NULL) {
//         printf("The LinkList is empty.\n");
//         linkList->length = 0;
//         return theReturnArray;
//     }
//     node = node->next;
//     theReturnArray[1] = node->number;
//     for (int i = 0; i < linkList->length; i++) {
//         if (theReturnArray[0] < node->number) {
//             theReturnArray[0] = node->number;
//         }
//         if (theReturnArray[1] > node->number) {
//             theReturnArray[1] = node->number;
//         }
//         theReturnArray[2] += node->number;
//         node = node->next;
//     }
//     return theReturnArray;
// }

// // 7 Clear the LinkList
// // FunctionName: ClearLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void ClearLinkList(LinkList *linkList) {
//     Node *node = linkList->next;
//     node = node->next;
//     Node *nextNode = NULL;
//     for (int i = 0; i < linkList->length; i++) {
//         node->next = nextNode;
//         free(node);
//         node = nextNode;
//     }
//     free (linkList->next);
//     linkList->next = NULL;
//     linkList->length = 0;
// }

// // 0 int main
// int main() {
//     LinkList linkList;
//     InitTheLinkList(&linkList);
//     InputLinkListByScanf(&linkList, linkList.next);
//     //PrintLinkList(&linkList);
//     int *theReturn = TheMAXMINSUMofLinkList(&linkList);
//     printf("The maximum, minimum, and the total is %d %d %d\n",
//     theReturn[0], theReturn[1], theReturn[2]);
//     ClearLinkList(&linkList);
//     return 0;
// }

// // 1 Define the Node struct (the Body of the LinkList)
// typedef struct Node {
//     int number;
//     struct Node *next;
// } Node;

// // 2 Define the LinkList struct (the Head of the LinkList)
// // Including the headPtr and the length of linkList
// typedef struct LinkList {
//     int length;
//     struct Node *next;
// } LinkList;

// // 3 InitTheLinkList
// // FunctionName: InitTheLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void InitTheLinkList(LinkList *linkList) {
//     linkList->length = 0;
//     Node *headNode = (Node *)malloc(sizeof(Node));
//     linkList->next = headNode;
//     headNode->number = 0;
//     headNode->next = NULL;
// }

// // 4 Input Array Through scanf(!!USING THE Iterative Method!!)
// // FunctionName: InputLinkListByScanf
// // ParameterList: LinkList *linkList, Node *lastNode
// // ReturnValue: Node *newlastNode (if input equals -1 then return NULL)
// // Explanation: The number input will be set in the end of linkList
// Node *InputLinkListByScanf(LinkList *linkList, Node *lastNode) {
//     Node *newlastNode = (Node *)malloc(sizeof(Node));
//     newlastNode->next = NULL;
//     scanf("%d", &newlastNode->number);
//     if (newlastNode->number == -1) {
//         return NULL;
//     }
//     else {
//         lastNode->next = newlastNode;
//         linkList->length += 1;
//         InputLinkListByScanf(linkList, newlastNode);
//     }
// }

// // 5 Print the LinkList
// // FunctionName: PrintLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void PrintLinkList(LinkList *linkList) {
//     Node *node = linkList->next;
//     node = node->next;
//     if (node == NULL) {
//         printf("The LinkList is empty.\n");
//         linkList->length = 0;
//         return;
//     }
//     for (int i = 0; i < linkList->length; i++) {
//         printf("%d ", node->number);
//         node = node->next;
//     }
//     putchar('\n');
// }

// // 6 Sort The Linklist with Bubble Sort
// // FunctionName: SortLinklist
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void SortLinklist(LinkList *linkList, Node *theFrontOfStartNode, int *sortTime,
//                   int *turns) {
//     if (*sortTime > linkList->length - *turns - 1) {
//         return;
//     }
//     Node *currentNode1 = theFrontOfStartNode->next;
//     Node *currentNode2 = currentNode1->next;
//     if (currentNode1->number > currentNode2->number) {
//         currentNode1->next = currentNode2->next;
//         currentNode2->next = currentNode1;
//         theFrontOfStartNode->next = currentNode2;
//     }
//     *sortTime += 1;
//     SortLinklist(linkList, theFrontOfStartNode->next, sortTime, turns);
// }

// // 7 Clear the LinkList
// // FunctionName: ClearLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void ClearLinkList(LinkList *linkList) {
//     Node *node = linkList->next;
//     node = node->next;
//     Node *nextNode = NULL;
//     while (node) {
//         node->next = nextNode;
//         free(node);
//         node = nextNode;
//     }
//     free(linkList->next);
//     linkList->next = NULL;
//     linkList->length = 0;
// }

// // 0 int main
// int main() {
//     LinkList linkList;
//     InitTheLinkList(&linkList);
//     InputLinkListByScanf(&linkList, linkList.next);
//     //PrintLinkList(&linkList);
//     for (int i = 0; i < linkList.length; i++) {
//         int j = 1;
//         SortLinkList(&linkList, linkList.next, &j, &i);
//     }
//     printf("The new list is:");
//     PrintLinkList(&linkList);
//     ClearLinkList(&linkList);
//     return 0;
// }

// // 1 Define the Node struct (the Body of the LinkList)
// typedef struct Node {
//     int data;
//     struct Node *next;
// } Node;

// // 2 Define the LinkList struct (the Head of the LinkList)
// // Including the headPtr and the length of linkList
// typedef struct LinkList {
//     int length;
//     struct Node *next;
// } LinkList;

// // 3 InitTheLinkList
// // FunctionName: InitTheLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void InitTheLinkList(LinkList *linkList) {
//     linkList->length = 0;
//     Node *headNode = (Node *)malloc(sizeof(Node));
//     linkList->next = headNode;
//     headNode->data = 0;
//     headNode->next = NULL;
// }

// // 4 Input Array Through scanf(!!USING THE Iterative Method!!)
// // FunctionName: InputLinkListByScanf
// // ParameterList: LinkList *linkList, Node *lastNode
// // ReturnValue: Node *newlastNode (if input equals -1 then return NULL)
// // Explanation: The number input will be set in the end of linkList
// Node *InputLinkListByScanf(LinkList *linkList, Node *lastNode) {
//     Node *newlastNode = (Node *)malloc(sizeof(Node));
//     newlastNode->next = NULL;
//     scanf("%d", &newlastNode->data);
//     if (newlastNode->data == -1) {
//         return NULL;
//     }
//     else {
//         lastNode->next = newlastNode;
//         linkList->length += 1;
//         InputLinkListByScanf(linkList, newlastNode);
//     }
// }

// // 5 Print the LinkList
// // FunctionName: PrintLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void PrintLinkList(LinkList *linkList) {
//     Node *node = linkList->next;
//     node = node->next;
//     if (node == NULL) {
//         printf("The LinkList is empty.\n");
//         linkList->length = 0;
//         return;
//     }
    
//     for (int i = 0; i < linkList->length; i++) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     putchar('\n');
// }


// // 6 Sort The Linklist with Bubble Sort
// // FunctionName: SortLinklist
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void SortLinkList(LinkList *linkList) {
//     Node *theFrontNode = linkList->next;
//     Node *currentNode1 = NULL;
//     Node *currentNode2 = NULL;
//     for (int i = 0; i < linkList->length - 1; i++) {
//         theFrontNode = linkList->next;
//         for (int j = 0; j < linkList->length -1 - i; j++) {
//             currentNode1 = theFrontNode->next;
//             currentNode2 = currentNode1->next;
//             if (currentNode1->data > currentNode2->data) {
//                 currentNode1->next = currentNode2->next;
//                 currentNode2->next = currentNode1;
//                 theFrontNode->next = currentNode2;
//             }
//             theFrontNode = theFrontNode->next;
//         }
//     }
// }


// // 7 Clear the LinkList
// // FunctionName: ClearLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void ClearLinkList(LinkList *linkList) {
//     Node *node = linkList->next;
//     node = node->next;
//     Node *nextNode = NULL;
//     while(node) {
//         node->next = nextNode;
//         free(node);
//         node = nextNode;
//     }
//     free(linkList->next);
//     linkList->next = NULL;
//     linkList->length = 0;
// }


// // 0 int main
// int main() {
//     LinkList linkList;
//     InitTheLinkList(&linkList);
//     InputLinkListByScanf(&linkList, linkList.next);
//     SortLinkList(&linkList);
//     printf("The new list is:");
//     PrintLinkList(&linkList);
//     ClearLinkList(&linkList);
//     return 0;
// }



// // 1 Define the Node struct (the Body of the LinkList)
// typedef struct Node {
//     int data;
//     struct Node *next;
// } Node;

// // 2 Define the LinkList struct (the Head of the LinkList)
// // Including the headPtr and the length of linkList
// typedef struct LinkList {
//     int length;
//     struct Node *next;
// } LinkList;

// // 3 InitTheLinkList
// // FunctionName: InitTheLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void InitTheLinkList(LinkList *linkList) {
//     linkList->length = 0;
//     Node *headNode = (Node *)malloc(sizeof(Node));
//     linkList->next = headNode;
//     headNode->data = 0;
//     headNode->next = NULL;
// }

// // 4 Input Array Through scanf(!!USING THE Iterative Method!!)
// // FunctionName: InputLinkListByScanf
// // ParameterList: LinkList *linkList, Node *lastNode
// // ReturnValue: Node *newlastNode (if input equals -1 then return NULL)
// // Explanation: The number input will be set in the end of linkList
// Node *InputLinkListByScanf(LinkList *linkList, Node *lastNode) {
//     Node *newlastNode = (Node *)malloc(sizeof(Node));
//     newlastNode->next = NULL;
//     scanf("%d", &newlastNode->data);
//     if (newlastNode->data == -1) {
//         return NULL;
//     }
//     else {
//         lastNode->next = newlastNode;
//         linkList->length += 1;
//         InputLinkListByScanf(linkList, newlastNode);
//         }
// }

// // 5 Print the LinkList
// // FunctionName: PrintLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void PrintLinkList(LinkList *linkList) {
//     Node *node = linkList->next;
//     node = node->next;
//     if (node == NULL) {
//         printf("The linkList is empty.\n");
//         linkList->length = 0;
//         return;
//     }
//     for (int i = 0; i < linkList->length; i++) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     putchar('\n');
// }

// // 6 LinkList Matching
// // FunctionName: LinkListMatching
// // ParameterList: LinkList *linkList1, LinkList *linkList2
// // ReturnValue: int (1||0)
// int LinkListMatching(LinkList *linkList1, LinkList *linkList2) {
//     Node *node1 = linkList1->next;
//     Node *node2 = linkList2->next;
//     node1 = node1->next;
//     node2 = node2->next;
//     int isMatch = 1;
//     while (node1) {
//         while (node1->data == node2->data) {
//             isMatch = 0;
//             node1 = node1->next;
//             node2 = node2->next;
//             if (node2 == NULL) {
//                 return 1;
//             }
//         }
//         if (isMatch == 0) {
//             return 0;
//         }
//         node1 = node1->next;
//     }
//     return 0;
// }


// // 7 Clear the LinkList
// // FunctionName: ClearLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void ClearLinkList(LinkList *linkList) {
//     Node *node = linkList->next;
//     node = node->next;
//     Node *nextNode = NULL;
//     while (node) {
//         node->next = nextNode;
//         free(node);
//         node = nextNode;
//     }
//     free(linkList->next);
//     linkList->next = NULL;
//     linkList->length = 0;
// }

// // 0 int main
// int main() {
//     LinkList linkList1, linkList2;
//     InitTheLinkList(&linkList1);
//     InitTheLinkList(&linkList2);
//     InputLinkListByScanf(&linkList1, linkList1.next);
//     InputLinkListByScanf(&linkList2, linkList2.next);
//     PrintLinkList(&linkList1);
//     PrintLinkList(&linkList2);
//     int ret = LinkListMatching(&linkList1, &linkList2);
//     if (ret == 1) {
//         printf("ListB is the sub sequence of ListA.");
//     }
//     else {
//         printf("ListB is not the sub sequence of ListA.");
//     }
//     ClearLinkList(&linkList1);
//     ClearLinkList(&linkList2);
//     return 0;
// }



// // 1 Define the Node struct (the Body of the LinkList)
// typedef struct Node {
//     int data;
//     struct Node *next;
// } Node;

// // 2 Define the LinkList struct (the Head of the LinkList)
// // Including the headPtr and the length of linkList
// typedef struct LinkList {
//     int length;
//     struct Node *next;
// } LinkList;

// // 3 InitTheLinkList
// // FunctionName: InitTheLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void InitTheLinkList(LinkList *linkList) {
//     linkList->length = 0;
//     Node *headNode = (Node *)malloc(sizeof(Node));
//     linkList->next = headNode;
//     headNode->data = 0;
//     headNode->next = NULL;
// }

// // 4 Input Array Through scanf(!!USING THE Iterative Method!!)
// // FunctionName: InputLinkListByScanf
// // ParameterList: LinkList *linkList, Node *lastNode
// // ReturnValue: Node *newlastNode (if input equals -1 then return NULL)
// // Explanation: The number input will be set in the end of linkList
// Node *InputLinkListByScanf(LinkList *linkList, Node *lastNode) {
//     Node *newlastNode = (Node *)malloc(sizeof(Node));
//     newlastNode->next = NULL;
//     scanf("%d", &newlastNode->data);
//     if (newlastNode->data == -1) {
//         return NULL;
//     }
//     else {
//         lastNode->next = newlastNode;
//         linkList->length += 1;
//         InputLinkListByScanf(linkList, newlastNode);
//     }
// }

// // 5 Print the LinkList
// // FunctionName: PrintLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void PrintLinkList(LinkList *linkList) {
//     Node *node = linkList->next;
//     node = node->next;
//     if (node == NULL) {
//         printf("The linkList is empty!\n");
//         linkList->length = 0;
//         return;
//     }
//     for (int i = 0; i < linkList->length; i++) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     putchar('\n');
// }

// // 6 LinkList Matching
// // FunctionName: LinkListMatching
// // ParameterList: LinkList *linkList1, LinkList *linkList2
// // ReturnValue: int (1||0)
// int LinkListMatching(LinkList *linkList1, LinkList *linkList2) {
//     if (linkList1->length < linkList2->length) {
//         return 0;
//     }
//     Node *standNodeOfL1 = linkList1->next->next;
//     for (int i = 0; i < linkList1->length - linkList2->length + 1; i++) {
//         Node *currentNodeOfL2 = linkList2->next->next;
//         Node *currentNodeOfL1 = standNodeOfL1;
//         for (int j = 0; j < linkList2->length; j++) {
//             if (currentNodeOfL2->data != currentNodeOfL1->data) {
//                 break;
//             }
//             else {
//                 currentNodeOfL2 = currentNodeOfL2->next;
//                 currentNodeOfL1 = currentNodeOfL1->next;
//             }
//         }
//         if (currentNodeOfL2 == NULL) {
//             return 1;
//         }
//         else {
//             standNodeOfL1 = standNodeOfL1->next;
//         }
//     }
//     return 0;
// }

// // 7 Clear the LinkList
// // FunctionName: ClearLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void ClearLinkList(LinkList *linkList) {
//     Node *node = linkList->next;
//     node = node->next;
//     Node *nextNode = NULL;
//     while (node) {
//         nextNode = node->next;
//         free(node);
//         node = nextNode;
//     }
//     free(linkList->next);
//     linkList->next = NULL;
//     linkList->length = 0;
// }

// // 0 int main
// int main() {
//     LinkList linkList1, linkList2;
//     InitTheLinkList(&linkList1);
//     InitTheLinkList(&linkList2);
//     InputLinkListByScanf(&linkList1, linkList1.next);
//     InputLinkListByScanf(&linkList2, linkList2.next);
//     LinkListMatching(&linkList1, &linkList2) == 1
//         ? printf("ListB is the sub sequence of ListA.\n")
//         : printf("ListB is not the sub sequence of ListA.\n");
//     ClearLinkList(&linkList1);
//     ClearLinkList(&linkList2);
//     return 0;
// }




// // 1 Define the Node struct (the Body of the LinkList)
// typedef struct Node {
//     int data;
//     struct Node *next;
// } Node;

// // 2 Define the LinkList struct (the Head of the LinkList)
// // Including the headPtr and the length of linkList
// typedef struct LinkList {
//     int length;
//     struct Node *next;
// } LinkList;

// // 3 InitTheLinkList
// // FunctionName: InitTheLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void InitTheLinkList(LinkList *linkList) {
//     linkList->length = 0;
//     Node *headNode = (Node *)malloc(sizeof(Node));
//     linkList->next = headNode;
//     headNode->data = 0;
//     headNode->next = NULL;
// }

// // 4 Input Array Through scanf(!!USING THE Iterative Method!!)
// // FunctionName: InputLinkListByScanf
// // ParameterList: LinkList *linkList, Node *lastNode
// // ReturnValue: Node *newlastNode (if input equals -1 then return NULL)
// // Explanation: The number input will be set in the end of linkList
// Node *InputLinkListByScanf(LinkList *linkList, Node *lastNode) {
//     Node *newlastNode = (Node *)malloc(sizeof(Node));
//     newlastNode->next = NULL;
//     scanf("%d", &newlastNode->data);
//     if (newlastNode->data == -1) {
//         return NULL;
//     }
//     else {
//         lastNode->next = newlastNode;
//         linkList->length += 1;
//         InputLinkListByScanf(linkList, newlastNode);
//     }
// }


// // 5 Print the LinkList
// // FunctionName: PrintLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void PrintLinkList(LinkList *linkList) {
//     Node *node = linkList->next->next;
//     if (node == NULL) {
//         printf("The linkList is empty.\n");
//         linkList->length = 0;
//         return;
//     }
//     for (int i = 0; i < linkList->length; i++) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     putchar('\n');
// }

// // 6 Exchange the part of the LinkList
// // FunctionName: ExchangePartOfLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void ExchangePartOfLinkList(LinkList *linkList) {
//     int range[4] = {0};
//     scanf("%d%d%d%d", &range[0], &range[1], &range[2], &range[3]);
//     Node *node[4] = {0, NULL};
//     int j = 0;
//     Node *currentNode = linkList->next;
//     for (int i = 0; i < range[3] + 1; i++) {
//         if (i == range[0] - 1 || i == range[1] || i == range[3]) {
//             node[j] = currentNode;
//             j += 1;
//         }
//         currentNode = currentNode->next;
//     }
//     currentNode = node[1];
//     for (int i = 0; i < range[2] - range[1]; i++) {
//         currentNode = currentNode->next;
//     }
//     node[3] = currentNode;
//     Node *saveNode = node[0]->next;
//     node[0]->next = node[3]->next;
//     node[3]->next = saveNode;
//     saveNode = node[2]->next;
//     node[2]->next = node[1]->next;
//     node[1]->next = saveNode;
// }

// // 7 Clear the LinkList
// // FunctionName: ClearLinkList
// // ParameterList: LinkList *linkList
// // ReturnValue: void
// void ClearLinkList(LinkList *linkList) {
//     Node *node = linkList->next->next;
//     Node *nextNode = NULL;
//     while(node) {
//         node->next = nextNode;
//         free(node);
//         node = nextNode;
//     }
//     free(linkList->next);
//     linkList->next = NULL;
//     linkList->length = 0;
// }


// // 0 int main
// int main() {
//     LinkList linkList;
//     InitTheLinkList(&linkList);
//     InputLinkListByScanf(&linkList, linkList.next);
//     ExchangePartOfLinkList(&linkList);
//     PrintLinkList(&linkList);
//     ClearLinkList(&linkList);
//     return 0;
// }




// 1 Define the Node struct (the Body of the LinkList)
typedef struct Node {
    int number;
    struct Node *next;
} Node;

// 2 Define the LinkList struct (the Head of the LinkList)
// Including the headPtr and the length of linkList
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
    Node *headNode = (Node *)malloc(sizeof(Node));
    linkList->next = headNode;
    headNode->number = 0;
    headNode->next = NULL;
}

// 4 Input Array Thourgh scanf(!!USING THE Iterative Method!!)
// FunctionName: InputLinkListByScanf
// ParameterList: LinkList *linkList, Node *lastNode
// ReturnValue: Node *newlastNode (if input equals -1 then return NULL)
// Explaination: The number input will be set in the end of linkList
Node *InputLinkListByScanf(LinkList *linkList, Node *lastNode) {
    Node *newlastNode = (Node *)malloc(sizeof(Node));
    newlastNode->next = NULL;
    scanf("%d", &newlastNode->number);
    if (newlastNode->number == -1) {
        return NULL;
    } else {
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
        printf("%d ", node->number);
        node = node->next;
    }
    putchar('\n');
}

// 6 Exchange the part of the LinkList
// FunctionName: ExchangePartOfLinkList
// ParameterList: LinkList *linkList
// ReturnValue: void
void ExchangePartOfLinkList(LinkList *linkList) {
    int range[4];
    scanf("%d%d%d%d", &range[0], &range[1], &range[2], &range[3]);
    Node *node[4];
    int j = 0;
    Node *currentNode = linkList->next;
    for (int i = 0; i < range[3] + 1; i++) {
        if (i == range[0] - 1 || i == range[1] || i == range[3]) {
            node[j] = currentNode;
            j += 1;
        }
        currentNode = currentNode->next;
    }
    currentNode = node[1];
    for (int i = 0; i < range[2] - range[1] - 1; i++) {
        currentNode = currentNode->next;
    }
    node[3] = currentNode;
    Node *savedNode = node[0]->next;
    node[0]->next = node[3]->next;
    node[3]->next = savedNode;
    savedNode = node[2]->next;
    node[2]->next = node[1]->next;
    node[1]->next = savedNode;
}

// 7 Clear the LinkList
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
    free(linkList->next);
}

// 0 int main
int main() {
    LinkList linkList1;
    InitTheLinkList(&linkList1);
    InputLinkListByScanf(&linkList1, linkList1.next);
    ExchangePartOfLinkList(&linkList1);
    printf("The new list is:");
    PrintLinkList(&linkList1);
    ClearLinkList(&linkList1);
    return 0;
}
