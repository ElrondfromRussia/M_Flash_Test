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

# Include any dependencies generated for this target.
include src/CMakeFiles/untitled1.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/untitled1.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/untitled1.dir/flags.make

src/ui_mainwindow.h: ../src/mainwindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=E:\gavrilenko\untitled1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_mainwindow.h"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\5.5\mingw492_32\bin\uic.exe -o E:/gavrilenko/untitled1/build/src/ui_mainwindow.h E:/gavrilenko/untitled1/src/mainwindow.ui

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

src/CMakeFiles/untitled1.dir/fktester.cpp.obj: src/CMakeFiles/untitled1.dir/flags.make
src/CMakeFiles/untitled1.dir/fktester.cpp.obj: src/CMakeFiles/untitled1.dir/includes_CXX.rsp
src/CMakeFiles/untitled1.dir/fktester.cpp.obj: ../src/fktester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\gavrilenko\untitled1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/untitled1.dir/fktester.cpp.obj"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled1.dir\fktester.cpp.obj -c E:\gavrilenko\untitled1\src\fktester.cpp

src/CMakeFiles/untitled1.dir/fktester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/fktester.cpp.i"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\gavrilenko\untitled1\src\fktester.cpp > CMakeFiles\untitled1.dir\fktester.cpp.i

src/CMakeFiles/untitled1.dir/fktester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/fktester.cpp.s"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\gavrilenko\untitled1\src\fktester.cpp -o CMakeFiles\untitled1.dir\fktester.cpp.s

src/CMakeFiles/untitled1.dir/fktester.cpp.obj.requires:

.PHONY : src/CMakeFiles/untitled1.dir/fktester.cpp.obj.requires

src/CMakeFiles/untitled1.dir/fktester.cpp.obj.provides: src/CMakeFiles/untitled1.dir/fktester.cpp.obj.requires
	$(MAKE) -f src\CMakeFiles\untitled1.dir\build.make src/CMakeFiles/untitled1.dir/fktester.cpp.obj.provides.build
.PHONY : src/CMakeFiles/untitled1.dir/fktester.cpp.obj.provides

src/CMakeFiles/untitled1.dir/fktester.cpp.obj.provides.build: src/CMakeFiles/untitled1.dir/fktester.cpp.obj


src/CMakeFiles/untitled1.dir/main.cpp.obj: src/CMakeFiles/untitled1.dir/flags.make
src/CMakeFiles/untitled1.dir/main.cpp.obj: src/CMakeFiles/untitled1.dir/includes_CXX.rsp
src/CMakeFiles/untitled1.dir/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\gavrilenko\untitled1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/untitled1.dir/main.cpp.obj"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled1.dir\main.cpp.obj -c E:\gavrilenko\untitled1\src\main.cpp

src/CMakeFiles/untitled1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/main.cpp.i"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\gavrilenko\untitled1\src\main.cpp > CMakeFiles\untitled1.dir\main.cpp.i

src/CMakeFiles/untitled1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/main.cpp.s"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\gavrilenko\untitled1\src\main.cpp -o CMakeFiles\untitled1.dir\main.cpp.s

src/CMakeFiles/untitled1.dir/main.cpp.obj.requires:

.PHONY : src/CMakeFiles/untitled1.dir/main.cpp.obj.requires

src/CMakeFiles/untitled1.dir/main.cpp.obj.provides: src/CMakeFiles/untitled1.dir/main.cpp.obj.requires
	$(MAKE) -f src\CMakeFiles\untitled1.dir\build.make src/CMakeFiles/untitled1.dir/main.cpp.obj.provides.build
.PHONY : src/CMakeFiles/untitled1.dir/main.cpp.obj.provides

src/CMakeFiles/untitled1.dir/main.cpp.obj.provides.build: src/CMakeFiles/untitled1.dir/main.cpp.obj


src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj: src/CMakeFiles/untitled1.dir/flags.make
src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj: src/CMakeFiles/untitled1.dir/includes_CXX.rsp
src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj: ../src/mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\gavrilenko\untitled1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled1.dir\mainwindow.cpp.obj -c E:\gavrilenko\untitled1\src\mainwindow.cpp

src/CMakeFiles/untitled1.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/mainwindow.cpp.i"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\gavrilenko\untitled1\src\mainwindow.cpp > CMakeFiles\untitled1.dir\mainwindow.cpp.i

src/CMakeFiles/untitled1.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/mainwindow.cpp.s"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\gavrilenko\untitled1\src\mainwindow.cpp -o CMakeFiles\untitled1.dir\mainwindow.cpp.s

src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj.requires:

.PHONY : src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj.requires

src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj.provides: src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj.requires
	$(MAKE) -f src\CMakeFiles\untitled1.dir\build.make src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj.provides.build
.PHONY : src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj.provides

src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj.provides.build: src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj


src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj: src/CMakeFiles/untitled1.dir/flags.make
src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj: src/CMakeFiles/untitled1.dir/includes_CXX.rsp
src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj: src/qrc_imgs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\gavrilenko\untitled1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled1.dir\qrc_imgs.cpp.obj -c E:\gavrilenko\untitled1\build\src\qrc_imgs.cpp

