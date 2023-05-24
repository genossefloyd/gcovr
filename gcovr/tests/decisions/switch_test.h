#pragma once

#include <cstdint>
#include <string>

struct SwitchTest {
    SwitchTest();

    enum class SomeEnum {
        EnumValue_1,
        EnumValue_2,
        EnumValue_3,
    };

    static constexpr double doSomething(SomeEnum value) {
        switch (value) {
            case SomeEnum::EnumValue_1: return 50.0;
            case SomeEnum::EnumValue_2: return 100.0;
            case SomeEnum::EnumValue_3: return 25.0;
        }
    }

    void checkSwitch();
private:
    std::string _name;
};