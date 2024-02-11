

# read file
nums = []
with open("palindrones.txt", "r") as f:
    for line in f:
        line = line.split()[-1]
        nums.append(int(line.strip()))


for k in range(1, 50):
    # print(2**k)
    # enumerate backwards
    for i in range(len(nums)-1, -1, -1):
        palin = nums[i]
        # print(k, f"{palin} <= {2**k}")
        if palin <=  (2**k):
            print(k, palin)
            break
# 2^k > palin