src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/qrc_imgs.cpp.i"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\gavrilenko\untitled1\build\src\qrc_imgs.cpp > CMakeFiles\untitled1.dir\qrc_imgs.cpp.i

src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/qrc_imgs.cpp.s"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\gavrilenko\untitled1\build\src\qrc_imgs.cpp -o CMakeFiles\untitled1.dir\qrc_imgs.cpp.s

src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.requires:

.PHONY : src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.requires

src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.provides: src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.requires
	$(MAKE) -f src\CMakeFiles\untitled1.dir\build.make src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.provides.build
.PHONY : src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.provides

src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.provides.build: src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj


src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj: src/CMakeFiles/untitled1.dir/flags.make
src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj: src/CMakeFiles/untitled1.dir/includes_CXX.rsp
src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj: src/untitled1_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\gavrilenko\untitled1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\untitled1.dir\untitled1_autogen\mocs_compilation.cpp.obj -c E:\gavrilenko\untitled1\build\src\untitled1_autogen\mocs_compilation.cpp

src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.i"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\gavrilenko\untitled1\build\src\untitled1_autogen\mocs_compilation.cpp > CMakeFiles\untitled1.dir\untitled1_autogen\mocs_compilation.cpp.i

src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.s"
	cd /d E:\gavrilenko\untitled1\build\src && C:\Qt\Qt5.5.0\Tools\mingw492_32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\gavrilenko\untitled1\build\src\untitled1_autogen\mocs_compilation.cpp -o CMakeFiles\untitled1.dir\untitled1_autogen\mocs_compilation.cpp.s

src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.requires:

.PHONY : src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.requires

src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.provides: src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.requires
	$(MAKE) -f src\CMakeFiles\untitled1.dir\build.make src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.provides.build
.PHONY : src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.provides

src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.provides.build: src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj


# Object files for target untitled1
untitled1_OBJECTS = \
"CMakeFiles/untitled1.dir/fktester.cpp.obj" \
"CMakeFiles/untitled1.dir/main.cpp.obj" \
"CMakeFiles/untitled1.dir/mainwindow.cpp.obj" \
"CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj" \
"CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj"

# External object files for target untitled1
untitled1_EXTERNAL_OBJECTS =

bin/untitled1.exe: src/CMakeFiles/untitled1.dir/fktester.cpp.obj
bin/untitled1.exe: src/CMakeFiles/untitled1.dir/main.cpp.obj
bin/untitled1.exe: src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj
bin/untitled1.exe: src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj
bin/untitled1.exe: src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj
bin/untitled1.exe: src/CMakeFiles/untitled1.dir/build.make
bin/untitled1.exe: C:/Qt/Qt5.5.0/5.5/mingw492_32/lib/libQt5Widgets.a
bin/untitled1.exe: C:/Qt/Qt5.5.0/5.5/mingw492_32/lib/libQt5Xml.a
bin/untitled1.exe: C:/Qt/Qt5.5.0/5.5/mingw492_32/lib/libQt5Gui.a
bin/untitled1.exe: C:/Qt/Qt5.5.0/5.5/mingw492_32/lib/libQt5Core.a
bin/untitled1.exe: C:/Qt/Qt5.5.0/5.5/mingw492_32/lib/libqtmain.a
bin/untitled1.exe: src/CMakeFiles/untitled1.dir/linklibs.rsp
bin/untitled1.exe: src/CMakeFiles/untitled1.dir/objects1.rsp
bin/untitled1.exe: src/CMakeFiles/untitled1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\gavrilenko\untitled1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable ..\bin\untitled1.exe"
	cd /d E:\gavrilenko\untitled1\build\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\untitled1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/untitled1.dir/build: bin/untitled1.exe

.PHONY : src/CMakeFiles/untitled1.dir/build

src/CMakeFiles/untitled1.dir/requires: src/CMakeFiles/untitled1.dir/fktester.cpp.obj.requires
src/CMakeFiles/untitled1.dir/requires: src/CMakeFiles/untitled1.dir/main.cpp.obj.requires
src/CMakeFiles/untitled1.dir/requires: src/CMakeFiles/untitled1.dir/mainwindow.cpp.obj.requires
src/CMakeFiles/untitled1.dir/requires: src/CMakeFiles/untitled1.dir/qrc_imgs.cpp.obj.requires
src/CMakeFiles/untitled1.dir/requires: src/CMakeFiles/untitled1.dir/untitled1_autogen/mocs_compilation.cpp.obj.requires

.PHONY : src/CMakeFiles/untitled1.dir/requires

src/CMakeFiles/untitled1.dir/clean:
	cd /d E:\gavrilenko\untitled1\build\src && $(CMAKE_COMMAND) -P CMakeFiles\untitled1.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/untitled1.dir/clean

src/CMakeFiles/untitled1.dir/depend: src/ui_mainwindow.h
src/CMakeFiles/untitled1.dir/depend: src/qrc_imgs.cpp
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\gavrilenko\untitled1 E:\gavrilenko\untitled1\src E:\gavrilenko\untitled1\build E:\gavrilenko\untitled1\build\src E:\gavrilenko\untitled1\build\src\CMakeFiles\untitled1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/untitled1.dir/depend

