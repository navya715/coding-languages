num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))
num3 = float(input("Enter second number: "))

if (num1 > num2):
   largest = num1
else:
   largest = num2

if (num3 > largest):
   largest=num3
   

print("The largest number is",largest)
