
class Solution {
public:
    vector<vector<int>> adj;
    vector<int> ans;

    void dfs(int node, vector<int>& parent, string& s,
             vector<int>& last) {

        int ch = s[node] - 'a';
        int old = last[ch];

        // Find the closest ancestor with the same character
        if (old != -1) {
            adj[old].push_back(node);
        }
        else if (node != 0) {
            adj[parent[node]].push_back(node);
        }

        // Current node becomes the latest ancestor
        last[ch] = node;

        // Traverse original children
        // We need original tree separately for this traversal
        for (int child : original[node]) {
            dfs(child, parent, s, last);
        }

        // Restore previous ancestor
        last[ch] = old;
    }

    vector<vector<int>> original;

    int calculate(int node) {
        int size = 1;

        for (int child : adj[node]) {
            size += calculate(child);
        }

        return ans[node] = size;
    }

    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = parent.size();

        adj.resize(n);
        original.resize(n);
        ans.resize(n);

        for (int i = 1; i < n; i++) {
            original[parent[i]].push_back(i);
        }

        vector<int> last(26, -1);

        dfs(0, parent, s, last);

        calculate(0);

        return ans;
    }
};
