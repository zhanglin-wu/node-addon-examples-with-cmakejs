#include <napi.h>

static Napi::String HelloWorldFunction(const Napi::CallbackInfo& info)
{
    Napi::Env env = info.Env();
    return Napi::String::New(env, "Hello World!");
}

static Napi::Object Init(Napi::Env env, Napi::Object exports)
{
    exports.Set(Napi::String::New(env, "helloWorldFunction"), Napi::Function::New(env, HelloWorldFunction));
    return exports;
}

NODE_API_MODULE(helloWorldFunction, Init)
