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
CMAKE_SOURCE_DIR = E:\gavrilenko\M_FlaTest\src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\gavrilenko\M_FlaTest\src-build

# Include any dependencies generated for this target.
include CMakeFiles/untitled1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled1.dir/flags.make

ui_mainwindow.h: E:/gavrilenko/M_FlaTest/src/mainwindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=E:\gavrilenko\M_FlaTest\src-build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_mainwindow.h"
	C:\Qt\Qt5.5.0\5.5\mingw492_32\bin\uic.exe -o E:/gavrilenko/M_FlaTest/src-build/ui_mainwindow.h E:/gavrilenko/M_FlaTest/src/mainwindow.ui

qrc_imgs.cpp: E:/gavrilenko/M_FlaTest/src/imgs/accessories-text-editor2.png
qrc_imgs.cpp: E:/gavrilenko/M_FlaTest/src/imgs/clear.png
qrc_imgs.cpp: E:/gavrilenko/M_FlaTest/src/imgs/expression@2x.png
qrc_imgs.cpp: E:/gavrilenko/M_FlaTest/src/imgs/home-page1.png
qrc_imgs.cpp: E:/gavrilenko/M_FlaTest/src/imgs/icon_img.png
qrc_imgs.cpp: E:/gavrilenko/M_FlaTest/src/imgs/remove.png
qrc_imgs.cpp: E:/gavrilenko/M_FlaTest/src/imgs/settings_min.png
qrc_imgs.cpp: E:/gavrilenko/M_FlaTest/src/imgs.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=E:\gavrilenko\M_FlaTest\src-build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating qrc_imgs.cpp"
	C:\Qt\Qt5.5.0\5.5\mingw492_32\bin\rcc.exe --name imgs --output E:/gavrilenko/M_FlaTest/src-build/qrc_imgs.cpp E:/gavrilenko/M_FlaTest/src/imgs.qrc

CMakeFiles/untitled1.dir/fktester.cpp.obj: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/fktester.cpp.obj: CMakeFiles/untitled1.dir/includes_CXX.rsp
CMakeFiles/untitled1.dir/fktester.cpp.obj: E:/gavrilenko/M_FlaTest/src/fktester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\gavrilenko\M_FlaTest\src-build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/untitled1.dir/fktester.cpp.obj"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled1.dir\fktester.cpp.obj -c E:\gavrilenko\M_FlaTest\src\fktester.cpp

CMakeFiles/untitled1.dir/fktester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/fktester.cpp.i"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\gavrilenko\M_FlaTest\src\fktester.cpp > CMakeFiles\untitled1.dir\fktester.cpp.i

CMakeFiles/untitled1.dir/fktester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/fktester.cpp.s"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\gavrilenko\M_FlaTest\src\fktester.cpp -o CMakeFiles\untitled1.dir\fktester.cpp.s

CMakeFiles/untitled1.dir/fktester.cpp.obj.requires:

.PHONY : CMakeFiles/untitled1.dir/fktester.cpp.obj.requires

CMakeFiles/untitled1.dir/fktester.cpp.obj.provides: CMakeFiles/untitled1.dir/fktester.cpp.obj.requires
	$(MAKE) -f CMakeFiles\untitled1.dir\build.make CMakeFiles/untitled1.dir/fktester.cpp.obj.provides.build
.PHONY : CMakeFiles/untitled1.dir/fktester.cpp.obj.provides

CMakeFiles/untitled1.dir/fktester.cpp.obj.provides.build: CMakeFiles/untitled1.dir/fktester.cpp.obj


CMakeFiles/untitled1.dir/main.cpp.obj: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/main.cpp.obj: CMakeFiles/untitled1.dir/includes_CXX.rsp
CMakeFiles/untitled1.dir/main.cpp.obj: E:/gavrilenko/M_FlaTest/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\gavrilenko\M_FlaTest\src-build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/untitled1.dir/main.cpp.obj"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled1.dir\main.cpp.obj -c E:\gavrilenko\M_FlaTest\src\main.cpp

CMakeFiles/untitled1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/main.cpp.i"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\gavrilenko\M_FlaTest\src\main.cpp > CMakeFiles\untitled1.dir\main.cpp.i

CMakeFiles/untitled1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/main.cpp.s"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\gavrilenko\M_FlaTest\src\main.cpp -o CMakeFiles\untitled1.dir\main.cpp.s

CMakeFiles/untitled1.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/untitled1.dir/main.cpp.obj.requires

CMakeFiles/untitled1.dir/main.cpp.obj.provides: CMakeFiles/untitled1.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\untitled1.dir\build.make CMakeFiles/untitled1.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/untitled1.dir/main.cpp.obj.provides

CMakeFiles/untitled1.dir/main.cpp.obj.provides.build: CMakeFiles/untitled1.dir/main.cpp.obj


CMakeFiles/untitled1.dir/mainwindow.cpp.obj: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/mainwindow.cpp.obj: CMakeFiles/untitled1.dir/includes_CXX.rsp
CMakeFiles/untitled1.dir/mainwindow.cpp.obj: E:/gavrilenko/M_FlaTest/src/mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\gavrilenko\M_FlaTest\src-build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/untitled1.dir/mainwindow.cpp.obj"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled1.dir\mainwindow.cpp.obj -c E:\gavrilenko\M_FlaTest\src\mainwindow.cpp

CMakeFiles/untitled1.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/mainwindow.cpp.i"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\gavrilenko\M_FlaTest\src\mainwindow.cpp > CMakeFiles\untitled1.dir\mainwindow.cpp.i

CMakeFiles/untitled1.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/mainwindow.cpp.s"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\gavrilenko\M_FlaTest\src\mainwindow.cpp -o CMakeFiles\untitled1.dir\mainwindow.cpp.s

