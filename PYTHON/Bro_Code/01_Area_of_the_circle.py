import math

radius = float(input("Radius : "))

# area = math.pi * pow(radius, 2)
area = math.pi * radius ** 2

print(f"Area of the circle = {round(area, 2)} cm²")