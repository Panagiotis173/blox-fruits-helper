// raids.cpp — part of blox-fruits-helper.

#include "bloxfruitshelper/raids.h"

#include <cstdio>

namespace bloxfruitshelper {

Raids::Raids(const std::string& config_path)
    : config_path_(config_path) {}

void Raids::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Raids::run() {
    if (verbose_) std::fprintf(stderr, "[blox-fruits-helper] raids: run\n");
    // core logic lives here
    return true;
}

}  // namespace bloxfruitshelper
