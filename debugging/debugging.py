#Debugging practice!

#Practicing step-over, watch, and expressions
a = 1       #Breakpoint 1
b = 2
c = a + b

#Practicing step into
m = 6       #Breakpoint 2
n = 7
p = multiply(m,n)

#Practicing step out of
#Purpose:
#   Multiply two numbers, x and y
def multiply(x,y):
    product = x * y #Breakpoint 3
    return product

#Purpose:
#   Compute factorial of n using recursion
#Description:
#   We know that n! = n * (n-1)! = n * (n-1) * (n-2)!
#   Instead of a for loop, we can use recursion!
#   We know that 0! is 1 and n = n * (n-1)!
#   So...
def factorial(n):

    #If n is 0...
    if(n==0):
        #return 1 (since 0! is 1)
        return 1
    else: #if n is not 0...
        #return n*(n-1)!
        return n*factorial(n-1)