# cmake_minimum_required(VERSION <specify CMake version here>)
project(DataStructure)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructure main.cpp tree/BinaryTree.cpp tree/BinaryTree.h alltest/Exammation.cpp alltest/Exammation.h curriculumDesign/entity/KeyWord.h curriculumDesign/entity/KeyWords.h curriculumDesign/utils/FileUtils.cpp curriculumDesign/utils/FileUtils.h curriculumDesign/utils/CaculateUtils.cpp curriculumDesign/utils/CaculateUtils.h curriculumDesign/files/test1.cpp curriculumDesign/files/test2.cpp)