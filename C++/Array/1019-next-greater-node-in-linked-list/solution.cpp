class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> vec;
        stack<int> s;
        ListNode* temp = head;
        
        // Convert the linked list to a vector
        while (temp != NULL) {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        
        // Prepare the result vector and initialize it with zeros
        vector<int> ans(vec.size(), 0);
        
        // Traverse the vector in reverse order
        for (int i = vec.size() - 1; i >= 0; i--) {
            // Pop from stack until the top of the stack is greater than vec[i]
            while (!s.empty() && s.top() <= vec[i]) {
                s.pop();
            }
            
            // If stack is not empty, the top of the stack is the next larger element
            if (!s.empty()) {
                ans[i] = s.top();
            }
            
            // Push the current value onto the stack
            s.push(vec[i]);
        }
        
        return ans;
    }
};
