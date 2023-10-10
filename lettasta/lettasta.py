import numpy as np

N_problems = int(input())  # Number of problems
M_teams = int(input())  # Number of teams
problems = input().split()  # Names of the problems

list_of_scores = []
for _ in range(M_teams):
    scores = list(map(int, input().split()))  # Parse scores as integers
    list_of_scores.append(scores)

# Convert list_of_scores to a NumPy array for easy calculation
scores_array = np.array(list_of_scores)

# Calculate the total scores for each problem by summing across teams
total_scores_per_problem = np.sum(scores_array, axis=0)

# Find the index of the maximum total score (which corresponds to the problem)
max_score_index = np.argmax(total_scores_per_problem)

# Find the problem with the max score
max_score_problem = problems[max_score_index]

print(max_score_problem)
