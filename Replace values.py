num1 = int(input("Enter the first number: ")) 
num2 = int(input("Enter the second number: "))

#Make the first number's value equal to total values
num1 = num1 + num2

#num2 has num1 value
num2 = num1 - num2

#num1 has num2 value
num1 = num1 - num2
print("replaced value: num1= ",num1, 'num2=',num2)
