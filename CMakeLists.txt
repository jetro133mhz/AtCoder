cmake_minimum_required(VERSION 3.14)
project(AtCoderProjects)

set(CMAKE_CXX_STANDARD 20)

# サブフォルダのCMakeLists.txtを読み込む
add_subdirectory(abc/zone2021)
#add_subdirectory(abc/202)
#add_subdirectory(test)