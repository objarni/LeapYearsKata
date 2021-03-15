cmake_minimum_required(VERSION 3.17)
project(leapyears_kata)
set(CMAKE_CXX_STANDARD 14)
include(FetchContent)
FetchContent_Declare(ApprovalTests
        GIT_REPOSITORY https://github.com/approvals/ApprovalTests.cpp.git
        GIT_TAG master)
set(APPROVAL_TESTS_BUILD_THIRD_PARTY_CATCH2 ON CACHE BOOL "")
FetchContent_MakeAvailable(ApprovalTests)
add_executable(unit_test src/main.cpp tests/test.cpp)
target_link_libraries(unit_test ApprovalTests::ApprovalTests Catch2::Catch2)
