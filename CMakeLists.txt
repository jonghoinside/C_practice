cmake_minimum_required(VERSION 3.16)
project(C_practice)

set(CMAKE_CXX_STANDARD 14)

add_executable(prac01 practice01/main.c practice01/solution.c)  #  두 개 뽑아서 더하기
add_executable(prac02 practice02/main.c practice02/solution.c)  #  음양 더하기
add_executable(prac03 practice03/main.c practice03/solution.c)  #  2016년
add_executable(prac04 practice04/main.c practice04/solution.c)  #  3진법 뒤집기
add_executable(prac05 practice05/main.c practice05/solution.c)  #  큰 수 만들기
add_executable(prac06 practice06/main.c practice06/solution.c)  #  소수 만들기
add_executable(prac07 practice07/main.c practice07/solution.c)  #  로또의 최고 순위와 최저 순위
add_executable(prac08 practice08/main.c practice08/solution.c)  #  약수의 개수와 덧셈
add_executable(prac09 practice09/main.c practice09/solution.c)  #  N개의 최소공배수
add_executable(prac10 practice10/main.c practice10/solution.c)  #  최솟값 만들기
add_executable(prac11 practice11/main.c practice11/solution.c)  #  방문 길이
add_executable(prac12 practice12/main.c practice12/solution.c)  #  가장 큰 수