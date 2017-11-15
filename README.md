# GTestSample

# Steps to Run
1. Clone the googletest repository into your Documents folder. Place it in its own folder.
I named mine GoogleTestAPI.
2. Open the googletest .sln solution. Visual studio will ask you to retarget the solution to VS2017.
Click yes to all.
3. Build the solution.
4. Clone this repository into your documents/ProjectTest with `git clone https://github.com/mel-flygare96/GTestSample.git ProjectTest`
5. Open the solution
6. Right-click on the GTest project. Navigate to Properties -> VC++ Directories -> Include Directories
7. Click the dropdown and click edit. Add a new line. Click the browse button on the line and select GoogleTestAPI/googletest/include.
Next, add GoogleTestAPI/googletest. Click OK.
8. Click on C/C++ on the left. Click on Precompiled Headers.
9. Set Precompiled Header to 'Not Using Precompiled Headers'.
10. Repeat steps 6-9 for the MyProjectTests project.
11. Click Apply.
12. Build all. (if the project does not build, you may also need to add the two references by right-cliking references under
MyProjectTests)
13. Go to Tools -> Extensions and Updates. Search for google test
14. Download the Google Test Adapter.
15. Close Visual Studio to allow the adapter to install.
16. Reopen VS. Go to Test -> Windows -> Test Explorer
17. The tests should appear hear. If they do now, rebuild all. Run all tests. Clicking on a test gives info at the bottom.
18. If you install VS Enterprise, you can click the play button at the top left of the test explorer to run tests automatically
on build.

# Steps to Modify User Macro
1. Pull the changes from Git
2. Go to view -> other windows -> property manager
3. Click on the GTest dropdown, then on the Debug | x64 dropdown
4. Right click on MyProjectTestPropertySheet
5. Click properties
6. Under User Macros on the left, double-click on the value for the GTest macro. Edit the path to point to your main directory where
you installed googletest. For example, I installed placed googletest into Documents/GoogleTestAPI. This should be a full directory path.
7. Click Apply. When you rebuild the solution, it should build.
