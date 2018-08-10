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
bool hasCycle(ListNode* head)
{
    if(!head)
        return false;
    ListNode* root = head;
    while(head->next && head->next->next)
    {
        root = root->next;
        head = head->next->next;
        if(root == head)
            return true;
    }
    return false;
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
    for(unsigned i = 5; i > 0; --i)
        insert(root,i);
    printListNode(root);
    printListNode(reverseListNode(root));
    DestroyListNode(root);
}
