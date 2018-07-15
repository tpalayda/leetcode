#include <iostream>

//342 + 465 = 807
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
void deleteLinkedList(ListNode*& root)
{
    while(root)
    {
        ListNode* temp = root->next;
        delete root;
        root = temp;
    }
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
ListNode* addTwoNumbers(const ListNode* l1,const ListNode* l2)
{
    ListNode* l3 = nullptr;
    ListNode** cur = &l3;
    unsigned remainder = 0;
    while(l1 || l2)
    {
        unsigned val1 = l1 ? l1->val : 0;
        unsigned val2 = l2 ? l2->val : 0;
        unsigned sum = remainder + val1 + val2;
        remainder = sum/10;
        *cur = new ListNode(sum % 10);
        cur = &(*cur)->next;

        if(l1)
            l1 = l1->next;
        if(l2)
            l2 = l2->next;
    }
    if(remainder > 0)
        *cur = new ListNode(remainder);
    return l3;
}
int main()
{
    ListNode* l1 = nullptr;
    ListNode* l2 = nullptr;
    insert(l1,9);
    insert(l1,9);
    insert(l2,1);
    printLinkedList(l1);
    printLinkedList(l2);
    printLinkedList(addTwoNumbers(l1,l2));
    deleteLinkedList(l1);
    deleteLinkedList(l2);
}
