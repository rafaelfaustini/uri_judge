def primo(n):
    count = 0
    for i in range(1,n):
        if(n%i == 0):
            count+=1
    if(count < 2):
        return 1
    return 0

def super_prime(n):
    n= str(n)
    count = 0
    for i in range(0,len(n)):
         if (primo(int(n[i])) == 1):
             count+=1
    if(count == len(n)):
        return 1
    return 0
def main():
    n= int(input(""))

    if(primo(n)==0):
        print("Nada")
        return
    if(super_prime(n)==0):
        print("Primo")
        return
    print("Super")
    return

main()
    

