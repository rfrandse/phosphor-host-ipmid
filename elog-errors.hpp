// This file was autogenerated.  Do not edit!
// See elog-gen.py for more details
#pragma once

#include <string>
#include <tuple>
#include <type_traits>
#include <sdbusplus/exception.hpp>
#include <phosphor-logging/log.hpp>
#include <phosphor-logging/elog.hpp>

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Dump
{
namespace Create
{
namespace Error
{
    struct QuotaExceeded;
} // namespace Error
} // namespace Create
} // namespace Dump
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace org
{
namespace open_power
{
namespace Host
{
namespace Error
{
    struct Event;
} // namespace Error
} // namespace Host
} // namespace open_power
} // namespace org
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace State
{
namespace Host
{
namespace Error
{
    struct SoftOffTimeout;
} // namespace Error
} // namespace Host
} // namespace State
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Sensor
{
namespace Device
{
namespace Error
{
    struct ReadFailure;
} // namespace Error
} // namespace Device
} // namespace Sensor
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Control
{
namespace Device
{
namespace Error
{
    struct WriteFailure;
} // namespace Error
} // namespace Device
} // namespace Control
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace File
{
namespace Error
{
    struct Seek;
} // namespace Error
} // namespace File
} // namespace Common
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Control
{
namespace Host
{
namespace Error
{
    struct CommandNotSupported;
} // namespace Error
} // namespace Host
} // namespace Control
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Error
{
    struct InternalFailure;
} // namespace Error
} // namespace Common
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Callout
{
namespace Error
{
    struct Device;
} // namespace Error
} // namespace Callout
} // namespace Common
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace org
{
namespace open_power
{
namespace Host
{
namespace Access
{
namespace Error
{
    struct WriteCFAM;
} // namespace Error
} // namespace Access
} // namespace Host
} // namespace open_power
} // namespace org
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace File
{
namespace Error
{
    struct Open;
} // namespace Error
} // namespace File
} // namespace Common
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace org
{
namespace open_power
{
namespace Host
{
namespace Error
{
    struct Checkstop;
} // namespace Error
} // namespace Host
} // namespace open_power
} // namespace org
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace File
{
namespace Error
{
    struct Write;
} // namespace Error
} // namespace File
} // namespace Common
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Callout
{
namespace Error
{
    struct GPIO;
} // namespace Error
} // namespace Callout
} // namespace Common
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Error
{
    struct InvalidArgument;
} // namespace Error
} // namespace Common
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Dump
{
namespace Create
{
namespace Error
{
    struct Disabled;
} // namespace Error
} // namespace Create
} // namespace Dump
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Callout
{
namespace Error
{
    struct IPMISensor;
} // namespace Error
} // namespace Callout
} // namespace Common
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Error
{
    struct Timeout;
} // namespace Error
} // namespace Common
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Callout
{
namespace Error
{
    struct Inventory;
} // namespace Error
} // namespace Callout
} // namespace Common
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Callout
{
namespace Error
{
    struct IIC;
} // namespace Error
} // namespace Callout
} // namespace Common
} // namespace openbmc_project
} // namespace xyz
} // namespace sdbusplus

namespace sdbusplus
{
namespace org
{
namespace open_power
{
namespace Host
{
namespace Error
{
    struct WatchdogTimedOut;
} // namespace Error
} // namespace Host
} // namespace open_power
} // namespace org
} // namespace sdbusplus

namespace sdbusplus
{
namespace org
{
namespace open_power
{
namespace Host
{
namespace Access
{
namespace Error
{
    struct ReadCFAM;
} // namespace Error
} // namespace Access
} // namespace Host
} // namespace open_power
} // namespace org
} // namespace sdbusplus


