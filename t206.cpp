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
    std::vector<int> v;
    while(root)
    {
        v.emplace_back(root->val);
        root = root->next;
    }
    ListNode* head = nullptr;
    for(const int& el : v)
        insert(head,el);
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
    for(unsigned i = 5; i > 0; --i)
        insert(root,i);
    printListNode(root);
    printListNode(reverseListNode(root));
    DestroyListNode(root);
}
