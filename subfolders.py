import os

# Define the folder path
folder_path = "/Users/christopherrodriguez/Documents/GitHub/100-days-cplusplus/CompeteCLangaugePt2"


# Create subfolders from section_03 to section_36
for i in range(1, 30):
    subfolder_name = f"section_{i:02}"
    subfolder_path = os.path.join(folder_path, subfolder_name)
    if not os.path.exists(subfolder_path):
        os.makedirs(subfolder_path)
        print(f"Created subfolder: {subfolder_name}")
    else:
        print(f"Subfolder already exists: {subfolder_name}")