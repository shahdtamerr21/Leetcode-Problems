#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> res;
        for (int num : nums2) {
            if (s.erase(num)) {
                res.push_back(num);
            }
        }
        return res;
    }
};