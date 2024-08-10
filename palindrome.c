#include <stdio.h>
 
int main(){
    int inputNumber, reverseNumber = 0, rightDigit, temp;
    printf("Enter a number \n");
    scanf("%d", &inputNumber);
     
    temp = inputNumber;
    while(temp != 0){
        rightDigit = temp % 10;
        reverseNumber = (reverseNumber * 10) 
           + rightDigit;
        temp = temp/10;
    }
     
    if(reverseNumber == inputNumber){
        printf("%d is Palindrome\n", inputNumber);
    } else {
        printf("%d is not a Palindrome\n", inputNumber);
    }
     
    return 0;
}