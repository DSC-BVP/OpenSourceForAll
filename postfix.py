class exp:

    def __init__(x):
        x.ex="("+(raw_input("enter expression: "))+")"
        x.l=[]
        x.q=["^"]
        x.w=["/","*","%"]
        x.e=["+","-"]
        x.r=""
        x.s=[]
        for i in x.ex:
            x.l.append(i)
    def postfix(x):
        for i in x.l:
            if i=='(':x.s+='('
            elif i in x.q:x.s+=i
            elif i in x.w:
                if x.s[-1] in x.q or x.s[-1] in x.w:
                    x.r+=x.s.pop()
                    x.s+=i
                else:x.s+=i
            elif i in x.e:
                if x.s!=[]:
                    if x.s[-1] in x.q or x.s[-1] in x.w or x.s[-1] in x.e:
                        x.r+=x.s.pop()
                x.s+=i
            elif i==")":
                for i in x.s[::-1]:
                    del x.s[len(x.s)-1]
                    if i=="(":
                        break
                    else:x.r+=i
                        
            else:x.r+=i
        return x.r 

        
            
