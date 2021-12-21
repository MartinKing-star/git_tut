
def fib(val):
    fi=[0 for i in range(val+1)]
    fi[0]=fi[1]=1
    if val<=1:
        return fi[val]

    for i in range(2,val+1):
        fi[i]=fi[i-1]+fi[i-2]
    return fi[val]

def main():
    val=int(input("Enter fib number: "))
    print(f"fib of {val} is {fib(val)}")

main()


