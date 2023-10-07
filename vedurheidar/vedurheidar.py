wind_speed = int(input())
n_mountains = int(input())


class Mountain:
    def __init__(self, name, max_wind_speed):
        self.name = name
        self.max_wind_speed = max_wind_speed

    def __str__(self):
        return f"{self.name} {self.is_open(wind_speed)}"

    def is_open(self, wind_speed):
        return "opin" if wind_speed <= self.max_wind_speed else "lokud"


mountains = []
for _ in range(n_mountains):
    name, max_wind_speed = input().split()
    max_wind_speed = int(max_wind_speed)
    mountain = Mountain(name, max_wind_speed)

    mountains.append(mountain)


for mountain in mountains:
    print(mountain)
