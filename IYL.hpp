#ifndef IYL_HPP
#define IYL_HPP

#include <memory>

class IYL; // forward declaration (not strictly necessary here but may help with IntelliSense)


class IYL
{
public:
    double lowY;
    int index;
    std::unique_ptr<IYL> nxt;

    IYL(double lowy, int idx, std::unique_ptr<IYL> next)
        : lowY(lowy), index(idx), nxt(std::move(next)) {}
};

#endif // IYL_HPP
