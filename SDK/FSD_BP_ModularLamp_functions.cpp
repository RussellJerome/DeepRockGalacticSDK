// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ModularLamp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ModularLamp.BP_ModularLamp_C.GetMeshStructByEnum
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_ModularLamps>* Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSTRUCT_Lamp            ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, IsPlainOldData)

struct FSTRUCT_Lamp ABP_ModularLamp_C::GetMeshStructByEnum(TEnumAsByte<ENUM_ModularLamps>* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModularLamp.BP_ModularLamp_C.GetMeshStructByEnum");

	ABP_ModularLamp_C_GetMeshStructByEnum_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ModularLamp.BP_ModularLamp_C.SetLightColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           LightColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ModularLamp_C::SetLightColor(struct FLinearColor* LightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModularLamp.BP_ModularLamp_C.SetLightColor");

	ABP_ModularLamp_C_SetLightColor_Params params;
	params.LightColor = LightColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ModularLamp.BP_ModularLamp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ModularLamp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ModularLamp.BP_ModularLamp_C.UserConstructionScript");

	ABP_ModularLamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
