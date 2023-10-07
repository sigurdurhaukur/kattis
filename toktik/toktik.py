n_tiktoks = int(input())


class Tiktoker:
    def __init__(self, name, views):
        self.name = name
        self.views = views

    def __str__(self):
        return self.name

    # handle indexing
    def __getitem__(self, item):
        return self.name[item]


tiktokers = {}
for _ in range(n_tiktoks):
    name, views = input().split()
    views = int(views)

    if name in tiktokers:
        tiktoker = tiktokers[name]
        tiktoker.views += views
    else:
        tiktoker = Tiktoker(name, views)
        tiktokers[name] = tiktoker

tiktokers = list(tiktokers.values())
tiktokers.sort(key=lambda tiktoker: tiktoker.views, reverse=True)

most_famous = tiktokers[0]
print(most_famous)
