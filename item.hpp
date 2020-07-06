#include <iostream>

namespace Jotran{
    template <typename T>
    class Item
    {
    public:
        T x, y, z, w;
        Item(T x, T y, T z, T w) : x(x), y(y), z(z), w(w) {}
    };

    template <typename T>
    std::ostream &operator<<(std::ostream &out, const Item<T> &item) {
        return out << "x: " << item.x << " y: " << item.y << " z: " << item.z << " w: " << item.w << std::endl;
    }

    template <typename T>
    Item<T> operator+(const Item<T> &item1, const Item<T> &item2)
    {
        T new_x = item1.x + item2.x;
        T new_y = item1.y + item2.y;
        T new_z = item1.z + item2.z;
        T new_w = item1.w + item2.w;
        Item<T> i{new_x, new_y, new_z, new_w};
        return i;
    }

    template <typename T>
    Item<T> operator-(const Item<T> &item1, const Item<T> &item2)
    {
        T new_x = item1.x - item2.x;
        T new_y = item1.y - item2.y;
        T new_z = item1.z - item2.z;
        T new_w = item1.w - item2.w;
        Item<T> i{new_x, new_y, new_z, new_w};
        return i;
    }

    template <typename T>
    Item<T> operator-(const Item<T> &item1)
    {
        T new_x = -1 * item1.x;
        T new_y = -1 * item1.y;
        T new_z = -1 * item1.z;
        T new_w = -1 * item1.w;
        Item<T> i{new_x, new_y, new_z, new_w};
        return i;
    }
}
