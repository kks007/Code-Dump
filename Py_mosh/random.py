import random

for i in range(3):
    print(random.randint(1,2))

members = ["John", "Mary", "Tony", "Steve"]
leader = random.choice(members)
print(leader)
