import random 
number=random.randint(1,100)
count=0
while(1):
    count=count+1
    guess=int(input("Guess the number   :"))
    if number==guess:
       print(f"You have guessed the number correctly.Number is {number}")
       print(f"You took {count} turns to find the number")
       break;
    elif guess>number:
        print("Guessed number is greater than number to be guessed. ! Try Again")
    else:
        print("Guessed number is smaller than number to be guessed. ! Try Again")
          
    
