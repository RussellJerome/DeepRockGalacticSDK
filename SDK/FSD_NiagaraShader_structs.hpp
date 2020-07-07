#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// 0x0020
struct FNiagaraDataInterfaceGPUParamInfo
{
	class FString                                      DataInterfaceHLSLSymbol;                                  // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      DIClassName;                                              // 0x0010(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
