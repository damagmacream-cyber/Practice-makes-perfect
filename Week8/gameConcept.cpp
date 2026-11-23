#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <chrono>
using namespace std;

using Clock = chrono::steady_clock;

struct Upgrade {
    string name;
    int owned = 0;
    double cost = 10.0;
    double growth = 1.15;
};

const double MINER_PRODUCTION = 1.0;  // coins per second, per miner
const double CLICK_PRODUCTION = 1.0;  // extra coins per click, per click upgrade
const double SKIP_SECONDS = 10.0;     // how far [w] skips ahead

// 1500 -> "1.50K", 2300000 -> "2.30M"
string formatNumber(double n) {
    const char* suffix[] = {"", "K", "M", "B", "T"};
    int i = 0;
    while (n >= 1000 && i < 4) {
        n /= 1000;
        i++;
    }
    ostringstream out;
    out << fixed << setprecision(i == 0 ? 0 : 2) << n << suffix[i];
    return out.str();
}

bool tryBuy(double& coins, Upgrade& u) {
    if (coins < u.cost) {
        cout << "Not enough coins! Need " << formatNumber(u.cost) << "." << endl;
        return false;
    }
    coins -= u.cost;
    u.owned++;
    u.cost *= u.growth;
    cout << "Bought " << u.name << "!" << endl;
    return true;
}

double multiplierBoost(const Upgrade& m) {
    return 1 + m.owned;
}

double incomePerSecond(const Upgrade& miner, const Upgrade& multi) {
    return miner.owned * MINER_PRODUCTION * multiplierBoost(multi);
}

double coinsPerClick(const Upgrade& clicker, const Upgrade& multi) {
    return (1 + clicker.owned * CLICK_PRODUCTION) * multiplierBoost(multi);
}

// Adds income for the real time that has passed since the last call
void accrue(double& coins, double perSecond, Clock::time_point& last) {
    Clock::time_point now = Clock::now();
    coins += perSecond * chrono::duration<double>(now - last).count();
    last = now;
}

void printUpgrade(char key, const Upgrade& u, double coins) {
    cout << "  [" << key << "] " << u.name
         << " (owned: " << u.owned << ")"
         << " - cost: " << formatNumber(u.cost)
         << (coins >= u.cost ? "   <- you can afford this" : "")
         << endl;
}

int main() {
    double coins = 0;
    Upgrade miner{"Miner", 0, 10.0, 1.15};
    Upgrade clicker{"Click upgrade", 0, 10.0, 1.17};
    Upgrade multi{"Multiplier", 0, 10.0, 2.5};

    Clock::time_point lastTime = Clock::now();

    cout << "Tiny Idle Game" << endl;
    cout << "Miners earn coins in real time, even while you think." << endl;

    while (true) {
        accrue(coins, incomePerSecond(miner, multi), lastTime);

        cout << "\n==============================" << endl;
        cout << "Coins: " << formatNumber(coins) << endl;
        cout << "Income: " << formatNumber(incomePerSecond(miner, multi)) << "/sec"
             << " | Per click: " << formatNumber(coinsPerClick(clicker, multi)) << endl
             << endl;

        printUpgrade('b', miner, coins);
        printUpgrade('v', clicker, coins);
        printUpgrade('m', multi, coins);
        cout << "  [c] Click for coins" << endl;
        cout << "  [w] Skip ahead " << (int)SKIP_SECONDS << " seconds" << endl;
        cout << "  [q] Quit" << endl;
        cout << "Choose (Enter alone = refresh): ";

        string line;
        if (!getline(cin, line)) break;  // stop if input ends
        char choice = line.empty() ? ' ' : tolower((unsigned char)line[0]);

        // Count the time spent thinking before acting on the choice
        accrue(coins, incomePerSecond(miner, multi), lastTime);

        if (choice == 'c') {
            coins += coinsPerClick(clicker, multi);
        } else if (choice == 'b') {
            tryBuy(coins, miner);
        } else if (choice == 'v') {
            tryBuy(coins, clicker);
        } else if (choice == 'm') {
            tryBuy(coins, multi);
        } else if (choice == 'w') {
            coins += incomePerSecond(miner, multi) * SKIP_SECONDS;
        } else if (choice == 'q') {
            break;
        } else if (choice != ' ') {
            cout << "Unknown option: " << line << endl;
        }
    }

    return 0;
}