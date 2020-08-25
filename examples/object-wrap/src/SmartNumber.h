#pragma once

#include <napi.h>

class SmartNumber : public Napi::ObjectWrap<SmartNumber>
{
public:

    static Napi::Object Init(Napi::Env env, Napi::Object exports);

    SmartNumber(const Napi::CallbackInfo& info);

private:

    Napi::Value PlusOne(const Napi::CallbackInfo& info);
    Napi::Value Multiply(const Napi::CallbackInfo& info);

private:

    double value;
};
