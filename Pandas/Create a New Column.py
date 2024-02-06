import pandas as pd

# Another method employees['bonus'] = employees['salary'] * 2
def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    return employees.assign(bonus=lambda x: x.salary * 2)
