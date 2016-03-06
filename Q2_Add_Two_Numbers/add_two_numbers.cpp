/*************************************************************************
* 文件: add_two_numbers.cpp
* 作者: fantasy
* 邮箱: fantasy@gmail.com 
* 创建时间: 2016年03月06日 星期日 08时49分26秒
*************************************************************************/

#include<iostream>
using namespace std;


struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
};

class Solution{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        struct ListNode* result = NULL;
        struct ListNode* tmp = NULL;
        struct ListNode* l_tmp = NULL;

        int val = 0;
        int quotient = 0;
        int remaider = 0;

        if (NULL != l1 || NULL != l2)
        {
            if (NULL == l1)
            {
                val = l2->val;
                l2 = l2->next;
            }
            else if (NULL == l2)
            {
                val = l1->val;
                l1 = l1->next;
            }
            else
            {
                val = l1->val + l2->val;
                l1 = l1->next;
                l2 = l2->next;
            }

            remaider = val % 10;
            quotient = val / 10;
            tmp = new struct ListNode(remaider);
            
            result = l_tmp = tmp;
        }
        while(NULL != l1 || NULL != l2)
        {
            if (NULL == l1)
            {
                val = l2->val + quotient;
                l2 = l2->next;
            }
            else if (NULL == l2)
            {
                val = l1->val + quotient;
                l1 = l1->next;
            }
            else
            {
                val = l1->val + l2->val + quotient;
                l1 = l1->next;
                l2 = l2->next;
            }

            remaider = val % 10;
            quotient = val / 10;
            tmp = new struct ListNode(remaider);

            l_tmp->next = tmp;
            l_tmp = tmp;
        }

        if (0 != quotient)
        {
            tmp = new struct ListNode(quotient);
            l_tmp->next = tmp;
            l_tmp = tmp;
        }
        tmp->next = NULL;

        return result;
    }
};

struct ListNode* creat_list(int ele[], int arr_size)
{
    struct ListNode* head, *pf, *pb;
    
    for(int i = 0; i < arr_size; i++)
    {
        pb = new struct ListNode(ele[i]);

        if (0 == i)
        {
            head = pf = pb;
        }
        else
        {
            pf->next = pb;
            pf = pb;
        }
    }
    pb->next = NULL;

    return head;
}
int main()
{
    Solution so;
    struct ListNode *l1 = NULL;
    struct ListNode *l2 = NULL;
    struct ListNode *result = NULL;
    
    int l1_ele[] = {1, 8};
    int l2_ele[] = {0};
    
    l1 = creat_list(l1_ele, sizeof(l1_ele) / sizeof(l1_ele[0]));
    l2 = creat_list(l2_ele, sizeof(l2_ele) / sizeof(l2_ele[0]));
    
    result = so.addTwoNumbers(l1, l2);

    cout << "l1 val:" << endl;
    while(NULL != l1)
    {
        cout << l1->val << endl;

        l1 = l1->next;
    }
  
    cout << "l2 val:" << endl;
    while(NULL != l2)
    {
        cout << l2->val << endl;

        l2 = l2->next;
    }

    while(NULL != result)
    {
        cout << result->val << endl;

        result = result->next;
    }

    return 0;
}

