# https://iceland.kattis.com/problems/iceland.dagatal
import calendar

month = int(input())

def get_days_in_month(month=month):
    return calendar.monthrange(2019, month)[1]


if month <13 and month > 0: # if month exists
    days = get_days_in_month(month)

    print(days)