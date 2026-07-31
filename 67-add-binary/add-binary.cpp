class Solution {
public:
    string addBinary(string& a, string& b) {
        int i = a.size()-1, j = b.size()-1;
        string s = "";
        int carry = 0;
        int na, nb;
        int res;
        while(i >= 0 || j >= 0){
            na = (i >= 0)? a[i]-'0' : 0;
            nb = (j >= 0)? b[j]-'0' : 0;
            res = na + nb + carry;
            carry = (res > 1)? 1 : 0;
            res = res%2;
            s += to_string(res);
            i--;
            j--;
        }
        if(carry == 1) s+="1";
        reverse(s.begin(), s.end());
        return s;
    }
};