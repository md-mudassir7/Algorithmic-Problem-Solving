#MONTHS
import datetime
start_date=datetime.datetime(2020,1,6)
end_date=datetime.datetime(2021,4,6)
months=(end_date.year-start_date.year)*12+(end_date.month-start_date.month)
print(months)

#DAYS
date1=datetime.date(2020,1,6)
date2=datetime.date(2020,5,7)
days=(date2-date1).days
print(days)
