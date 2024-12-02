#include <string>
#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {

        bool result = 1;
        unsigned int modulo = 11;
        int input = x;
        std::string reversed_str = "";
        std::string base_str = "";
        std::string append_str = "";

        /*If x is negative*/
        if (x < 0) {
            result = 0;
        }
        /*If x is zero*/
        else if (x == 0) {
            result = 1;
        }
        /*If x is more than 0*/
        else
        {
            /*Making string out of the number*/
            while (input != 0) {
                modulo = input % 10;
                input = int(input / 10);

                /*Switch statement to add the string of modulo*/
                switch (modulo) {
                case 0:
                    append_str = '0';
                    break;
                case 1:
                    append_str = '1';
                    break;
                case 2:
                    append_str = '2';
                    break;
                case 3:
                    append_str = '3';
                    break;
                case 4:
                    append_str = '4';
                    break;
                case 5:
                    append_str = '5';
                    break;
                case 6:
                    append_str = '6';
                    break;
                case 7:
                    append_str = '7';
                    break;
                case 8:
                    append_str = '8';
                    break;
                case 9:
                    append_str = '9';
                    break;
                }

                reversed_str.append(append_str);
            }

            /*Buffer for reversed string*/
            std::string buffer = "";
            std::string temp_reversed_string = reversed_str;

            /*Reversing string*/
            for (size_t i = 0; i < reversed_str.size(); i++) {
                buffer = temp_reversed_string.back();
                temp_reversed_string.pop_back();
                base_str.append(buffer);
            }

            if (base_str != reversed_str) {
                result = 0;
            }
            else {
                result = 1;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    int x = 101;

    std::cout << sol.isPalindrome(x);
}