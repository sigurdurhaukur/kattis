# time in the format of HH:MM
initial_time = input().split(":")
initial_hour = int(initial_time[0])
initial_minute = int(initial_time[1])

final_time = input().split(":")
final_hour = int(final_time[0])
final_minute = int(final_time[1])


# handle edge cases like 23:00 - 00:00
if final_hour < initial_hour:
    final_hour += 24

# calculate the difference in minutes
difference_in_minutes = (final_hour - initial_hour) * 60 + (
    final_minute - initial_minute
)

print(difference_in_minutes)
