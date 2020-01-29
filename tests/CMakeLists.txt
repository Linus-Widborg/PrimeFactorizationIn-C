add_subdirectory(3pp/cgreen-1.2.0)
#Workaround to find prebuilt cgreen. TODO: Find a better way
include_directories(3pp/cgreen-1.2.0/include)
link_directories(/usr/local/lib)

add_executable(runPrimeFactorizationTests primeFactorizationTests.c ../primeFactorization.c ../primeFactorization.h)

target_link_libraries(runPrimeFactorizationTests cgreen)