CMakeFiles/untitled1.dir/mainwindow.cpp.obj.requires:

.PHONY : CMakeFiles/untitled1.dir/mainwindow.cpp.obj.requires

CMakeFiles/untitled1.dir/mainwindow.cpp.obj.provides: CMakeFiles/untitled1.dir/mainwindow.cpp.obj.requires
	$(MAKE) -f CMakeFiles\untitled1.dir\build.make CMakeFiles/untitled1.dir/mainwindow.cpp.obj.provides.build
.PHONY : CMakeFiles/untitled1.dir/mainwindow.cpp.obj.provides

CMakeFiles/untitled1.dir/mainwindow.cpp.obj.provides.build: CMakeFiles/untitled1.dir/mainwindow.cpp.obj


CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj: CMakeFiles/untitled1.dir/includes_CXX.rsp
CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj: qrc_imgs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\gavrilenko\M_FlaTest\src-build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled1.dir\qrc_imgs.cpp.obj -c E:\gavrilenko\M_FlaTest\src-build\qrc_imgs.cpp

CMakeFiles/untitled1.dir/qrc_imgs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/qrc_imgs.cpp.i"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\gavrilenko\M_FlaTest\src-build\qrc_imgs.cpp > CMakeFiles\untitled1.dir\qrc_imgs.cpp.i

CMakeFiles/untitled1.dir/qrc_imgs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/qrc_imgs.cpp.s"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\gavrilenko\M_FlaTest\src-build\qrc_imgs.cpp -o CMakeFiles\untitled1.dir\qrc_imgs.cpp.s

CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.requires:

.PHONY : CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.requires

CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.provides: CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.requires
	$(MAKE) -f CMakeFiles\untitled1.dir\build.make CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.provides.build
.PHONY : CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.provides

CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.provides.build: CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj


CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj: CMakeFiles/untitled1.dir/includes_CXX.rsp
CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj: untitled1_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\gavrilenko\M_FlaTest\src-build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled1.dir\untitled1_autogen\mocs_compilation.cpp.obj -c E:\gavrilenko\M_FlaTest\src-build\untitled1_autogen\mocs_compilation.cpp

CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.i"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\gavrilenko\M_FlaTest\src-build\untitled1_autogen\mocs_compilation.cpp > CMakeFiles\untitled1.dir\untitled1_autogen\mocs_compilation.cpp.i

CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.s"
	C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\gavrilenko\M_FlaTest\src-build\untitled1_autogen\mocs_compilation.cpp -o CMakeFiles\untitled1.dir\untitled1_autogen\mocs_compilation.cpp.s

CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.requires:

.PHONY : CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.requires

CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.provides: CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.requires
	$(MAKE) -f CMakeFiles\untitled1.dir\build.make CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.provides.build
.PHONY : CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.provides

CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.provides.build: CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj


# Object files for target untitled1
untitled1_OBJECTS = \
"CMakeFiles/untitled1.dir/fktester.cpp.obj" \
"CMakeFiles/untitled1.dir/main.cpp.obj" \
"CMakeFiles/untitled1.dir/mainwindow.cpp.obj" \
"CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj" \
"CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj"

# External object files for target untitled1
untitled1_EXTERNAL_OBJECTS =

untitled1.exe: CMakeFiles/untitled1.dir/fktester.cpp.obj
untitled1.exe: CMakeFiles/untitled1.dir/main.cpp.obj
untitled1.exe: CMakeFiles/untitled1.dir/mainwindow.cpp.obj
untitled1.exe: CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj
untitled1.exe: CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj
untitled1.exe: CMakeFiles/untitled1.dir/build.make
untitled1.exe: C:/Qt/Qt5.5.0/5.5/mingw492_32/lib/libQt5Widgets.a
untitled1.exe: C:/Qt/Qt5.5.0/5.5/mingw492_32/lib/libQt5Xml.a
untitled1.exe: C:/Qt/Qt5.5.0/5.5/mingw492_32/lib/libQt5Gui.a
untitled1.exe: C:/Qt/Qt5.5.0/5.5/mingw492_32/lib/libQt5Core.a
untitled1.exe: C:/Qt/Qt5.5.0/5.5/mingw492_32/lib/libqtmain.a
untitled1.exe: CMakeFiles/untitled1.dir/linklibs.rsp
untitled1.exe: CMakeFiles/untitled1.dir/objects1.rsp
untitled1.exe: CMakeFiles/untitled1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\gavrilenko\M_FlaTest\src-build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable untitled1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\untitled1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled1.dir/build: untitled1.exe

.PHONY : CMakeFiles/untitled1.dir/build

CMakeFiles/untitled1.dir/requires: CMakeFiles/untitled1.dir/fktester.cpp.obj.requires
CMakeFiles/untitled1.dir/requires: CMakeFiles/untitled1.dir/main.cpp.obj.requires
CMakeFiles/untitled1.dir/requires: CMakeFiles/untitled1.dir/mainwindow.cpp.obj.requires
CMakeFiles/untitled1.dir/requires: CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.requires
CMakeFiles/untitled1.dir/requires: CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.requires

.PHONY : CMakeFiles/untitled1.dir/requires

CMakeFiles/untitled1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\untitled1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/untitled1.dir/clean

CMakeFiles/untitled1.dir/depend: ui_mainwindow.h
CMakeFiles/untitled1.dir/depend: qrc_imgs.cpp
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\gavrilenko\M_FlaTest\src E:\gavrilenko\M_FlaTest\src E:\gavrilenko\M_FlaTest\src-build E:\gavrilenko\M_FlaTest\src-build E:\gavrilenko\M_FlaTest\src-build\CMakeFiles\untitled1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled1.dir/depend

