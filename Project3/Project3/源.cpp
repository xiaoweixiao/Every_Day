#include<iostream>
#include<algorithm>
using namespace std;

struct ListNode {
	int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int num1 = l1->val, num2 = l2->val;
		while (l1)
		{
			l1 = l1->next;
			num1 = l1->val * 10 + num1;
		}
		while (l2)
		{
			l2 = l2->next;
			num2 = l2->val * 10 + num2;
		}
		
		int num = num1 + num2;
		ListNode*ret = new ListNode(num % 10);
		while (num)
		{
			num = num / 10;
			int temp = num % 10;
			ret->next = new ListNode(temp);
		}
		return ret;
	}
};
int main()
{

}