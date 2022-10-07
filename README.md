# CSCE121-Concept-Review
#### Code examples of various topics from lecture
____________________________________

## Getting Started
### VSCode
_____
1. Open VSCode with WSL, and click "Clone Git Repository" <br /> ![Step 1](/IGNORE_backend_files/vscode1.png)
2. Click clone from GitHub, and follow the steps that pop up in order to sign into GitHub.
3. Copy the Git Clone URL from the GitHub repository ![Step 3](/IGNORE_backend_files/vscode2.png)
4. Upon prompt for the Repository Name, paste the link into VSCode
5. VSCode will then ask you where you want to store the project, you may store it wherever you want.
6. Upon completion, you will be presented with a bunch of folders of topics.
7. From here you can either open the folder manually in vscode, or via terminal (recommended)
   1. A terminal by using the menu option Terminal > New Terminal
   2. Use the `cd <folder>` command to "change directories" into the desired folder.
8. Every folder will have a file called Makefile, you will learn more about these if you continue on to CSCE 221, but for now, here is how to use them.
   1. Open a terminal (see step 7)
   2. Run the command `make` to build all files. Alternatively you can run the command `make <target>` to only make one project. _**Example**_: In the exceptions folder, `make basic` will make the basic project.
9. Run the desire file using `./<filename>` You can use the command `ls` (short for list) to view all files in a directory.
#### Updating the project
As I add more examples it will become important to update the project.
1. Install GitHub Repositories extension
   1. Go to the extensions tab and search up [GitHub Repositories](https://marketplace.visualstudio.com/items?itemName=GitHub.remotehub)
   2. Click install locally, and after it's done installing a new button should appear: <br /> ![Sidebar](/IGNORE_backend_files/vscode3.png)
      1. If a pop-up about periodically running git fetch pops up click yes
      2. Otherwise, you may have to manually hit the refresh button at the bottom of your screen.
2. Frequently check for updates to stay up to date. Sync changes to pull new updates.
### CLion  (my preferred IDE :D)
______________
1. Click `File > New > Project From Version Control`
2. Copy the Git Clone URL from the GitHub repository ![Step 2](/IGNORE_backend_files/vscode2.png)
3. Paste the url into the URL box, and set your project directory ![Step 3](/IGNORE_backend_files/clion1.png)
4. Click `Clone` to make your new project
5. Upon completion, you will be presented with a bunch of folders of topics.
6. Click `Terminal` at the bottom to pull up your terminal. Open a WSL terminal with the down arrow and clicking on Ubuntu or your WSL install (Or preferably configure you WSL terminal to be default by changing the default shell from powershell.exe to wsl.exe)
7. Use the `cd <folder>` command to "change directories" into the desired folder.
8. Every folder will have a file called Makefile, you will learn more about these if you continue on to CSCE 221, but for now, here is how to use them.
9. Run the command `make` to build all files. Alternatively you can run the command `make <target>` to only make one project. _**Example**_: In the exceptions folder, `make basic` will make the basic project.
10. Run the desire file using `./<filename>` You can use the command `ls` (short for list) to view all files in a directory.
#### Updating the project
As I add more examples it will become important to update the project.
1. In the top right corner of the window, there is a Git specific toolbar ![Update 1](/IGNORE_backend_files/clion2.png)
2. Use the Blue down-left arrow to update your project and click "Merge incoming changes into the current branch"
