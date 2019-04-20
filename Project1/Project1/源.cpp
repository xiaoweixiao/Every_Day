#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

//struct ListNode {
//int val;
//struct ListNode *next;
//ListNode(int x) :
//val(x), next(NULL) {
//}
//};
//class Solution {
//public:
//	ListNode* deleteDuplication(ListNode* pHead)
//	{
//		if (!pHead){
//			return nullptr;
//		}
//		ListNode* ret = pHead;
//		ListNode* pre = nullptr, *current = pHead;
//		while (current) {
//			bool shoud_delete = false;
//			if (current->next&&current->val == current->next->val){
//				shoud_delete = true;
//			}
//			if (!shoud_delete){
//				pre = current;
//				current = current->next;
//			}
//			else{
//				int val = current->val;
//				ListNode* pnext;
//				while (current && (current->val == val)) {
//					pnext = current->next;
//					delete current;
//					current = pnext;
//				}
//				if (pre == nullptr)
//					pHead = current;
//				else
//					pre->next = current;
//
//			}
//		}
//		return pHead;
//	}
//};
//int main()
//{
//	ListNode n1(1);
//	ListNode n2(2);
//	ListNode n3(3);
//	ListNode n4(3);
//	ListNode n5(4);
//	ListNode n6(4);
//	ListNode n7(5);
//	n1.next = &n2, n2.next = &n3, n3.next = &n4; n4.next = &n5; n5.next = &n6; n6.next = &n7;
//	Solution s;
//	s.deleteDuplication(&n1);
//}


//struct TreeNode {
//int val;
//struct TreeNode *left;
//struct TreeNode *right;
//TreeNode(int x) :
//val(x), left(NULL), right(NULL) {
//}
//};
//
//class Solution {
//public:
//	int pos;
//	char* Serialize(TreeNode *root) {
//		string s;
//		Serialize(root, s);
//		char *ret = new char[s.size() + 1];
//		strcpy(ret, s.c_str());
//		return ret;
//	}
//	TreeNode* Deserialize(char *str) {
//		pos = 0;
//		return Deserialize(str,&pos);
//	}
//	void Serialize(TreeNode *root, string& s){
//		if (root == nullptr){
//			s += '#';
//			return;
//		}
//		s += root->val - 128;
//		Serialize(root->left, s);
//		Serialize(root->right, s);
//	}
//	TreeNode * Deserialize(char *str, int* pos){
//		if (str[*pos] == '#'){
//			++(*pos);
//			return nullptr;
//		}
//		TreeNode *node = new TreeNode(str[*pos] + 128);
//		++(*pos);
//		node->left = Deserialize(str, pos);
//		node->right = Deserialize(str, pos);
//
//		return node;
//	}
//};

struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};

class Solution {
public:
	vector<vector<int> > Print(TreeNode* pRoot) {
		vector<vector<int>> ret;
		vector<int> level;
		if (pRoot == nullptr)return ret;

		queue<TreeNode*> que;
		que.push(pRoot);

		bool reorder = false;//ÊÇ·ñÐèÒªÄæÐò
		while (!que.empty())
		{
			level.clear();
			int num = que.size();

			for (int i = 0; i<num; i++)
			{
				TreeNode* temp = que.front();
				que.pop();
				level.push_back(temp->val);
				if (temp->left != nullptr)
					que.push(temp->left);
				if (temp->right != nullptr)
					que.push(temp->right);
			}
			if (reorder)
				reverse(level.begin(), level.end());
			ret.push_back(level);
			reorder = !reorder;
		}
		return ret;
	}
};