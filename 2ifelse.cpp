/* Input Format

A single integer, .

Constraints

Output Format

If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.

Sample Input 0

5
Sample Output 0

five
Explanation 0

five is the English word for the number .

Sample Input 1

8
Sample Output 1

eight
Explanation 1

eight is the English word for the number .

Sample Input 2

44
Sample Output 2

Greater than 9 */


#include <bits/stdc++.h>

using namespace std;
int main()
{
    // Write your code here
if(n>9){
    cout << "Greater than 9";
}
else{
    if (n>8){
  cout << "nine";      
    }
     else{
         if(n>7){
             cout<<"eight";
         }
         else{
             if(n>6){
                 cout<<"seven";
             }
             else {
                 if(n>5){
                     cout<<"six";
                 }
                 else{
                     if(n>4){
                         cout<<"five";
                     }
                     else{
                         if(n>3){
                             cout<<"four";
                         }
                         else {
                             if(n>2){
                                 cout<<"three";
                             }
                             else{
                                 if(n>1){
                                     cout<<"two";
                                 }
                                 else{
                                     if(n>0){
                                         cout<<"one";
                                     }
                                     else{
                                         cout<<"invalid entry";
                                     }
                                 }
                             }
                         }
                     }
                 }
             }
         }
     }
}

    return 0;
}













