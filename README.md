# Assignment-1

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IEC2021001  |   Mohd. Wael Abrar | BINGABABA |
|    IEC2021002  |   Anurag Jain | BuddyLongLegs |
|    IEC2021003  |   Abhishek Rana | abhishekrana2003 |
|    IEC2021004  |   Ayush Kumar Gupta | ayush9769 |

**Group No-**"1"

**Faculty Name-**"Dr. Mohammed Javed"

**Mentor Name-** "Tejasvee Bisen"

---
## Problem Statement
Given an unsorted array of N numbers, find the sum of the second largest and smallest numbers is a prime number or not. 

---
## How to use code
Download the project:
1. Open the terminal in a folder where you want to download our project. Now download the project using the following command
```
git clone https://github.com/BuddyLongLegs/Assignment1-ITP-2022.git 
```
2. Change your directory to the project folder to discover all downloaded files.
```
cd Assignment1-ITP-2022
```
---

Compiling and Using the code:
1. For compiling the code first check if you have a suitable c compiler already installed on your device. We have used gcc compiler from MingGW here. You can download the complier from [here](https://sourceforge.net/projects/mingw/). Via gcc we compile the code using the following command
```
gcc code.c -o program.exe
```
2. This will create a new file named `program.exe` in your system in the same folder, this is an executable file and it is required to run the code. Use this executable by the following command
```
.\program.exe
```
3. Now follow the instructions that the program provides.
---

**Test cases**

Test Case-1
```
Enter the size of the array : 10
Enter the element at the index 0 of the array : 85
Enter the element at the index 1 of the array : 45
Enter the element at the index 2 of the array : -5
Enter the element at the index 3 of the array : 12
Enter the element at the index 4 of the array : -7
Enter the element at the index 5 of the array : 155
Enter the element at the index 6 of the array : 69
Enter the element at the index 7 of the array : 115
Enter the element at the index 8 of the array : 58
Enter the element at the index 9 of the array : 59
The array being used for the question is:
85, 45, -5, 12, -7, 155, 69, 115, 58, 59
The Smallest number is -7.
The Second largest number is 115.
The sum of these numbers(108) is Not Prime.
```

Test Case-2
```
Enter the size of the array : 6
Enter the element at the index 0 of the array : 12
Enter the element at the index 1 of the array : 6
Enter the element at the index 2 of the array : 45
Enter the element at the index 3 of the array : 13
Enter the element at the index 4 of the array : 9
Enter the element at the index 5 of the array : 8
The array being used for the question is:
12, 6, 45, 13, 9, 8
The Smallest number is 6.
The Second largest number is 13.
The sum of these numbers(19) is Prime.
```

Test Case-3
```
Enter the size of the array : 5
Enter the element at the index 0 of the array : -69
Enter the element at the index 1 of the array : 70
Enter the element at the index 2 of the array : 169
Enter the element at the index 3 of the array : 12
Enter the element at the index 4 of the array : 13
The array being used for the question is:
-69, 70, 169, 12, 13
The Smallest number is -69.
The Second largest number is 70.
The sum of these numbers(1) is neither Prime nor composite.
```

---

### Theory
Our solution uses basically two algorithms; one is for checking whether a number is a prime number or not and the second is the linear search which is used to find the minimum and second maximum number from the unsorted array. The program takes an array as input and then finds the smallest and second largest number from the array and finally checks if their sum is a prime number or not.

---

### References

The idea of checking whether a number is prime or not is partially taken from [C Program to Check Whether a Number is Prime or Not](https://www.programiz.com/c-programming/examples/prime-number)
