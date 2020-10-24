import math 
  
# Initializing size of 
# design 
n = 5
  
# Loop to print Circle 
# (Upper part of design) 
# Outer loop to 
# control height of 
# design 
for i in range(0, 2 * n + 1): 
      
    # Inner loop to control 
    # width 
    for j in range(0, 2 * n + 1): 
      
        # computing distance of 
        # each point from center 
        center_dist = math.sqrt((i - n) * (i - n) 
                             + (j - n) * (j - n)) 
        if (center_dist > n - 0.5 
                  and center_dist < n + 0.5): 
            print("$", end = "") 
        else: 
            print(end = " ") 
          
    # Printing HappY Women's DaY 
    if (i == n): 
        print(" ","HappY Women's DaY",end = "") 
    print("") 
  
# Loop to print lower part 
# Outer loop to control 
# height 
for i in range(0, n+1) : 
  
    # Positioning pattern 
    # Loop for Printing 
    # horizontal line 
    if (i == int(n / 2) + 1):  
        for j in range(0, 2 * n + 1): 
            if (j >= (n - int(n / 2))  
                   and j <= (n + int(n / 2))): 
                print("$", end = "") 
            else: 
                print(end = " ") 
    else : 
        for j in range(0, 2 * n + 1): 
            if (j == n): 
                print("$", end = "") 
            else: 
                print(end = " ") 
    print("")
