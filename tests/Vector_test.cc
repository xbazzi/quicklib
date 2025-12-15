#include <iostream>
#include <string>

class Widget
{

    std::string name;
    int id;

  public:
    Widget(const std::string &n, int i) : name(n), id(i)
    {
        std::cout << "  → Widget(" << n << ", " << i << ") constructed\n";
    }

    Widget(const Widget &other) : name(other.name), id(other.id)
    {
        std::cout << "  → Widget COPIED\n";
    }

    Widget(Widget &&other) noexcept : name(std::move(other.name)), id(other.id)
    {
        std::cout << "  → Widget MOVED\n";
    }

    ~Widget()
    {
        std::cout << "  → Widget(" << name << ") destroyed\n";
    }
};
