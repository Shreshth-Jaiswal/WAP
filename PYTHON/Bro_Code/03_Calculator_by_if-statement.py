num1 = float(input("Enter the 1st no. : "))
operator = input("Enter the operator : ")
num2 = float(input("Enter the 2nd no. : "))

if operator == "+":
    print(round(num1 + num2, 2))
elif operator == "-":
    print(round(num1 - num2, 2))
elif operator == "*":
    print(round(num1 * num2, 2))
elif operator == "/":
    print(round(num1 / num2, 2))
elif operator == "%":
    print(round(num1 % num2, 2))
else:
    print("Wrong X Input")