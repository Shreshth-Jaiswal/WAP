num1=int(input("Enter 1st operand:"))
operator=input("Enter the operator:")
num2=int(input("Enter 2nd operand:"))
match (operator):
    case '+':
        print(num1 + num2)
    case '-':
        print(num1 - num2)
    case '*':
        print(num1 * num2)
    case '/':
        print(num1 / num2)
    case '%':
        print(num1 % num2)
    case '_':
        print("Wrong Input")