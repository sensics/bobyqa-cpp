#pragma once

#include <cmath>

#ifdef DEBUG

#include <cstdio>

#define DEBUG_LOG(what) fprintf(stderr, what)

#else

#define DEBUG_LOG(what)

#endif

namespace bobyqa_detail {

const double sqrt_2 = std::sqrt(2.0);
const double sqrt_0_5 = std::sqrt(0.5);

inline constexpr double square(const double x) {
    return x * x;
}

} // namespace bobyqa_detail
