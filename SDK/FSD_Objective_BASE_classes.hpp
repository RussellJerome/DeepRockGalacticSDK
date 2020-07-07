#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Objective_BASE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Objective_BASE.Objective_BASE_C
// 0x0010 (0x0240 - 0x0230)
class UObjective_BASE_C : public UUserWidget
{
public:
	struct FLinearColor                                CompletedColor;                                           // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Objective_BASE.Objective_BASE_C");
		return ptr;
	}


	void InitObjective(class UObjective** Objective);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
