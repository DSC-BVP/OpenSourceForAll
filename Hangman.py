
import random
wordlist=[]
with open ('D:\python projects and pr\.vscode\wordlist.txt','r') as wordsource:
    wordlist=wordsource.read().splitlines()

word=random.choice(wordlist) 
letters=list(word)

print(word)
p_letters=[]
for x in range(len(letters)):
    p_letters.append("*")

while p_letters!=letters:
    lettere=str(input("enter value  "))
    for i in range(len(letters)):
        if lettere==letters[i]:
            p_letters[i]=lettere
    #for p_letter in p_letters:
    print(*p_letters)
#Score Card System not included right now
print("I love Open Source because it empowers everyone on the platform either a beginner or a pro")





       