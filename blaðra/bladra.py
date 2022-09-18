# https://iceland.kattis.com/problems/iceland.bladra2

_input = input().split(" ") # get the input
cleanded_input = [int(i) for i in _input] # turn it into ints

# now we can compute multiple ballons :)
class Balloon:
    def __init__(self, v=0, a=0, t=0):
        self.velocity = v
        self.accelleration = a
        self.time = t

    def displacement(self):
        """ calculate the displacement of the ballon"""
        return (self.velocity * self.time) + 0.5 * (self.accelleration * (self.time**2)) 

# initiate the ballon
my_ballon = Balloon(cleanded_input[0], cleanded_input[1], cleanded_input[2])
displacement = my_ballon.displacement()

# output the displacement of the ballon
print(displacement)