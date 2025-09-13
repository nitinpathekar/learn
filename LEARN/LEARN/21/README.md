##  **1. Largest element in array**

```cpp
#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& arr) {
    int mx = arr[0];
    for (int x : arr) mx = max(mx, x);
    return mx;
}

int main() {
    vector<int> arr = {2, 5, 1, 8, 3};
    cout << "Largest: " << largestElement(arr) << endl;
}
```

---

##  **2. Second largest element**

```cpp
#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& arr) {
    int first = INT_MIN, second = INT_MIN;
    for (int x : arr) {
        if (x > first) {
            second = first;
            first = x;
        } else if (x > second && x != first) {
            second = x;
        }
    }
    return (second == INT_MIN ? -1 : second);
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << "Second Largest: " << secondLargest(arr) << endl;
}
```

---

##  **3. Reverse an array**

```cpp
#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr) {
    int l = 0, r = arr.size() - 1;
    while (l < r) swap(arr[l++], arr[r--]);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    reverseArray(arr);
    for (int x : arr) cout << x << " ";
}
```

---

##  **4. Check if array is sorted**

```cpp
#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++)
        if (arr[i] < arr[i - 1]) return false;
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << (isSorted(arr) ? "Sorted" : "Not Sorted");
}
```

---

##  **5. Remove duplicates from sorted array**

```cpp
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}

int main() {
    vector<int> arr = {1,1,2,2,3,3,4};
    int newLen = removeDuplicates(arr);
    for (int i = 0; i < newLen; i++) cout << arr[i] << " ";
}
```

---

##  **6. Move all zeros to end**

```cpp
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& arr) {
    int j = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) swap(arr[i], arr[j++]);
    }
}

int main() {
    vector<int> arr = {0,1,0,3,12};
    moveZeroes(arr);
    for (int x : arr) cout << x << " ";
}
```

---

##  **7. Rotate array by k**

```cpp
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7};
    rotate(arr, 3);
    for (int x : arr) cout << x << " ";
}
```

---

##  **8. Frequency of elements**

```cpp
#include <bits/stdc++.h>
using namespace std;

void frequency(vector<int>& arr) {
    unordered_map<int,int> mp;
    for (int x : arr) mp[x]++;
    for (auto it : mp) cout << it.first << " -> " << it.second << endl;
}

int main() {
    vector<int> arr = {1,2,2,3,3,3,4};
    frequency(arr);
}
```



##  **9. Find Missing Number (0 to n)**

```cpp
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr) {
    int n = arr.size();
    int sum = n * (n + 1) / 2;
    int arrSum = accumulate(arr.begin(), arr.end(), 0);
    return sum - arrSum;
}

int main() {
    vector<int> arr = {3,0,1};
    cout << "Missing: " << missingNumber(arr) << endl;
}
```

---

##  **10. Single Number (appears once, rest twice)**

```cpp
#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& arr) {
    int ans = 0;
    for (int x : arr) ans ^= x; // XOR cancels duplicates
    return ans;
}

int main() {
    vector<int> arr = {4,1,2,1,2};
    cout << "Single Number: " << singleNumber(arr);
}
```

---

##  **11. Two Sum**

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int,int> mp;
    for (int i = 0; i < arr.size(); i++) {
        int need = target - arr[i];
        if (mp.count(need)) return {mp[need], i};
        mp[arr[i]] = i;
    }
    return {};
}

int main() {
    vector<int> arr = {2,7,11,15};
    int target = 9;
    auto ans = twoSum(arr, target);
    cout << ans[0] << " " << ans[1];
}
```

---

##  **12. Best Time to Buy and Sell Stock**

```cpp
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int mn = INT_MAX, profit = 0;
    for (int p : prices) {
        mn = min(mn, p);
        profit = max(profit, p - mn);
    }
    return profit;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    cout << "Max Profit: " << maxProfit(arr);
}
```

---

##  **13. Maximum Subarray (Kadane)**

```cpp
#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& arr) {
    int sum = arr[0], best = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    return best;
}

int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Max Subarray Sum: " << maxSubArray(arr);
}
```

---

##  **14. Union of Two Arrays**

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> arrayUnion(vector<int>& a, vector<int>& b) {
    set<int> s(a.begin(), a.end());
    s.insert(b.begin(), b.end());
    return vector<int>(s.begin(), s.end());
}

int main() {
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {1,2,3};
    auto ans = arrayUnion(a, b);
    for (int x : ans) cout << x << " ";
}
```

