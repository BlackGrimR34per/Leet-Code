import pandas as pd

# Could also be done by return students.loc[students["student_id"] == 101, ["name", "age"]]
def selectData(students: pd.DataFrame) -> pd.DataFrame:
    return students.loc[students["student_id"] == 101][["name", "age"]]