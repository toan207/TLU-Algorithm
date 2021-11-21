#include <bits/stdc++.h>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

string Sum(string a, string b){
        while (a.size() < b.size()) a = '0' + a;
        while (a.size() > b.size()) b = '0' + b;
        
        int cache = 0;
        string c;
        for (int i=a.size()-1; i>=0; i--){
            int sum = (a[i] - '0') + (b[i] - '0') + cache;
            cache = sum/10;
            c = to_string(sum%10) + c;
        }
        
        if (cache > 0) c = to_string(cache) + c;
        
        return c;
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string num1, num2;
        
        while (l1 != NULL){
            num1 = to_string(l1->val) + num1;
            l1 = l1->next;
        }
        
        while (l2 != NULL){
            num2 = to_string(l2->val) + num2;
            l2 = l2->next;
        }
        
        string sum = Sum(num1, num2);
        
        ListNode *ans = new ListNode(sum[0] - '0');
        
        for (int i=1; i<sum.size(); i++){
            ListNode *tmp = ans;
            ans = new ListNode(sum[i] - '0', tmp);
        }
        
        return ans;
    }

int main(){
    ListNode *a3 = new ListNode(3);
    ListNode *a2 = new ListNode(4,a3);
    ListNode *a1 = new ListNode(2,a2);

    ListNode *b3 = new ListNode(4);
    ListNode *b2 = new ListNode(6,b3);
    ListNode *b1 = new ListNode(5,b2);

    ListNode *c = addTwoNumbers(a1,b1);

    while (c != NULL){
        cout << c->val;
        c = c->next;
    }
    return 0;
}