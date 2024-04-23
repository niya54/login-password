# login-password

The Login and Registration System presented is a simple C++ program that manages user credentials by allowing users to register and log in through a console-based interface. The system stores user credentials as files, with each file representing a single user. The username serves as the filename, and the corresponding file contains the user's password in plain text. This basic approach demonstrates file handling and simple authentication mechanisms in C++.
Key Features of the System:

    File-Based Credential Storage:
        Each user's password is stored in a separate text file named after the username (e.g., username.txt). This approach provides a straightforward way to check for user existence and validate credentials.

    Registration:
        The registration process checks if a user file already exists to prevent duplicate usernames. If the username does not exist, the system creates a new file with the username as the filename and writes the password inside.

    Login:
        During login, the system attempts to open the file associated with the provided username. If the file exists, it reads the password and compares it with the one entered by the user. Access is granted if the passwords match, otherwise, an error message is displayed.

    User Interaction via Console Menu:
        Users interact with the system through a simple menu that prompts them to choose between registration and login. The user's choice directs the flow of operations accordingly.

Security Considerations:

    Plain Text Passwords: The system stores passwords in plain text, which is insecure for any practical application. For educational use only, this is acceptable, but real-world applications should implement hashed passwords with salt for security.
    File-Based Management: Using files named after usernames is simplistic and could lead to security issues if not properly managed. A more secure and scalable approach would involve using databases and encrypted data storage.
