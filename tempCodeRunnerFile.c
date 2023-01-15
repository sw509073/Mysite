#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int data){
    struct node* p;
    p = (struct node*)malloc(sizeof(struct node));
    p->left=NULL;
    p->right=NULL;
    p->data=data;
    return p;
}
int main(){
    struct node* p1= createNode(2);
    struct node* p2= createNode(4);
    struct node* p3= createNode(3);
    p1->left=p2;
    p1->right=p3;
    

}