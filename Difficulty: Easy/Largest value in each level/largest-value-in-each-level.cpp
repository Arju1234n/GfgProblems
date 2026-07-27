class Solution {
public:
    vector<int> largestValues(Node* root) {

        vector<int> ans;

        if(root == NULL)
            return ans;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){

            int size = q.size();

            int maxi = INT_MIN;

            for(int i = 0; i < size; i++){

                Node* curr = q.front();
                q.pop();

                maxi = max(maxi, curr->data);

                if(curr->left)
                    q.push(curr->left);

                if(curr->right)
                    q.push(curr->right);
            }

            ans.push_back(maxi);
        }

        return ans;
    }
};