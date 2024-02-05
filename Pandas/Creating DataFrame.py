import pandas as pd

# Another way is to return pd.DataFrame(student_data, columns["student_id", "age"]) without assigning it to a var
def createDataframe(student_data: list[list[int]]) -> pd.DataFrame:
    df = pd.DataFrame(student_data, columns=["student_id", "age"])

    print(df)