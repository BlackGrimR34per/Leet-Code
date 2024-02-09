import pandas as pd

# Using the parameter inplace = True returns None object as it modifies original dataframe, I assume it just returns None as it 
# modifies it successfully, without inplace = True new DataFrame object is created and returned

def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    return customers.drop_duplicates(subset=["email"])