#include <napi.h>
#include "SmartNumber.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports)
{
    return SmartNumber::Init(env, exports);
}

NODE_API_MODULE(SmartNumber, InitAll)
