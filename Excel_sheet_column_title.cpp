Approach : Took an empty string.
           As 'A' is initialized and appened in that string, columnNumber is decreased.

class Solution {
    public:
        string convertToTitle(int columnNumber) {
            string output = "";
            while(columnNumber!=0){
                columnNumber--;
                char letter = 'A' + columnNumber % 26;
                output = letter + output;
                columnNumber /= 26;
            }
            return output;
        }
    };
