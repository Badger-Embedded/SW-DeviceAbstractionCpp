#if !defined(BADGER_DEVICE_H)
#define BADGER_DEVICE_H
#include <string>

namespace Badger
{
    enum class DeviceType {
        HUB,
        NODE
    };

    class Device {
    public:
        Device();
        virtual ~Device();
    private:
        DeviceType m_type;
        std::string m_name;
    };
} // namespace Badger

#endif // BADGER_DEVICE_H
