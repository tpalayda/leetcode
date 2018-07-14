#include <iostream>

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(const int& x) : val(x), next(NULL) {}
};
void insert(ListNode*& root,const int& val)
{
    ListNode* node = new ListNode(val);
    node->next = root;
    root = node;
}
void printLinkedList(ListNode* root)
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
    ListNode* l1 = nullptr;
    ListNode* l2 = nullptr;
    insert(l1,3);
    insert(l1,4);
    insert(l1,2);
    printLinkedList(root);
}
