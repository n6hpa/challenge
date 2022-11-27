
cc_library(
    name = "math",
    hdrs = ["math.h"],
    srcs = ["math.cpp"],
    deps = [
        ":range",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
  name = "math_test",
  size = "small",
  srcs = ["math_test.cpp"],
  deps = [
    ":math",
    "@com_google_googletest//:gtest_main",
  ],
)

cc_library(
    name = "range",
    hdrs = ["range.h"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "range_test",
    size = "small",
    srcs = ["range_test.cpp"],
    deps = [
        ":range",
        "@com_google_googletest//:gtest_main",
    ],
)