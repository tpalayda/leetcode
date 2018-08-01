#include <iostream>

//Merge Two Sorted Lists

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(const int& x) : val(x), next(nullptr) {}
};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
    if(!l1)
        return l2;
    if(!l2)
        return l1;
    ListNode* result;
    return result;
}
void insert(ListNode*& root, const int& val)
{
    ListNode* node = new ListNode(val);
    node->next = root;
    root = node;
}
void printLinkedList(const ListNode* root)
{
    while(root)
    {
        std::cout << root->val << " ";
        root = root->next;
    }
    std::cout << std::endl;
}
int main()
{
    ListNode* root1 = nullptr;
    ListNode* root2 = nullptr;
    insert(root1,4);
    insert(root1,2);
    insert(root1,2);
    insert(root2,4);
    insert(root2,3);
    insert(root2,1);
    printLinkedList(root1);
    printLinkedList(root2);
    printLinkedList(mergeTwoLists(root1,root2)); 
}
