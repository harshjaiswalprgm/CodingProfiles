//TLE(Time Limite Excede)
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         if(head==NULL || head->next==NULL)
//         return NULL;

//         ListNode *slow =head;
//         ListNode *fast =head;
//         ListNode *neww  =head;


//         while(fast->next && fast->next->next){
//             slow=slow->next;
//             fast=fast->next->next;


//             if(slow=fast){
//                 while(slow!=neww){
//                     slow=slow->next;
//                     fast=fast->next;
//                 }
//                 return neww;
//             }
//         }
        
//         return NULL;
//     }
// };




//Using Map Approach
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return NULL;
        map<ListNode*,bool> visited;
        ListNode* temp = head;

        while(temp != NULL){
            if(visited[temp] == true) return temp;
            visited[temp] = true;
            temp=temp->next;
        }
        return NULL;
    }
};


//Floyd Detection Algorithm
class Solution {
private:
    ListNode* intersect(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(slow && fast){
            fast = fast->next;
            if(fast) fast=fast->next;
            slow = slow->next;

            if(slow == fast) return slow;
        }
        return NULL;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return NULL;

        ListNode* intersection = intersect(head);
        if(!intersection) return NULL;
        ListNode* slow = head;
        while(slow != intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
    }
};

