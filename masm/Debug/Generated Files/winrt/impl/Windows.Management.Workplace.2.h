// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210806.1

#pragma once
#ifndef WINRT_Windows_Management_Workplace_2_H
#define WINRT_Windows_Management_Workplace_2_H
#include "winrt/impl/Windows.Management.Workplace.1.h"
WINRT_EXPORT namespace winrt::Windows::Management::Workplace
{
    struct MdmPolicy
    {
        MdmPolicy() = delete;
        static auto IsBrowserAllowed();
        static auto IsCameraAllowed();
        static auto IsMicrosoftAccountAllowed();
        static auto IsStoreAllowed();
        static auto GetMessagingSyncPolicy();
    };
    struct WorkplaceSettings
    {
        WorkplaceSettings() = delete;
        [[nodiscard]] static auto IsMicrosoftAccountOptional();
    };
}
#endif
