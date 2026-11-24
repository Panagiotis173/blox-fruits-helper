// main.cpp — entry point. Wires config and subsystems together.

#include "bloxfruitshelper/settings.h"
#include "bloxfruitshelper/grinder.h"
#include "bloxfruitshelper/quests.h"
#include "bloxfruitshelper/raids.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    bloxfruitshelper::Settings settings = bloxfruitshelper::Settings::load_default();
    bloxfruitshelper::Grinder grinder(settings.store_path);
    bloxfruitshelper::Quests quests(settings.store_path);
    bloxfruitshelper::Raids raids(settings.store_path);
    std::fprintf(stderr, "[blox-fruits-helper] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
