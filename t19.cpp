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
/*ListNode* removeNthFromEnd(ListNode* head, const int& n)
{
    ListNode* root = head;
    int size = 0;
    while(root && ++size)
        root = root->next;
    root = head;
    size -= n;
    while(size > 0 && --size)
        root = root->next;
    root->next = root->next->next;
    return head;
}*/
ListNode* removeNthFromEnd(ListNode* head, const int& n)
{
    if(n == 1 && head && !head->next)
        return nullptr;
    ListNode* root = head;
    int index = 0;
    while(root && ++index)
        root = root->next;
    root = head;
    int NumberOfElement = index - n;
    index = 1;
    ListNode* next = nullptr;
    while(root && index++ != NumberOfElement)
        root = root->next;
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
    for(int i = 2; i > 0; --i)
        insert(root,i);
    printListNode(root);
    printListNode(removeNthFromEnd(root,2));
    //DestroyListNode(root);
}
