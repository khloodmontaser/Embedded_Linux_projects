# Python program to count the number 4 in a given list.
ls = [1, 2, 4, 5, 4, 6, 8, 4 , 4 ,4 ]
count = 0

for num in ls:
    if num == 4:
        count += 1

print("Number of 4s in the list = ", count)
