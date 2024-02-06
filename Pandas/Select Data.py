import pandas as pd

# Could also be done by return students.loc[students["student_id"] == 101, ["name", "age"]]
def selectData(students: pd.DataFrame) -> pd.DataFrame:
    return students.loc[students["student_id"] == 101][["name", "age"]]

students = [[101, "Ulysses", 13],
            [53, "William", 10],
            [128, "Henry", 6],
            [3, "Henry", 11]]
df = pd.DataFrame(students, columns=["student_id", "name", "age"])
print(selectData(df))