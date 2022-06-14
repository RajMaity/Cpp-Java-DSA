// Sho has an array a consisting of n integers. An operation consists of choosing two distinct indices i and j and removing ai and aj from the array.

// For example, for the array [2,3,4,2,5], Sho can choose to remove indices 1 and 3. After this operation, the array becomes [3,2,5]. Note that after any operation, the length of the array is reduced by two.

// After he made some operations, Sho has an array that has only distinct elements. In addition, he made operations such that the resulting array is the longest possible.

// More formally, the array after Sho has made his operations respects these criteria:

// No pairs such that (i<j) and ai=aj exist.
// The length of a is maximized.
// Output the length of the final array.

// Input
// The first line contains a single integer t (1≤t≤103) — the number of test cases.

// The first line of each test case contains a single integer n (1≤n≤50) — the length of the array.

// The second line of each test case contains n integers ai (1≤ai≤104) — the elements of the array.

// Output
// For each test case, output a single integer — the length of the final array. Remember that in the final array, all elements are different, and its length is maximum.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp=n;
        vector<int> vec;
        set<int> st;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int tempInt;
            cin>>tempInt;
            vec.push_back(tempInt);
            st.insert(tempInt);
            mp[tempInt]=mp[tempInt]+1;
        }
        vec.assign(st.begin(),st.end());
        for(int i=0;i<vec.size();i++){
            n=n-(mp[vec[i]]-1);
        }
        if((temp-n)%2==1){
            n=n-1;
        }
        cout<<n<<endl;
    }
    return 0;
}
