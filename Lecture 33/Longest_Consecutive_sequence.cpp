class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int>s;

        for (auto x : nums) {
            s.insert(x);
        }

        int count = 0;
        int final_ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (s.count(nums[i] - 1) == 1) {
                continue;
            } else {

                //This is the starting point of the sequence.

                count = 0;
                int x = nums[i];
                while (s.count(x) == 1) {
                    x++;
                    count++;
                }
                final_ans = max(count, final_ans);
            }
        }

        return final_ans;
    }
};

//O(nlogn): Sort mar do and check karlo sequence.
//O(n): Hashing




// x y z t m o p q

// 2N;

// 1 2 3 4 5 6 7 8:


// 1->8: count 8 final_ans=8;

// 2 (x)
// 3(x)
// 4
// O(n+n-1): O(2n-1);
// //O(n);
