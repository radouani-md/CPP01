#include "Zombie.hpp"

int main()
{
    int N = 3;
    Zombie *p;
    p = zombieHorde(N, "mohammed");
    if (!p)
        return 1;
    for (int i = 0; i < N; i++)
    {
        std::cout << "zombie " << i + 1 << "-->";
        p[i].announce();
    }
    delete [] p;
}