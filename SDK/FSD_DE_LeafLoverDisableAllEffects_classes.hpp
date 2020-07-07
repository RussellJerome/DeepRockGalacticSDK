#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_LeafLoverDisableAllEffects_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DE_LeafLoverDisableAllEffects.DE_LeafLoverDisableAllEffects_C
// 0x0020 (0x0128 - 0x0108)
class UDE_LeafLoverDisableAllEffects_C : public UDrinkEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TargetScale;                                              // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	class APlayerCharacter*                            Character;                                                // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              StartScale;                                               // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Progress;                                                 // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_LeafLoverDisableAllEffects.DE_LeafLoverDisableAllEffects_C");
		return ptr;
	}


	void OnStartEffect(class APlayerCharacter** Character);
	void ExecuteUbergraph_DE_LeafLoverDisableAllEffects(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
