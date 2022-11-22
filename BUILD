
cc_library(
    name = "math",
    hdrs = ["math.h"],
    srcs = ["math.cpp"],
)

cc_test(
  name = "math_test",
  size = "small",
  srcs = ["math_test.cpp"],
  deps = [
    "@com_google_googletest//:gtest_main",
    "//:math",
  ],
)
