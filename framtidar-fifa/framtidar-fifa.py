n_features = int(input())
k_features_per_year = int(input())


def what_year_is_it(n, k):
    years_passed = n // k

    return 2022 + years_passed


print(what_year_is_it(n_features, k_features_per_year))
