class Encrypter {
public:
    unordered_map<char, string>um;
    vector<string>d;
    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {

        for (int i = 0; i < keys.size(); i++) {
            um[keys[i]] = values[i];
        }

        /*
            Unordered_Map:
            Key    Value
            a ---> ei
            b ---> zf
            c ---> ei
            d ---> am

        */
        d = dictionary;
    }

    string encrypt(string word1) {//abcd
        string ans = "";
        for (int i = 0; i < word1.size(); i++) {

            if (um.find(word1[i]) == um.end()) {
                return "";
            }
            ans += um[word1[i]];
        }
        return ans;
    }


    int decrypt(string word2) {
        //eizfeiam: words jo dictionary me hain
        //Ulta kaam kare:

        //Iterate karo dictionary par and encrypt karo and check
        //karo ki kitne word aapke eizfeiam bante hain.

        int count = 0;

        for (int i = 0; i < d.size(); i++) {
            string s = encrypt(d[i]);
            if (s == word2) {
                count++;
            }
        }

        return count;
    }
};

/**
 * Your Encrypter object will be instantiated and called as such:
 * Encrypter* obj = new Encrypter(keys, values, dictionary);
 * string param_1 = obj->encrypt(word1);
 * int param_2 = obj->decrypt(word2);
 */



// b->ca;

//[[["b"],["ca"],["aaa","cacbc","bbaba","bb"]],["bbb"],["cacaca"]]


//bbaba:  b->ca
// b->ca
// a->(x)
// b->ca:
// a->(x)


