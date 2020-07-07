// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MissionMapIcon_Objective_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MissionMapIcon_Objective.ITM_MissionMapIcon_Objective_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_MissionMapIcon_Objective_C::SetData(class UTexture2D** Texture, struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionMapIcon_Objective.ITM_MissionMapIcon_Objective_C.SetData");

	UITM_MissionMapIcon_Objective_C_SetData_Params params;
	params.Texture = Texture;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
