#include"Dll.h"

void PrintNode()
{
        printf("\n\nData is printed as below\nPrev\t\tValue\t\tAddress\t\tNext\n");
        if(!getHeadNode())
        {
                printf("(nil)\t\t(nil)\t\t(nil)\t\t(nil)\n");
                return;
        }

        struct Node * MyNode = getHeadNode();
        while(MyNode->pNext != NULL)
        {
                printf("%p\t\t%d\t\t%p\t\t%p\n",(void*)MyNode->pPrev,MyNode->Data,(void*)MyNode,(void*)MyNode->pNext);
                MyNode = MyNode->pNext;
        }
        printf("%p\t\t%d\t\t%p\t\t%p\n",(void*)MyNode->pPrev,MyNode->Data,(void*)MyNode,(void*)MyNode->pNext);
}

