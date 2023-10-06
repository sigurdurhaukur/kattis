city = input()
min_percentage_of_plastic_allowed = float(input())
amount_of_items = int(input())
items_to_recycle = [input() for _ in range(amount_of_items)]


class City:
    def __init__(self, name, min_percentage_of_plastic_allowed=0):
        self.name = name
        self.min_percentage_of_plastic_allowed = min_percentage_of_plastic_allowed

    def __str__(self):
        return f"{self.name} - {self.min_percentage_of_plastic_allowed}"


class RecyclingPlant(City):
    def __init__(self, name, min_percentage_of_plastic_allowed, items_to_recycle):
        super().__init__(name, min_percentage_of_plastic_allowed)
        self.items_to_recycle = items_to_recycle

    def can_recycle(self):
        items = self.items_to_recycle
        amount_of_plastic = sum(1 for item in items if item == "plast")

        # if the amount of plastic is less than or equal to the percentage of plastic allowed
        if amount_of_plastic / len(items) >= self.min_percentage_of_plastic_allowed:
            return True
        else:
            return False

    def __str__(self):
        return f"{self.name} - {self.min_percentage_of_plastic_allowed} - {self.items_to_recycle}"


recycling_plant = RecyclingPlant(
    city, min_percentage_of_plastic_allowed, items_to_recycle
)

if recycling_plant.can_recycle():
    print("Jebb")
else:
    print("Neibb")
