class Solution {
public:
    string addBinary(string& a, string& b) {
        int i = 0, j =0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string s = "";
        int carry = 0;
        int na, nb;
        int res;
        while(i < a.size() || j < b.size()){
            na = (i < a.size())? a[i]-'0' : 0;
            nb = (j < b.size())? b[i]-'0' : 0;
            res = na + nb + carry;
            carry = (res > 1)? 1 : 0;
            res = res%2;
            s += to_string(res);
            i++;
            j++;
        }
        if(carry == 1) s+="1";
        reverse(s.begin(), s.end());
        return s;
    }
};