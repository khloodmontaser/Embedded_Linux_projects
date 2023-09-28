#Write a Python program which accepts the radius of a circle from the user and compute the area.
import math

r = float(input("enter the raduis of the circle:"))
area = math.pi * (r**2)
print("The area of the circle is:", area)
