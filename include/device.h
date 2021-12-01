#if !defined(BADGER_DEVICE_H)
#define BADGER_DEVICE_H
#include <string>
#include <vector>
#include <memory>
#include "iodevice.h"

namespace Badger
{
    enum class DeviceType {
        HUB,
        NODE
    };

    enum ConnectionType {
        WiFi = 0x1,
        Bluetooth = (0x1 << 1)
    };

    class Device {
    public:
        Device(std::string name, DeviceType type, uint8_t connection_capabilities);
        virtual ~Device();

        virtual void setup() = 0;

    private:
        const std::string m_name;
        const DeviceType m_type;
        const u_int8_t m_connection_capabilities;
    };
} // namespace Badger

#endif // BADGER_DEVICE_H