---

##  **15. Intersection of Two Arrays**

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& a, vector<int>& b) {
    unordered_set<int> s(a.begin(), a.end());
    vector<int> ans;
    for (int x : b) {
        if (s.count(x)) {
            ans.push_back(x);
            s.erase(x);
        }
    }
    return ans;
}

int main() {
    vector<int> a = {1,2,2,1};
    vector<int> b = {2,2};
    auto ans = intersection(a, b);
    for (int x : ans) cout << x << " ";
}
```

---

##  **16. Majority Element (> n/2 times)**

```cpp
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr) {
    int count = 0, candidate = -1;
    for (int x : arr) {
        if (count == 0) candidate = x;
        count += (x == candidate) ? 1 : -1;
    }
    return candidate;
}

int main() {
    vector<int> arr = {3,2,3};
    cout << "Majority: " << majorityElement(arr);
}
```

---

##  **17. Rearrange Array (Pos, Neg alternatively)**

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int>& arr) {
    vector<int> pos, neg;
    for (int x : arr) (x >= 0 ? pos : neg).push_back(x);
    
    vector<int> ans;
    int i = 0, j = 0;
    while (i < pos.size() && j < neg.size()) {
        ans.push_back(pos[i++]);
        ans.push_back(neg[j++]);
    }
    while (i < pos.size()) ans.push_back(pos[i++]);
    while (j < neg.size()) ans.push_back(neg[j++]);
    return ans;
}

int main() {
    vector<int> arr = {1, -2, 3, -4, -1, 4};
    auto ans = rearrange(arr);
    for (int x : ans) cout << x << " ";
}
```

---

##  **18. Leaders in Array (greater than right side)**

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> ans;
    int n = arr.size();
    int maxRight = arr[n-1];
    ans.push_back(maxRight);
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            ans.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = {16,17,4,3,5,2};
    auto ans = leaders(arr);
    for (int x : ans) cout << x << " ";
}
```

---

##  **19. Longest Consecutive Sequence**

```cpp
#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& arr) {
    unordered_set<int> s(arr.begin(), arr.end());
    int longest = 0;
    for (int x : arr) {
        if (!s.count(x-1)) { // start of sequence
            int y = x;
            while (s.count(y)) y++;
            longest = max(longest, y - x);
        }
    }
    return longest;
}

int main() {
    vector<int> arr = {100,4,200,1,3,2};
    cout << "Longest Consecutive: " << longestConsecutive(arr);
}
```

---

##  **20. Sort Colors (0,1,2)**

```cpp
#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size()-1;
    while (mid <= high) {
        if (arr[mid] == 0) swap(arr[low++], arr[mid++]);
        else if (arr[mid] == 1) mid++;
        else swap(arr[mid], arr[high--]);
    }
}

int main() {
    vector<int> arr = {2,0,2,1,1,0};
    sortColors(arr);
    for (int x : arr) cout << x << " ";
}
```




##  **21. Trapping Rain Water**

```cpp
#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    vector<int> left(n), right(n);
    left[0] = height[0];
    for (int i = 1; i < n; i++) left[i] = max(left[i-1], height[i]);
    right[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--) right[i] = max(right[i+1], height[i]);
    int water = 0;
    for (int i = 0; i < n; i++) water += min(left[i], right[i]) - height[i];
    return water;
}

int main() {
    vector<int> h = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Trapped Water: " << trap(h);
}
```

---

##  **22. Maximum Product Subarray**

```cpp
#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& arr) {
    int curMax = arr[0], curMin = arr[0], ans = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < 0) swap(curMax, curMin);
        curMax = max(arr[i], curMax * arr[i]);
        curMin = min(arr[i], curMin * arr[i]);
        ans = max(ans, curMax);
    }
    return ans;
}

int main() {
    vector<int> arr = {2,3,-2,4};
    cout << "Max Product: " << maxProduct(arr);
}
```

---

##  **23. Subarray Sum Equals K**

```cpp
#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& arr, int k) {
    unordered_map<int,int> mp;
    mp[0] = 1;
    int sum = 0, count = 0;
    for (int x : arr) {
        sum += x;
        if (mp.count(sum - k)) count += mp[sum - k];
        mp[sum]++;
    }
    return count;
}

