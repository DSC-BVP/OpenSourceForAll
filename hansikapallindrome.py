


string = input("Enter the string : ")
newString = ''

for char in string:
    if char.isalnum():
        newString = newString + char

if newString[::] == newString[::-1]:
    print("'",newString, "' is in palindrome")

else :
    print("'",newString, "' is not in palindrome")
