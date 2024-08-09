class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.empty()) return nullptr;

        stack<TreeNode*> st;
        TreeNode* root = new TreeNode(preorder[0]);
        st.push(root);
        int n = preorder.size();

        for(int i=1; i<n; i++){
            int num = preorder[i];
            TreeNode* newNode = new TreeNode(num);
            
            if(!st.empty()){
                if(st.top()->val > num) st.top()->left=newNode;
                else{
                    TreeNode* itr=NULL;

                    while(!st.empty() && st.top()->val<num){
                        itr = st.top();   st.pop();
                    }
                    itr->right=newNode;
                }
            }
            st.push(newNode);
        }

        return root;
    }
};