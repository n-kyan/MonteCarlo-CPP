#pragma once

#include <cstdint>

namespace mcengine {

    class MonteCarloRNG {
        using result_type = double;
        using seed_type = std::uint64_t;
    };

}