/*Input1:
4
Hello
World
Welcome
Home
Output 1:


Hll
Wrld
Wlcm
Hm*/


#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s", str);
    int n = strlen(str);
    int ans = 0;
    int num = 0;
    int i;
    for( i = 0; i < n; i++){
        // Check if the character is a digit between '0' and '9'
        if (str[i] >= '0' && str[i] <= '9'){
            if (i + 1 < n && str[i+1] >= '0' && str[i+1] <= '9'){
                // Create a two-digit number if the next character is also a digit
                num = (str[i] - '0') * 10 + (str[i+1] - '0'); // Convert to integer
                ans += num; // Add to total
                i++; // Skip the next character
            } else {
                // Add the single digit
                ans += (str[i] - '0'); // Convert character to integer
            }
        }
    }

    printf("%d", ans); // Print the final sum
    return 0;
}

