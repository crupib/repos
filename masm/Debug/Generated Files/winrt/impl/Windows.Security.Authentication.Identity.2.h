// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210806.1

#pragma once
#ifndef WINRT_Windows_Security_Authentication_Identity_2_H
#define WINRT_Windows_Security_Authentication_Identity_2_H
#include "winrt/impl/Windows.Security.Authentication.Identity.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity
{
    struct __declspec(empty_bases) EnterpriseKeyCredentialRegistrationInfo : winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo
    {
        EnterpriseKeyCredentialRegistrationInfo(std::nullptr_t) noexcept {}
        EnterpriseKeyCredentialRegistrationInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationInfo(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) EnterpriseKeyCredentialRegistrationManager : winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager
    {
        EnterpriseKeyCredentialRegistrationManager(std::nullptr_t) noexcept {}
        EnterpriseKeyCredentialRegistrationManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Identity::IEnterpriseKeyCredentialRegistrationManager(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Current();
    };
}
#endif
