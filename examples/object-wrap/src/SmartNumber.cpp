#include "SmartNumber.h"

Napi::Object SmartNumber::Init(Napi::Env env, Napi::Object exports)
{
    Napi::Function func = DefineClass(env, "SmartNumber",
                                      {
                                          InstanceMethod("plusOne", &SmartNumber::PlusOne),
                                          InstanceMethod("multiply", &SmartNumber::Multiply)
                                      });

    exports.Set("SmartNumber", func);
    return exports;
}

SmartNumber::SmartNumber(const Napi::CallbackInfo& info) :
    Napi::ObjectWrap<SmartNumber>(info)
{
    Napi::Env env = info.Env();
    Napi::Number value = info[0].As<Napi::Number>();
    this->value = value.DoubleValue();
}

Napi::Value SmartNumber::PlusOne(const Napi::CallbackInfo& info)
{
    this->value = this->value + 1;

    return Napi::Number::New(info.Env(), this->value);
}

Napi::Value SmartNumber::Multiply(const Napi::CallbackInfo& info)
{
    Napi::Number multiplier = info[0].As<Napi::Number>();
    this->value = this->value * multiplier.DoubleValue();

    return Napi::Number::New(info.Env(), this->value);
}
