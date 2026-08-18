import math

perpendicular = float(input("Perpendicular : "))
base = float(input("Base : "))

hypotenuse = math.sqrt(perpendicular ** 2 + base ** 2)

print(f"Hypotenuse = {round(hypotenuse, 2)}cm")