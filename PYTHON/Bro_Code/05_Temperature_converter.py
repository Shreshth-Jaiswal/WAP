temp = float(input("Enter the temperature : "))
unit = input("Celsius or Fahrenheit ? (C/F) : ")

if unit == "C":
    print(f"Temperature in Fahrenheit = {round((temp*9/5)+32 ,2)} F")
elif unit == "F":
    print(f"Temperature in Celsius = {round((temp-32)*5/9 ,2)} C")
else:
    print("Wrong X Input")