/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int N, int M, ListNode* head) {
    vector<vector<int>> res(N, vector<int>(M, -1));
        int r = 0, c = 0, k = 0;
        int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        while (head != nullptr) {
            res[r][c] = head->val;
            head = head->next;

            if (head == nullptr) {
            break;
            }
            while ((r + dir[k][0] < 0 || r + dir[k][0] >= N ||c + dir[k][1] < 0 || c + dir[k][1] >= M || res[r + dir[k][0]][c + dir[k][1]] >= 0)) {
            k = (k + 1) % 4;  // Update direction index
            }
            r += dir[k][0];
            c += dir[k][1];
        }
        return res;
    }
};