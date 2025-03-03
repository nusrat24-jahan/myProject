class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>mergedArray;
        int id1=0;
        int id2=0;
        int n1=nums1.size();
        while (id1<nums1.size()&&id2<nums2.size()){
            if(nums1[id1][0]==nums2[id2][0]){
               mergedArray.push_back({nums1[id1][0],nums1[id1][1]+nums2[id2][1]});
             
             id1++;
             id2++;
            }
            else if(nums1[id1][0] < nums2[id2][0]){
               mergedArray.push_back({nums1[id1][0],nums1[id1][1]});
               id1++;
            }
                else if(nums1[id1][0] > nums2[id2][0]){
                 mergedArray.push_back({nums2[id2][0],nums2[id2][1]});
                 id2++;
                }
        }
                while (id1 < nums1.size()) {
            mergedArray.push_back(nums1[id1]);
            id1++;
        }
        while (id2 < nums2.size()) {
            mergedArray.push_back(nums2[id2]);
            id2++;
        }

            
            return mergedArray;
        }
        

    
};
