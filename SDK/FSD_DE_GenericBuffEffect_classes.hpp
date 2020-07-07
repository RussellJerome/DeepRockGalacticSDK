#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_GenericBuffEffect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DE_GenericBuffEffect.DE_GenericBuffEffect_C
// 0x0008 (0x0110 - 0x0108)
class UDE_GenericBuffEffect_C : public UDrinkEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_GenericBuffEffect.DE_GenericBuffEffect_C");
		return ptr;
	}


	void OnStartEffect(class APlayerCharacter** Character);
	void OnStopEffect();
	void ExecuteUbergraph_DE_GenericBuffEffect(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
