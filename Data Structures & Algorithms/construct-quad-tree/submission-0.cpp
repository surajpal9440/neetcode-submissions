/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = topRight = bottomLeft = bottomRight = NULL;
    }
};
*/

class Solution {
public:
    
    Node* build(vector<vector<int>>& grid, int r, int c, int size) {
        
        // Check if all values are same
        bool same = true;
        int first = grid[r][c];
        
        for(int i = r; i < r + size; i++) {
            for(int j = c; j < c + size; j++) {
                if(grid[i][j] != first) {
                    same = false;
                    break;
                }
            }
            if(!same) break;
        }
        
        // If same → Leaf node
        if(same) {
            return new Node(first, true);
        }
        
        // Else divide into 4 parts
        int half = size / 2;
        
        Node* node = new Node(1, false); // val can be anything
        
        node->topLeft = build(grid, r, c, half);
        node->topRight = build(grid, r, c + half, half);
        node->bottomLeft = build(grid, r + half, c, half);
        node->bottomRight = build(grid, r + half, c + half, half);
        
        return node;
    }
    
    Node* construct(vector<vector<int>>& grid) {
        return build(grid, 0, 0, grid.size());
    }
};