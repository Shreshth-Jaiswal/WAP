weight = float(input("Enter your weight : "))
unit = input("Kilograms or Pounds ? (K/L) : ")

if unit == "K":
    weight *= 2.205
    print(f"Weight in Pounds = {round(weight, 2)} lb")
elif unit == "L":
    weight /= 2.205
    print(f"Weight in Kilograms = {round(weight, 2)} kg")
else:
    print("Wrong X Input")