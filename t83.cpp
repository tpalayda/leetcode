#include <iostream>
#include <vector>
#include <iterator>

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(const int& x) : val(x), next(nullptr) {}
};
void insert(ListNode*& root, const int& val)
{
    ListNode* node = new ListNode(val);
    node->next = root;
    root = node;
}
void printListNode(const ListNode* root)
{
    while(root)
    {
        std::cout << root->val << " ";
        root = root->next;
    }
    std::cout << std::endl;
}
ListNode* reverseListNode(ListNode* root)
{
    if(!root  || !root->next)
        return root;
    ListNode* temp = root->next;
    root->next = nullptr;
    while(temp)
    {
        ListNode* node = temp->next;
        temp->next = root;
        root = temp;
        temp = node;
    }
    return root;
}
ListNode* deleteDuplicates(ListNode* head)
{
    ListNode* root = head;
    while(root && root->next)
    {
        if(root->val == root->next->val)
        {
            ListNode* node = root->next->next;
            delete root->next;
            root->next = node;
        }
        else
            root = root->next;
    }
    return head;
}
void DestroyListNode(const ListNode* root)
{
    if(root && root->next)
        DestroyListNode(root->next);
    delete root;
}
//Reverse Linked List
int main()
{
    ListNode* root = nullptr;
    insert(root,2);
    insert(root,1);
    insert(root,1);
    insert(root,1);
    insert(root,1);
    printListNode(root);
    printListNode(deleteDuplicates(root));
    DestroyListNode(root);
}
