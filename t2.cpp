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
    unsigned long long exp = 1;
    unsigned long long num1 = 0, num2 = 0;
    while(l1)
    {
        num1 += l1->val*exp;
        exp *= 10;
        l1 = l1->next;
    }
    exp = 1;
    while(l2)
    {
        num2 += l2->val*exp;
        exp *= 10;
        l2 = l2->next;
    }
    unsigned long long sum = num1 + num2;
    while(exp <= sum)
        exp *= 10;
    std::cout << "exp:" << exp << std::endl;

    ListNode* l3 = nullptr;
    for(unsigned long long i = exp/10; i; i /= 10)
        insert(l3,sum/i%10); 
    return l3;
}
int main()
{
    ListNode* l1 = nullptr;
    ListNode* l2 = nullptr;
    insert(l1,9);
    insert(l2,9);
    insert(l2,9);
    insert(l2,9);
    insert(l2,9);
    insert(l2,9);
    insert(l2,9);
    insert(l2,9);
    insert(l2,9);
    insert(l2,9);
    insert(l2,1);
    printLinkedList(l1);
    printLinkedList(l2);
    printLinkedList(addTwoNumbers(l1,l2));
    deleteLinkedList(l1);
    deleteLinkedList(l2);
}
