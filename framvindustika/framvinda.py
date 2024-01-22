from math import floor, ceil

percentage, width = map(int, input().split())

bar = "["
for i in range(0, width):
    if (i / width) < (percentage / 100):
        bar += "#"
    else:
        bar += "-"

bar += "]"

# bar = f"[{width * '-'}]"
# nhashes1 = (percentage / 100) * width
# nhashes = ceil(nhashes1)
# # print(nhashes)

# rest = width - nhashes

# assert nhashes + rest == width  # debugging

# bar = f"[{nhashes * '#'}{rest * '-'}]"


if percentage == 100:
    bar += " | 100%"
elif percentage >= 10:
    bar += f" |  {percentage}%"
elif percentage < 10:
    bar += f" |   {percentage}%"
else:
    pass


print(bar)
