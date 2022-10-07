# CSCE121-Concept-Review
#### Code examples of various topics from lecture
____________________________________

## Instructions for using this repository
### VSCode
_____
1. Open VSCode with WSL, and click "Clone Git Repository" ![Step 1](/IGNORE_backend_files/vscode1.png)
2. Click clone from GitHub, and follow the steps that pop up in order to sign into GitHub.
3. Copy the Git Clone URL from the GitHub repository ![Step 3](/IGNORE_backend_files/vscode2.png)
4. Upon prompt for the Repository Name, paste the link into VSCode
5. VSCode will then ask you where you want to store the project, you may store it wherever you want.
6. Upon completion, you will be presented with a bunch of folder of topics.
7. From here you can either open the folder manually in vscode, or via terminal (recommended)
   1. A terminal by using the menu option Terminal > New Terminal
   2. Use the `cd <folder>` command to "change directories" into the desired folder.
8. Every folder will have a file called Makefile, you will learn more about these if you continue on to CSCE 221, but for now, here is how to use them.
   1. Open a terminal (see step 7)
   2. Run the command `make` to build all files. Alternatively you can run the command `make <target>` to only make one project. _**Example**_: In the exceptions folder, `make basic` will make the basic project.
9. Run the desire file using `./<filename>` You can use the command `ls` (short for list) to view all files in a directory.
#### Updating the project
As I add more examples it will become important to update the project.