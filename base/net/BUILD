

cc_library(
    name = "ipv4",
    hdrs = ["ipv4.h"],
    srcs = ["ipv4.cpp"],
)

cc_test(
     name = "ipv4_test",
     size = "small",
     srcs = ["ipv4_test.cpp"],
     deps = [
        "@com_google_googletest//:gtest_main",
        ":ipv4",
     ]
)
