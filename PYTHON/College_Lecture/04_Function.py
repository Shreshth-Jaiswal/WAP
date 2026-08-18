def calculator():
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


def yo():
    num=int(input("Enter the No."))
    if(num > 0):
        print("+ve")
    elif(num < 0):
        print("-ve")
    else:
        print("0")

print("1- Calculator")
print("2- +ve or -ve")
x=int(input("Choose one: "))
if(x==1):
    calculator()
elif(x==2):
    yo()
else:
    print("Chal na chutiye")
