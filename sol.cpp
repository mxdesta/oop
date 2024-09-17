#include "sol.h"  

std::string replacer(int n, char old_Value, char new_Value,  std::string text) {
    int counter {0};
    int count_symbol {0};

    for (int count = 0; count < text.size(); ++count){
        count_symbol++;
    }
    if (n <= 0 || n > count_symbol){
        return text;
        }
    for (int i = 0; i < text.size(); ++i) {  
        if (text[i] == old_Value) {
            counter += 1;
        }
        if (counter == n) {
            text[i] = new_Value;
            counter = 0;
        }
    }

    return text;
}
