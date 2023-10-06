the_input = input().split()
amount_of_bags = the_input[0]
bennis_bag = int(the_input[1])

bags = input().split()
bags = [int(bag) for bag in bags]

index_of_bennis_bag = bags.index(bennis_bag)


if index_of_bennis_bag == 0:
    print("fyrst")

elif index_of_bennis_bag == 1:
    print("naestfyrst")

else:
    print(index_of_bennis_bag + 1, "fyrst")
