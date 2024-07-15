n=input("No of Fibonacci numbers in series :")
n=int(n)
num1=0
num2=1
num3=num2
print(f"Fibonacci series of {n} numbers are")
print(num3,"\n",end="")
for i in range(0,n):
  print(num3,"\n",end='')
  num1=num2
  num2=num3
  num3=num1+num2
