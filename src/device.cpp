#include "device.h"

namespace Badger
{
    Device::Device(std::string name, DeviceType type, uint8_t connection_capabilities):
        m_name{name}, m_type{type}, m_connection_capabilities{connection_capabilities} {

    }
    Device::~Device() {}

} // namespace Badger
