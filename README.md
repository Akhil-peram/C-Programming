#                                                             C Programming 
--------------------------------------------
## Basic c programming
* ### Variables
* ### Data Types
* ### Conditional Statements
* ### Files and Exceptions
* ### Structures and Unions

A Simple Hello world program in C Language 

          #include<stdio.h>
           int main()
          {
            printf("Hello World\n");
             return 0;
           }





- C language was developed by Dennis Ritchie
- Include function includes the header file which is <stdio.h>
- Stdio stands for standard Input and Output  ( .h ) represents the header file



**Input and Output**


printf is used to display the output of the given data in C 


          #include<stdio.h>
          
           int main(){
           
            int a=3,b=6;
            
            int x=a+b;
            printf("sum = %d",x);
            }



- scanf is used to take input from the user 
- To access the address of the input C uses ampersand (&) to store the address.

FORMAT SPECIFIERS 
- To access the address of the given data and to write the data into variables C uses these format specifiers for assigning address 
 Program 

          #include<stdio.h>   // Header file
           int main(){
                                     // main function
            int a =1;
                                       // declaring variables and initializing values
            float b=2;
  
            char c='a';
  
           printf(" %d\n%f\n%c",a,b,c);  // printing the variables
           }


          /*
              For int %d or %i
              Float %f
              String %s
              Char %C


          */


  

**Manipulation of data types** 

To do math in C we use int , float data types 
 * Addition (+)
 * Subtraction(-)
 * Multiplication(*)
 * Division (/)
 * floor Division(//)

 *Calculations in c*

        #include<stdio.h> 
        
        int main()
        {
          int a=3,b=2;
          
          printf("sum = %d",a+b);
          
          printf("Subtraction = %d",a-b);
          
          print("Multiple = %d",a*b);
          
          float x= 36.14;
          
          float y= 6.2;
          
           printf("division =%f",x/y);

           return 0;
        }


- For taking input we use scanf function to take input from user 

     
            #include<stdio.h>
  
              int main(){
  
             printf("Enter two numbers ");
  
            int a , b,c; //declaring variables
  
            scanf("%d %d",&a,&b);
  
               c=a+b;
  
            printf("\nsum of numbers is %d",c);
            }
# Operators

The operators for manipulating data in C divided into 
* Arithmetic operators

            #include<stdio.h>
  
            int main(){
  
            int a = 10,  b=90;
  
            printf("Sum of a +b  is  %d",a+b);
  
            return 0;
                 }




* Conditional operators
* Logical operators
* Bitwise operators 


# Variables

*Variables* : Anything that stores the value .

* int cars= 10 ,
* float speed = 143.789 ,
* double pi = 3.1428579631274639 ,
* char letter ='L',
* char sentence[] = "I am Ironman";

A variable can be anything that can store the values of specified format 

# Control Statements

## Control flow

* if else block
* else if
* switch cases


### Loops
* for loop
* while loop
* do while loop


### Arrays
* static array
* Dynamic array


