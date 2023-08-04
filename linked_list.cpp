#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct node{

    int data;
    struct node *next;
};

struct node *create_node(int data)
{
       struct node *new_node =(struct node*) malloc(sizeof(struct node));
       
        new_node->data = data;
        new_node->next = NULL;

       return new_node;
}

struct node *append(struct node *head,int data)
{
      struct node *new_node = create_node(data);
      
      if(head == NULL)return new_node;

      struct node *temp = head;

      while(temp->next != NULL)
      {
          temp = temp->next;
      } 

      temp->next = new_node;

      

}
struct node *prepend(struct node *head , int data)
{
    struct node *new_node = create_node(data);

    if(head == NULL)return new_node;

    new_node->next = head;
    

    return new_node;


}
void print(struct node *head)
{
    struct node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }
}

struct node *delete_pos(struct node *head,int pos)
{
    struct node *temp = head;
    
    int counter = 1;
    while(counter < pos-1)
    {
         temp = temp->next;

         counter++;
    }

    temp->next = temp->next->next;

    return head;
}
int main()
{
    struct node *head = NULL;
    head = append(head,5);
    append(head,21);
    append(head,7);
    head = prepend(head,23);
    delete_pos(head,2);
    print(head);
}