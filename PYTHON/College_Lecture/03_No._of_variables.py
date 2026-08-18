words=input("Words:")
n=len(words)

vowels=0
constant=0
list=['a','e','o','i','u','A','E','I','O','U']
for i in range (n):
    if(words[i] in list):
        vowels+=1
    else:
        constant+=1
print(vowels,",",constant)