namespace phosphor
{

namespace logging
{

namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Callout
{
namespace _Device
{

struct CALLOUT_ERRNO
{
    static constexpr auto str = "CALLOUT_ERRNO=%d";
    static constexpr auto str_short = "CALLOUT_ERRNO";
    using type = std::tuple<std::decay_t<decltype(str)>,int32_t>;
    explicit constexpr CALLOUT_ERRNO(int32_t a) : _entry(entry(str, a)) {};
    type _entry;
};
struct CALLOUT_DEVICE_PATH
{
    static constexpr auto str = "CALLOUT_DEVICE_PATH=%s";
    static constexpr auto str_short = "CALLOUT_DEVICE_PATH";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr CALLOUT_DEVICE_PATH(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _Device

struct Device
{
    static constexpr auto L = level::ERR;
    using CALLOUT_ERRNO = _Device::CALLOUT_ERRNO;
    using CALLOUT_DEVICE_PATH = _Device::CALLOUT_DEVICE_PATH;
    using metadata_types = std::tuple<CALLOUT_ERRNO, CALLOUT_DEVICE_PATH>;

};

} // namespace Callout
} // namespace Common
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Common::Callout::Error::Device>
{
    using type = xyz::openbmc_project::Common::Callout::Device;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Callout
{
namespace _GPIO
{

struct CALLOUT_GPIO_NUM
{
    static constexpr auto str = "CALLOUT_GPIO_NUM=%u";
    static constexpr auto str_short = "CALLOUT_GPIO_NUM";
    using type = std::tuple<std::decay_t<decltype(str)>,uint32_t>;
    explicit constexpr CALLOUT_GPIO_NUM(uint32_t a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _GPIO

struct GPIO
{
    static constexpr auto L = level::ERR;
    using CALLOUT_GPIO_NUM = _GPIO::CALLOUT_GPIO_NUM;
    using CALLOUT_ERRNO = xyz::openbmc_project::Common::Callout::Device::CALLOUT_ERRNO;
    using CALLOUT_DEVICE_PATH = xyz::openbmc_project::Common::Callout::Device::CALLOUT_DEVICE_PATH;
    using metadata_types = std::tuple<CALLOUT_GPIO_NUM, CALLOUT_ERRNO, CALLOUT_DEVICE_PATH>;

};

} // namespace Callout
} // namespace Common
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Common::Callout::Error::GPIO>
{
    using type = xyz::openbmc_project::Common::Callout::GPIO;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Callout
{
namespace _IIC
{

struct CALLOUT_IIC_BUS
{
    static constexpr auto str = "CALLOUT_IIC_BUS=%s";
    static constexpr auto str_short = "CALLOUT_IIC_BUS";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr CALLOUT_IIC_BUS(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};
struct CALLOUT_IIC_ADDR
{
    static constexpr auto str = "CALLOUT_IIC_ADDR=0x%hx";
    static constexpr auto str_short = "CALLOUT_IIC_ADDR";
    using type = std::tuple<std::decay_t<decltype(str)>,uint16_t>;
    explicit constexpr CALLOUT_IIC_ADDR(uint16_t a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _IIC

struct IIC
{
    static constexpr auto L = level::ERR;
    using CALLOUT_IIC_BUS = _IIC::CALLOUT_IIC_BUS;
    using CALLOUT_IIC_ADDR = _IIC::CALLOUT_IIC_ADDR;
    using CALLOUT_ERRNO = xyz::openbmc_project::Common::Callout::Device::CALLOUT_ERRNO;
    using CALLOUT_DEVICE_PATH = xyz::openbmc_project::Common::Callout::Device::CALLOUT_DEVICE_PATH;
    using metadata_types = std::tuple<CALLOUT_IIC_BUS, CALLOUT_IIC_ADDR, CALLOUT_ERRNO, CALLOUT_DEVICE_PATH>;

};

} // namespace Callout
} // namespace Common
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Common::Callout::Error::IIC>
{
    using type = xyz::openbmc_project::Common::Callout::IIC;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Callout
{
namespace _Inventory
{

struct CALLOUT_INVENTORY_PATH
{
    static constexpr auto str = "CALLOUT_INVENTORY_PATH=%s";
    static constexpr auto str_short = "CALLOUT_INVENTORY_PATH";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr CALLOUT_INVENTORY_PATH(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _Inventory

struct Inventory
{
    static constexpr auto L = level::ERR;
    using CALLOUT_INVENTORY_PATH = _Inventory::CALLOUT_INVENTORY_PATH;
    using metadata_types = std::tuple<CALLOUT_INVENTORY_PATH>;

};

} // namespace Callout
} // namespace Common
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Common::Callout::Error::Inventory>
{
    using type = xyz::openbmc_project::Common::Callout::Inventory;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace Callout
{
namespace _IPMISensor
{

struct CALLOUT_IPMI_SENSOR_NUM
{
    static constexpr auto str = "CALLOUT_IPMI_SENSOR_NUM=%u";
    static constexpr auto str_short = "CALLOUT_IPMI_SENSOR_NUM";
    using type = std::tuple<std::decay_t<decltype(str)>,uint32_t>;
    explicit constexpr CALLOUT_IPMI_SENSOR_NUM(uint32_t a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _IPMISensor

struct IPMISensor
{
    static constexpr auto L = level::ERR;
    using CALLOUT_IPMI_SENSOR_NUM = _IPMISensor::CALLOUT_IPMI_SENSOR_NUM;
    using metadata_types = std::tuple<CALLOUT_IPMI_SENSOR_NUM>;

};

} // namespace Callout
} // namespace Common
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Common::Callout::Error::IPMISensor>
{
    using type = xyz::openbmc_project::Common::Callout::IPMISensor;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace _Timeout
{

struct TIMEOUT_IN_MSEC
{
    static constexpr auto str = "TIMEOUT_IN_MSEC=%llu";
    static constexpr auto str_short = "TIMEOUT_IN_MSEC";
    using type = std::tuple<std::decay_t<decltype(str)>,uint64_t>;
    explicit constexpr TIMEOUT_IN_MSEC(uint64_t a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _Timeout

struct Timeout
{
    static constexpr auto L = level::ERR;
    using TIMEOUT_IN_MSEC = _Timeout::TIMEOUT_IN_MSEC;
    using metadata_types = std::tuple<TIMEOUT_IN_MSEC>;

};

} // namespace Common
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Common::Error::Timeout>
{
    using type = xyz::openbmc_project::Common::Timeout;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace _InternalFailure
{


}  // namespace _InternalFailure

struct InternalFailure
{
    static constexpr auto L = level::ERR;
    using metadata_types = std::tuple<>;

};

} // namespace Common
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Common::Error::InternalFailure>
{
    using type = xyz::openbmc_project::Common::InternalFailure;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace _InvalidArgument
{

struct ARGUMENT_NAME
{
    static constexpr auto str = "ARGUMENT_NAME=%s";
    static constexpr auto str_short = "ARGUMENT_NAME";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr ARGUMENT_NAME(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};
struct ARGUMENT_VALUE
{
    static constexpr auto str = "ARGUMENT_VALUE=%s";
    static constexpr auto str_short = "ARGUMENT_VALUE";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr ARGUMENT_VALUE(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _InvalidArgument

struct InvalidArgument
{
    static constexpr auto L = level::ERR;
    using ARGUMENT_NAME = _InvalidArgument::ARGUMENT_NAME;
    using ARGUMENT_VALUE = _InvalidArgument::ARGUMENT_VALUE;
    using metadata_types = std::tuple<ARGUMENT_NAME, ARGUMENT_VALUE>;

};

} // namespace Common
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Common::Error::InvalidArgument>
{
    using type = xyz::openbmc_project::Common::InvalidArgument;
};

}

namespace example
{
namespace xyz
{
namespace openbmc_project
{
namespace Example
{
namespace Device
{
namespace _Callout
{

struct CALLOUT_ERRNO_TEST
{
    static constexpr auto str = "CALLOUT_ERRNO_TEST=%d";
    static constexpr auto str_short = "CALLOUT_ERRNO_TEST";
    using type = std::tuple<std::decay_t<decltype(str)>,int32_t>;
    explicit constexpr CALLOUT_ERRNO_TEST(int32_t a) : _entry(entry(str, a)) {};
    type _entry;
};
struct CALLOUT_DEVICE_PATH_TEST
{
    static constexpr auto str = "CALLOUT_DEVICE_PATH_TEST=%s";
    static constexpr auto str_short = "CALLOUT_DEVICE_PATH_TEST";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr CALLOUT_DEVICE_PATH_TEST(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _Callout

struct Callout : public sdbusplus::exception_t
{
    static constexpr auto errName = "example.xyz.openbmc_project.Example.Device.Callout";
    static constexpr auto errDesc = "Generic device callout";
    static constexpr auto L = level::ERR;
    using CALLOUT_ERRNO_TEST = _Callout::CALLOUT_ERRNO_TEST;
    using CALLOUT_DEVICE_PATH_TEST = _Callout::CALLOUT_DEVICE_PATH_TEST;
    using metadata_types = std::tuple<CALLOUT_ERRNO_TEST, CALLOUT_DEVICE_PATH_TEST>;

    const char* name() const noexcept
    {
        return errName;
    }

    const char* description() const noexcept
    {
        return errDesc;
    }

    const char* what() const noexcept
    {
        return errName;
    }
};

} // namespace Device
} // namespace Example
} // namespace openbmc_project
} // namespace xyz
} // namespace example



namespace xyz
{
namespace openbmc_project
{
namespace Sensor
{
namespace Device
{
namespace _ReadFailure
{


}  // namespace _ReadFailure

struct ReadFailure
{
    static constexpr auto L = level::ERR;
    using CALLOUT_ERRNO = xyz::openbmc_project::Common::Callout::Device::CALLOUT_ERRNO;
    using CALLOUT_DEVICE_PATH = xyz::openbmc_project::Common::Callout::Device::CALLOUT_DEVICE_PATH;
    using metadata_types = std::tuple<CALLOUT_ERRNO, CALLOUT_DEVICE_PATH>;

};

} // namespace Device
} // namespace Sensor
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Sensor::Device::Error::ReadFailure>
{
    using type = xyz::openbmc_project::Sensor::Device::ReadFailure;
};

}

namespace org
{
namespace open_power
{
namespace Host
{
namespace _Checkstop
{


}  // namespace _Checkstop

struct Checkstop
{
    static constexpr auto L = level::ERR;
    using metadata_types = std::tuple<>;

};

} // namespace Host
} // namespace open_power
} // namespace org


namespace details
{

template <>
struct map_exception_type<sdbusplus::org::open_power::Host::Error::Checkstop>
{
    using type = org::open_power::Host::Checkstop;
};

}

namespace org
{
namespace open_power
{
namespace Host
{
namespace _WatchdogTimedOut
{


}  // namespace _WatchdogTimedOut

struct WatchdogTimedOut
{
    static constexpr auto L = level::ERR;
    using metadata_types = std::tuple<>;

};

} // namespace Host
} // namespace open_power
} // namespace org


namespace details
{

template <>
struct map_exception_type<sdbusplus::org::open_power::Host::Error::WatchdogTimedOut>
{
    using type = org::open_power::Host::WatchdogTimedOut;
};

}

namespace example
{
namespace xyz
{
namespace openbmc_project
{
namespace Example
{
namespace Elog
{
namespace _TestErrorTwo
{

struct DEV_ADDR
{
    static constexpr auto str = "DEV_ADDR=0x%.8X";
    static constexpr auto str_short = "DEV_ADDR";
    using type = std::tuple<std::decay_t<decltype(str)>,uint32_t>;
    explicit constexpr DEV_ADDR(uint32_t a) : _entry(entry(str, a)) {};
    type _entry;
};
struct DEV_ID
{
    static constexpr auto str = "DEV_ID=%u";
    static constexpr auto str_short = "DEV_ID";
    using type = std::tuple<std::decay_t<decltype(str)>,uint32_t>;
    explicit constexpr DEV_ID(uint32_t a) : _entry(entry(str, a)) {};
    type _entry;
};
struct DEV_NAME
{
    static constexpr auto str = "DEV_NAME=%s";
    static constexpr auto str_short = "DEV_NAME";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr DEV_NAME(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _TestErrorTwo

struct TestErrorTwo : public sdbusplus::exception_t
{
    static constexpr auto errName = "example.xyz.openbmc_project.Example.Elog.TestErrorTwo";
    static constexpr auto errDesc = "This is test error two";
    static constexpr auto L = level::ERR;
    using DEV_ADDR = _TestErrorTwo::DEV_ADDR;
    using DEV_ID = _TestErrorTwo::DEV_ID;
    using DEV_NAME = _TestErrorTwo::DEV_NAME;
    using metadata_types = std::tuple<DEV_ADDR, DEV_ID, DEV_NAME>;

    const char* name() const noexcept
    {
        return errName;
    }

    const char* description() const noexcept
    {
        return errDesc;
    }

    const char* what() const noexcept
    {
        return errName;
    }
};

} // namespace Elog
} // namespace Example
} // namespace openbmc_project
} // namespace xyz
} // namespace example



namespace example
{
namespace xyz
{
namespace openbmc_project
{
namespace Example
{
namespace Elog
{
namespace _AutoTestSimple
{

struct STRING
{
    static constexpr auto str = "STRING=%s";
    static constexpr auto str_short = "STRING";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr STRING(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _AutoTestSimple

struct AutoTestSimple : public sdbusplus::exception_t
{
    static constexpr auto errName = "example.xyz.openbmc_project.Example.Elog.AutoTestSimple";
    static constexpr auto errDesc = "This is a simple test error.";
    static constexpr auto L = level::ERR;
    using STRING = _AutoTestSimple::STRING;
    using metadata_types = std::tuple<STRING>;

    const char* name() const noexcept
    {
        return errName;
    }

    const char* description() const noexcept
    {
        return errDesc;
    }

    const char* what() const noexcept
    {
        return errName;
    }
};

} // namespace Elog
} // namespace Example
} // namespace openbmc_project
} // namespace xyz
} // namespace example



namespace example
{
namespace xyz
{
namespace openbmc_project
{
namespace Example
{
namespace Elog
{
namespace _TestCallout
{

struct DEV_ADDR
{
    static constexpr auto str = "DEV_ADDR=0x%.8X";
    static constexpr auto str_short = "DEV_ADDR";
    using type = std::tuple<std::decay_t<decltype(str)>,uint32_t>;
    explicit constexpr DEV_ADDR(uint32_t a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _TestCallout

struct TestCallout : public sdbusplus::exception_t
{
    static constexpr auto errName = "example.xyz.openbmc_project.Example.Elog.TestCallout";
    static constexpr auto errDesc = "This is test error TestCallout";
    static constexpr auto L = level::ERR;
    using DEV_ADDR = _TestCallout::DEV_ADDR;
    using CALLOUT_ERRNO_TEST = example::xyz::openbmc_project::Example::Device::Callout::CALLOUT_ERRNO_TEST;
    using CALLOUT_DEVICE_PATH_TEST = example::xyz::openbmc_project::Example::Device::Callout::CALLOUT_DEVICE_PATH_TEST;
    using metadata_types = std::tuple<DEV_ADDR, CALLOUT_ERRNO_TEST, CALLOUT_DEVICE_PATH_TEST>;

    const char* name() const noexcept
    {
        return errName;
    }

    const char* description() const noexcept
    {
        return errDesc;
    }

    const char* what() const noexcept
    {
        return errName;
    }
};

} // namespace Elog
} // namespace Example
} // namespace openbmc_project
} // namespace xyz
} // namespace example



namespace org
{
namespace open_power
{
namespace Host
{
namespace _Event
{

struct ESEL
{
    static constexpr auto str = "ESEL=%s";
    static constexpr auto str_short = "ESEL";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr ESEL(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _Event

struct Event
{
    static constexpr auto L = level::ERR;
    using ESEL = _Event::ESEL;
    using CALLOUT_INVENTORY_PATH = xyz::openbmc_project::Common::Callout::Inventory::CALLOUT_INVENTORY_PATH;
    using metadata_types = std::tuple<ESEL, CALLOUT_INVENTORY_PATH>;

};

} // namespace Host
} // namespace open_power
} // namespace org


namespace details
{

template <>
struct map_exception_type<sdbusplus::org::open_power::Host::Error::Event>
{
    using type = org::open_power::Host::Event;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Control
{
namespace Device
{
namespace _WriteFailure
{


}  // namespace _WriteFailure

struct WriteFailure
{
    static constexpr auto L = level::ERR;
    using CALLOUT_ERRNO = xyz::openbmc_project::Common::Callout::Device::CALLOUT_ERRNO;
    using CALLOUT_DEVICE_PATH = xyz::openbmc_project::Common::Callout::Device::CALLOUT_DEVICE_PATH;
    using metadata_types = std::tuple<CALLOUT_ERRNO, CALLOUT_DEVICE_PATH>;

};

} // namespace Device
} // namespace Control
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Control::Device::Error::WriteFailure>
{
    using type = xyz::openbmc_project::Control::Device::WriteFailure;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace File
{
namespace _Open
{

struct ERRNO
{
    static constexpr auto str = "ERRNO=%d";
    static constexpr auto str_short = "ERRNO";
    using type = std::tuple<std::decay_t<decltype(str)>,int32_t>;
    explicit constexpr ERRNO(int32_t a) : _entry(entry(str, a)) {};
    type _entry;
};
struct PATH
{
    static constexpr auto str = "PATH=%s";
    static constexpr auto str_short = "PATH";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr PATH(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _Open

struct Open
{
    static constexpr auto L = level::ERR;
    using ERRNO = _Open::ERRNO;
    using PATH = _Open::PATH;
    using metadata_types = std::tuple<ERRNO, PATH>;

};

} // namespace File
} // namespace Common
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Common::File::Error::Open>
{
    using type = xyz::openbmc_project::Common::File::Open;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace File
{
namespace _Seek
{

struct OFFSET
{
    static constexpr auto str = "OFFSET=%ll";
    static constexpr auto str_short = "OFFSET";
    using type = std::tuple<std::decay_t<decltype(str)>,int64_t>;
    explicit constexpr OFFSET(int64_t a) : _entry(entry(str, a)) {};
    type _entry;
};
struct WHENCE
{
    static constexpr auto str = "WHENCE=%d";
    static constexpr auto str_short = "WHENCE";
    using type = std::tuple<std::decay_t<decltype(str)>,int32_t>;
    explicit constexpr WHENCE(int32_t a) : _entry(entry(str, a)) {};
    type _entry;
};
struct ERRNO
{
    static constexpr auto str = "ERRNO=%d";
    static constexpr auto str_short = "ERRNO";
    using type = std::tuple<std::decay_t<decltype(str)>,int32_t>;
    explicit constexpr ERRNO(int32_t a) : _entry(entry(str, a)) {};
    type _entry;
};
struct PATH
{
    static constexpr auto str = "PATH=%s";
    static constexpr auto str_short = "PATH";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr PATH(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _Seek

struct Seek
{
    static constexpr auto L = level::ERR;
    using OFFSET = _Seek::OFFSET;
    using WHENCE = _Seek::WHENCE;
    using ERRNO = _Seek::ERRNO;
    using PATH = _Seek::PATH;
    using metadata_types = std::tuple<OFFSET, WHENCE, ERRNO, PATH>;

};

} // namespace File
} // namespace Common
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Common::File::Error::Seek>
{
    using type = xyz::openbmc_project::Common::File::Seek;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Common
{
namespace File
{
namespace _Write
{

struct ERRNO
{
    static constexpr auto str = "ERRNO=%d";
    static constexpr auto str_short = "ERRNO";
    using type = std::tuple<std::decay_t<decltype(str)>,int32_t>;
    explicit constexpr ERRNO(int32_t a) : _entry(entry(str, a)) {};
    type _entry;
};
struct PATH
{
    static constexpr auto str = "PATH=%s";
    static constexpr auto str_short = "PATH";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr PATH(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _Write

struct Write
{
    static constexpr auto L = level::ERR;
    using ERRNO = _Write::ERRNO;
    using PATH = _Write::PATH;
    using metadata_types = std::tuple<ERRNO, PATH>;

};

} // namespace File
} // namespace Common
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Common::File::Error::Write>
{
    using type = xyz::openbmc_project::Common::File::Write;
};

}

namespace org
{
namespace open_power
{
namespace Host
{
namespace Access
{
namespace _WriteCFAM
{

struct ADDRESS
{
    static constexpr auto str = "ADDRESS=0x%X";
    static constexpr auto str_short = "ADDRESS";
    using type = std::tuple<std::decay_t<decltype(str)>,uint32_t>;
    explicit constexpr ADDRESS(uint32_t a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _WriteCFAM

struct WriteCFAM
{
    static constexpr auto L = level::ERR;
    using ADDRESS = _WriteCFAM::ADDRESS;
    using CALLOUT_ERRNO = xyz::openbmc_project::Common::Callout::Device::CALLOUT_ERRNO;
    using CALLOUT_DEVICE_PATH = xyz::openbmc_project::Common::Callout::Device::CALLOUT_DEVICE_PATH;
    using metadata_types = std::tuple<ADDRESS, CALLOUT_ERRNO, CALLOUT_DEVICE_PATH>;

};

} // namespace Access
} // namespace Host
} // namespace open_power
} // namespace org


namespace details
{

template <>
struct map_exception_type<sdbusplus::org::open_power::Host::Access::Error::WriteCFAM>
{
    using type = org::open_power::Host::Access::WriteCFAM;
};

}

namespace org
{
namespace open_power
{
namespace Host
{
namespace Access
{
namespace _ReadCFAM
{

struct ADDRESS
{
    static constexpr auto str = "ADDRESS=0x%X";
    static constexpr auto str_short = "ADDRESS";
    using type = std::tuple<std::decay_t<decltype(str)>,uint32_t>;
    explicit constexpr ADDRESS(uint32_t a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _ReadCFAM

struct ReadCFAM
{
    static constexpr auto L = level::ERR;
    using ADDRESS = _ReadCFAM::ADDRESS;
    using CALLOUT_ERRNO = xyz::openbmc_project::Common::Callout::Device::CALLOUT_ERRNO;
    using CALLOUT_DEVICE_PATH = xyz::openbmc_project::Common::Callout::Device::CALLOUT_DEVICE_PATH;
    using metadata_types = std::tuple<ADDRESS, CALLOUT_ERRNO, CALLOUT_DEVICE_PATH>;

};

} // namespace Access
} // namespace Host
} // namespace open_power
} // namespace org


namespace details
{

template <>
struct map_exception_type<sdbusplus::org::open_power::Host::Access::Error::ReadCFAM>
{
    using type = org::open_power::Host::Access::ReadCFAM;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace State
{
namespace Host
{
namespace _SoftOffTimeout
{


}  // namespace _SoftOffTimeout

struct SoftOffTimeout
{
    static constexpr auto L = level::ERR;
    using TIMEOUT_IN_MSEC = xyz::openbmc_project::Common::Timeout::TIMEOUT_IN_MSEC;
    using metadata_types = std::tuple<TIMEOUT_IN_MSEC>;

};

} // namespace Host
} // namespace State
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::State::Host::Error::SoftOffTimeout>
{
    using type = xyz::openbmc_project::State::Host::SoftOffTimeout;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Dump
{
namespace Create
{
namespace _Disabled
{


}  // namespace _Disabled

struct Disabled
{
    static constexpr auto L = level::ERR;
    using metadata_types = std::tuple<>;

};

} // namespace Create
} // namespace Dump
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Dump::Create::Error::Disabled>
{
    using type = xyz::openbmc_project::Dump::Create::Disabled;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Dump
{
namespace Create
{
namespace _QuotaExceeded
{

struct REASON 
{
    static constexpr auto str = "REASON = %s";
    static constexpr auto str_short = "REASON ";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr REASON (const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _QuotaExceeded

struct QuotaExceeded
{
    static constexpr auto L = level::ERR;
    using REASON  = _QuotaExceeded::REASON ;
    using metadata_types = std::tuple<REASON >;

};

} // namespace Create
} // namespace Dump
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Dump::Create::Error::QuotaExceeded>
{
    using type = xyz::openbmc_project::Dump::Create::QuotaExceeded;
};

}

namespace xyz
{
namespace openbmc_project
{
namespace Control
{
namespace Host
{
namespace _CommandNotSupported
{


}  // namespace _CommandNotSupported

struct CommandNotSupported
{
    static constexpr auto L = level::ERR;
    using metadata_types = std::tuple<>;

};

} // namespace Host
} // namespace Control
} // namespace openbmc_project
} // namespace xyz


namespace details
{

template <>
struct map_exception_type<sdbusplus::xyz::openbmc_project::Control::Host::Error::CommandNotSupported>
{
    using type = xyz::openbmc_project::Control::Host::CommandNotSupported;
};

}

namespace example
{
namespace xyz
{
namespace openbmc_project
{
namespace Example
{
namespace Elog
{
namespace _TestErrorOne
{

struct ERRNUM
{
    static constexpr auto str = "ERRNUM=0x%.4X";
    static constexpr auto str_short = "ERRNUM";
    using type = std::tuple<std::decay_t<decltype(str)>,uint16_t>;
    explicit constexpr ERRNUM(uint16_t a) : _entry(entry(str, a)) {};
    type _entry;
};
struct FILE_PATH
{
    static constexpr auto str = "FILE_PATH=%s";
    static constexpr auto str_short = "FILE_PATH";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr FILE_PATH(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};
struct FILE_NAME
{
    static constexpr auto str = "FILE_NAME=%s";
    static constexpr auto str_short = "FILE_NAME";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr FILE_NAME(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _TestErrorOne

struct TestErrorOne : public sdbusplus::exception_t
{
    static constexpr auto errName = "example.xyz.openbmc_project.Example.Elog.TestErrorOne";
    static constexpr auto errDesc = "this is test error one";
    static constexpr auto L = level::INFO;
    using ERRNUM = _TestErrorOne::ERRNUM;
    using FILE_PATH = _TestErrorOne::FILE_PATH;
    using FILE_NAME = _TestErrorOne::FILE_NAME;
    using DEV_ADDR = example::xyz::openbmc_project::Example::Elog::TestErrorTwo::DEV_ADDR;
    using DEV_ID = example::xyz::openbmc_project::Example::Elog::TestErrorTwo::DEV_ID;
    using DEV_NAME = example::xyz::openbmc_project::Example::Elog::TestErrorTwo::DEV_NAME;
    using metadata_types = std::tuple<ERRNUM, FILE_PATH, FILE_NAME, DEV_ADDR, DEV_ID, DEV_NAME>;

    const char* name() const noexcept
    {
        return errName;
    }

    const char* description() const noexcept
    {
        return errDesc;
    }

    const char* what() const noexcept
    {
        return errName;
    }
};

} // namespace Elog
} // namespace Example
} // namespace openbmc_project
} // namespace xyz
} // namespace example



namespace example
{
namespace xyz
{
namespace openbmc_project
{
namespace Example
{
namespace Foo
{
namespace _Foo
{

struct FOO_DATA
{
    static constexpr auto str = "FOO_DATA=%s";
    static constexpr auto str_short = "FOO_DATA";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr FOO_DATA(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _Foo

struct Foo : public sdbusplus::exception_t
{
    static constexpr auto errName = "example.xyz.openbmc_project.Example.Foo.Foo";
    static constexpr auto errDesc = "this is test error Foo";
    static constexpr auto L = level::INFO;
    using FOO_DATA = _Foo::FOO_DATA;
    using ERRNUM = example::xyz::openbmc_project::Example::Elog::TestErrorOne::ERRNUM;
    using FILE_PATH = example::xyz::openbmc_project::Example::Elog::TestErrorOne::FILE_PATH;
    using FILE_NAME = example::xyz::openbmc_project::Example::Elog::TestErrorOne::FILE_NAME;
    using DEV_ADDR = example::xyz::openbmc_project::Example::Elog::TestErrorTwo::DEV_ADDR;
    using DEV_ID = example::xyz::openbmc_project::Example::Elog::TestErrorTwo::DEV_ID;
    using DEV_NAME = example::xyz::openbmc_project::Example::Elog::TestErrorTwo::DEV_NAME;
    using metadata_types = std::tuple<FOO_DATA, ERRNUM, FILE_PATH, FILE_NAME, DEV_ADDR, DEV_ID, DEV_NAME>;

    const char* name() const noexcept
    {
        return errName;
    }

    const char* description() const noexcept
    {
        return errDesc;
    }

    const char* what() const noexcept
    {
        return errName;
    }
};

} // namespace Foo
} // namespace Example
} // namespace openbmc_project
} // namespace xyz
} // namespace example



namespace example
{
namespace xyz
{
namespace openbmc_project
{
namespace Example
{
namespace Bar
{
namespace _Bar
{

struct BAR_DATA
{
    static constexpr auto str = "BAR_DATA=%s";
    static constexpr auto str_short = "BAR_DATA";
    using type = std::tuple<std::decay_t<decltype(str)>,const char*>;
    explicit constexpr BAR_DATA(const char* a) : _entry(entry(str, a)) {};
    type _entry;
};

}  // namespace _Bar

struct Bar : public sdbusplus::exception_t
{
    static constexpr auto errName = "example.xyz.openbmc_project.Example.Bar.Bar";
    static constexpr auto errDesc = "this is test error Bar";
    static constexpr auto L = level::INFO;
    using BAR_DATA = _Bar::BAR_DATA;
    using FOO_DATA = example::xyz::openbmc_project::Example::Foo::Foo::FOO_DATA;
    using ERRNUM = example::xyz::openbmc_project::Example::Elog::TestErrorOne::ERRNUM;
    using FILE_PATH = example::xyz::openbmc_project::Example::Elog::TestErrorOne::FILE_PATH;
    using FILE_NAME = example::xyz::openbmc_project::Example::Elog::TestErrorOne::FILE_NAME;
    using DEV_ADDR = example::xyz::openbmc_project::Example::Elog::TestErrorTwo::DEV_ADDR;
    using DEV_ID = example::xyz::openbmc_project::Example::Elog::TestErrorTwo::DEV_ID;
    using DEV_NAME = example::xyz::openbmc_project::Example::Elog::TestErrorTwo::DEV_NAME;
    using metadata_types = std::tuple<BAR_DATA, FOO_DATA, ERRNUM, FILE_PATH, FILE_NAME, DEV_ADDR, DEV_ID, DEV_NAME>;

    const char* name() const noexcept
    {
        return errName;
    }

    const char* description() const noexcept
    {
        return errDesc;
    }

    const char* what() const noexcept
    {
        return errName;
    }
};

} // namespace Bar
} // namespace Example
} // namespace openbmc_project
} // namespace xyz
} // namespace example




} // namespace logging

} // namespace phosphor
