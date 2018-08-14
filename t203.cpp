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
//remove elements which have value val
ListNode* removeElements(ListNode* head, const int& val)
{
    ListNode* root = head;
    ListNode* prev = nullptr;
    while(root)
    {
        if(root->val == val && root == head)
        {
            ListNode* temp = root->next;
            delete root;
            root = head = temp;
        }
        else if(root->val == val)
        {
            ListNode* temp = root->next;
            delete root;
            prev->next = temp;
            root = temp;
        }
        else
        {
            prev = root;
            root = root->next;
        }
    }
    return head;
}

void DestroyListNode(const ListNode* root)
{
    if(root && root->next)
        DestroyListNode(root->next);
    delete root;
}
int main()
{
    ListNode* root = nullptr;
    for(unsigned i = 5; i > 0; --i)
        insert(root,3);
    insert(root,3);
    insert(root,3);
    insert(root,3);
    printListNode(root);
    printListNode(removeElements(root,3));
}
