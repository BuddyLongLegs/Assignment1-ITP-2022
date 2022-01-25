// Question :
// Given an unsorted array of N numbers, find the sum of second largest and smallest numbers is prime number or not.

// Solution:

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

// checking a number is prime or not


bool checkPrime(int n)
{   
    if ((n == 2)||( n == 3)){
        return true;
    } 
    else if (((n % 2) == 0)||((n % 3) == 0)||((n<=0))){
        return false;
    }
    else {
        for(int i = 5; i <= sqrt(n); i++){
            if (n % i == 0){
                return false;
            }
        }
    }
    return true;
}



int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++){
        printf("Enter the element at the index %d of the array : ", i);
        scanf("%d",&a[i]);
    }
    int min, max, max2;
    max2 = max = -2147483647;
    min = 2147483647;
    printf("The array being used for the question is:\n");
    
    // linear search 

    for(int i=0; i<(n); i++){
        if(i==0){
            printf("%d", a[i]);
        }else{
        printf(", %d", a[i]);}
        if(min>a[i]){
            min = a[i];
        }if(max<a[i]){
            max2 = max;
            max = a[i];
        } else if(max2<a[i]){
            max2 = a[i];
        }
    }

    printf("\nThe Smallest number is %d.\nThe Second largest number is %d.\n", min, max2);
    if(checkPrime(min+max2)){
        if(min+max2 == 1){
            printf("The sum of these numbers(1) is neither Prime nor composite.");
        }else 
        printf("The sum of these numbers(%d) is Prime.", min+max2);
    } else {
        printf("The sum of these numbers(%d) is Not Prime.", min+max2);
    }
    return 0;
}