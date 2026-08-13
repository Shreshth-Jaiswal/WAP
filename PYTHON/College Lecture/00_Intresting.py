print("You are hacked")
print('You can use both single or double quotes')
print("You can use the end parameter",end=" ")
print("to print on the same line.")
print("You don't need to put numbers inside quotes:",end=" ")
print(1223334444)
print(3 + 3)
print("I am", 10+9, "year old")
"""
This is a illegal way to add 
a comment bcz Python will ignore
string literals that are not
assigned to a variable
"""
x = 5
y = "yo"
x = "yo"
print(x,y)
# If you want to specify the data type of a variable,
# this can be done with casting.
a = str("yo")
b = int(10)
c = float(3.999)
print(a,b,c)

print(type(a))
print(type(b))
print(type(c))

myVariableName = "yo"       # Camel Case
MyVariableName = "yo"       # Pascal Case
my_variable_name = "yo"     # Snake Case

x,y,z = "You","are","Hacked"
print(x,y,z)

x=y=z="He"
print(x,y,z)

fruits = ["Apple ","Banana ","Orange"]
x,y,z = fruits
print(x+y+z)

x=1
y=1
print(1,x,y)             #1

def myfunc():
    x=2
    y=2
    print(2,x,y)         #2
    
myfunc()

print(3,x,y)             #3

def myfunc():

    x=4
    global y
    print(4,x,y)        #4
    y=4
     
     
myfunc()

print(5,x,y)            #5

while(x==10):
    print("yo")
    