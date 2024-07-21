
mem = {
    0: 0,
    1: 1
}

def fib(n):
    if n in mem:
        return (mem[n])
    
    mem[n] = fib(n - 1) + fib(n - 2)
    return (mem[n])

print(fib(100))