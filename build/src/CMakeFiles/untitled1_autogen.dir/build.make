# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\gavrilenko\untitled1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\gavrilenko\untitled1\build

# Utility rule file for untitled1_autogen.

# Include the progress variables for this target.
include src/CMakeFiles/untitled1_autogen.dir/progress.make

src/CMakeFiles/untitled1_autogen: C:/Qt/Qt5.5.0/5.5/mingw492_32/bin/Qt5Widgets.dll
src/CMakeFiles/untitled1_autogen: C:/Qt/Qt5.5.0/5.5/mingw492_32/bin/Qt5Xml.dll
src/CMakeFiles/untitled1_autogen: C:/Qt/Qt5.5.0/5.5/mingw492_32/bin/Qt5Core.dll
src/CMakeFiles/untitled1_autogen: C:/Qt/Qt5.5.0/5.5/mingw492_32/bin/Qt5Gui.dll
src/CMakeFiles/untitled1_autogen: src/qrc_imgs.cpp
src/CMakeFiles/untitled1_autogen: src/ui_mainwindow.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=E:\gavrilenko\untitled1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC, UIC and RCC for target untitled1"
	cd /d E:\gavrilenko\untitled1\build\src && "C:\Program Files\CMake\bin\cmake.exe" -E cmake_autogen E:/gavrilenko/untitled1/build/src/CMakeFiles/untitled1_autogen.dir ""

src/qrc_imgs.cpp: ../src/imgs/accessories-text-editor2.png
src/qrc_imgs.cpp: ../src/imgs/clear.png
src/qrc_imgs.cpp: ../src/imgs/expression@2x.png
src/qrc_imgs.cpp: ../src/imgs/home-page1.png
src/qrc_imgs.cpp: ../src/imgs/icon_img.png
src/qrc_imgs.cpp: ../src/imgs/remove.png
src/qrc_imgs.cpp: ../src/imgs/settings_min.png
src/qrc_imgs.cpp: ../src/imgs.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=E:\gavrilenko\untitled1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating qrc_imgs.cpp"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\5.5\mingw492_32\bin\rcc.exe --name imgs --output E:/gavrilenko/untitled1/build/src/qrc_imgs.cpp E:/gavrilenko/untitled1/src/imgs.qrc

src/ui_mainwindow.h: ../src/mainwindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=E:\gavrilenko\untitled1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ui_mainwindow.h"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\5.5\mingw492_32\bin\uic.exe -o E:/gavrilenko/untitled1/build/src/ui_mainwindow.h E:/gavrilenko/untitled1/src/mainwindow.ui

untitled1_autogen: src/CMakeFiles/untitled1_autogen
untitled1_autogen: src/qrc_imgs.cpp
untitled1_autogen: src/ui_mainwindow.h
untitled1_autogen: src/CMakeFiles/untitled1_autogen.dir/build.make

.PHONY : untitled1_autogen

# Rule to build all files generated by this target.
src/CMakeFiles/untitled1_autogen.dir/build: untitled1_autogen

.PHONY : src/CMakeFiles/untitled1_autogen.dir/build

src/CMakeFiles/untitled1_autogen.dir/clean:
	cd /d E:\gavrilenko\untitled1\build\src && $(CMAKE_COMMAND) -P CMakeFiles\untitled1_autogen.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/untitled1_autogen.dir/clean

src/CMakeFiles/untitled1_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\gavrilenko\untitled1 E:\gavrilenko\untitled1\src E:\gavrilenko\untitled1\build E:\gavrilenko\untitled1\build\src E:\gavrilenko\untitled1\build\src\CMakeFiles\untitled1_autogen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/untitled1_autogen.dir/depend