int main() {
    vector<int> arr = {1,1,1};
    int k = 2;
    cout << "Count: " << subarraySum(arr, k);
}
```

---

##  **24. Sliding Window Maximum**

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    deque<int> dq;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++) {
        if (!dq.empty() && dq.front() == i - k) dq.pop_front();
        while (!dq.empty() && arr[dq.back()] < arr[i]) dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1) ans.push_back(arr[dq.front()]);
    }
    return ans;
}

int main() {
    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    auto res = maxSlidingWindow(arr, k);
    for (int x : res) cout << x << " ";
}
```

---

##  **25. Median of Two Sorted Arrays**

```cpp
#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
    if (A.size() > B.size()) return findMedianSortedArrays(B, A);
    int n = A.size(), m = B.size();
    int low = 0, high = n;
    while (low <= high) {
        int i = (low + high) / 2;
        int j = (n + m + 1) / 2 - i;

        int leftA = (i == 0 ? INT_MIN : A[i-1]);
        int rightA = (i == n ? INT_MAX : A[i]);
        int leftB = (j == 0 ? INT_MIN : B[j-1]);
        int rightB = (j == m ? INT_MAX : B[j]);

        if (leftA <= rightB && leftB <= rightA) {
            if ((n+m)%2==0) 
                return (max(leftA,leftB)+min(rightA,rightB))/2.0;
            else return max(leftA,leftB);
        } else if (leftA > rightB) high = i - 1;
        else low = i + 1;
    }
    return 0.0;
}

int main() {
    vector<int> A = {1,3};
    vector<int> B = {2};
    cout << "Median: " << findMedianSortedArrays(A,B);
}
```

---

##  **26. Merge Intervals**

```cpp
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (auto it : intervals) {
        if (ans.empty() || ans.back()[1] < it[0]) ans.push_back(it);
        else ans.back()[1] = max(ans.back()[1], it[1]);
    }
    return ans;
}

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    auto ans = merge(intervals);
    for (auto it : ans) cout << "[" << it[0] << "," << it[1] << "] ";
}
```

---

##  **27. Subarray with Maximum XOR**

```cpp
#include <bits/stdc++.h>
using namespace std;

int maxSubarrayXOR(vector<int>& arr) {
    int n = arr.size();
    int ans = 0, prefix = 0;
    unordered_set<int> s;
    for (int x : arr) {
        prefix ^= x;
        ans = max(ans, prefix);
        for (int p : s) ans = max(ans, prefix ^ p);
        s.insert(prefix);
    }
    return ans;
}

int main() {
    vector<int> arr = {8,1,2,12};
    cout << "Max XOR Subarray: " << maxSubarrayXOR(arr);
}
```

---

##  **28. Count Inversions (Merge Sort)**

```cpp
#include <bits/stdc++.h>
using namespace std;

long long mergeSort(vector<int>& arr, int l, int r) {
    if (l >= r) return 0;
    int m = (l + r) / 2;
    long long inv = mergeSort(arr, l, m) + mergeSort(arr, m+1, r);

    vector<int> temp;
    int i = l, j = m+1;
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else {
            temp.push_back(arr[j++]);
            inv += (m - i + 1);
        }
    }
    while (i <= m) temp.push_back(arr[i++]);
    while (j <= r) temp.push_back(arr[j++]);
    for (int k = l; k <= r; k++) arr[k] = temp[k - l];
    return inv;
}

int main() {
    vector<int> arr = {2,4,1,3,5};
    cout << "Inversions: " << mergeSort(arr,0,arr.size()-1);
}
```

---

##  **29. Find Duplicate Number (Floyd’s Cycle)**

```cpp
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& arr) {
    int slow = arr[0], fast = arr[0];
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    fast = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main() {
    vector<int> arr = {1,3,4,2,2};
    cout << "Duplicate: " << findDuplicate(arr);
}
```

---

##  **30. Maximum Circular Subarray Sum**

```cpp
#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int>& arr) {
    int sum = arr[0], best = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    return best;
}

int maxSubarraySumCircular(vector<int>& arr) {
    int maxKadane = kadane(arr);
    int total = accumulate(arr.begin(), arr.end(), 0);
    for (int& x : arr) x = -x;
    int maxWrap = total + kadane(arr);
    return (maxWrap == 0 ? maxKadane : max(maxKadane, maxWrap));
}

int main() {
    vector<int> arr = {1,-2,3,-2};
    cout << "Max Circular Subarray Sum: " << maxSubarraySumCircular(arr);
}

```
