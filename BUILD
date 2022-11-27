


cc_library(
    name = "challenge_math",
    hdrs = ["challenge_math.h"],
    srcs = ["challenge_math.cpp"],
    deps = [
        "//base:math",
        "//base:range",
    ],
)

cc_test(
    name = "challenge_math_test",
    size = "small",
    srcs = ["challenge_math_test.cpp"],
    deps = [
        "@com_google_googletest//:gtest_main", 
        ":challenge_math",
    ],
)


