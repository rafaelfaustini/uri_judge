def absolute(n):
    if (n<0):
        return n*-1
    return n

def MaiorAB(a,b):
    return (a+b+absolute(a-b))/2

a,b,c = input("").split()
a = int(a)
b= int(b)
c= int(c)
print(str(MaiorAB(MaiorAB(a,b),c))+" eh o maior")
    
