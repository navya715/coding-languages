x = input('Enter value of x: ')
y = input('Enter value of y: ')

# create a temporary variable and swap the values
temp = x
x = y
y = temp

print('The value of x after swapping: {}'.format(x))
print('The value of y after swapping: {}'.format(y))

Addition and Subtraction
-----------------------

x = x + y
y = x - y
x = x - y

Multiplication and Division
---------------------------

x = x * y
y = x / y
x = x / y

XOR swap
--------
This algorithm works for integers only

x = x ^ y
y = x ^ y
x = x ^ y