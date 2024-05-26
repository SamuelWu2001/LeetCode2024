class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str = "";
        for (auto str : strs) {
            int length = str.size();
            encoded_str += to_string(length) + "#" + str;
        }
        return encoded_str;
    }

    vector<string> decode(string s) {
        cout << s << endl;
        vector<string> decoded_array;
        string length = "";
        string temp = "";
        int lengthNum = 0;
        int i = 0;
        while (i < s.size()) {
            while(i < s.size() && s[i] != '#') {
                length += s[i];
                i++;
            }
            lengthNum = stoi(length);
            temp = s.substr(i+1, lengthNum);
            decoded_array.push_back(temp);
            i+=lengthNum+1;
            length = "";
            lengthNum = 0;
        }
        return decoded_array;
    }
};



// ["neet","code","love","you"]
// 4$neet4$code4$love3you

// ["ne4etsffsdfsdf","cod2e","love","you"]
// 14$ne4etsffsdfsdf5cod2e4love3you
