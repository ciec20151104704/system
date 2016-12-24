#include <iostream>
#include <stdlib.h>
#define N 1
    struct Node
    {
        char name[40];
        int age;
        struct Node*next;
    };
    int main()
    {
        struct Node*head,*p,*tail;
        int i;
        head=new Node;
        head->next=0;
        tail=head;
        //scanf("%s",head->name);
        //scanf("%d",&head->age);
        for(i=0;i<N;i++)
        {
            p=new Node;
            scanf("%s",p->name);
            scanf("%d",&p->age);
            p->next=0;
            tail->next=p;
            tail=p;
        }
        p=head;
        while(p)
        {
            printf("%s %d\n",p->name,p->age);
            p=p->next;
        }
        system("pause");
        return 0;
        
    }
