// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TOOLTIP_ServerWorkEnvironment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.SetCampaignAssignment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 CampaignRequirement            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_ServerWorkEnvironment_C::SetCampaignAssignment(class UClass** CampaignRequirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.SetCampaignAssignment");

	UTOOLTIP_ServerWorkEnvironment_C_SetCampaignAssignment_Params params;
	params.CampaignRequirement = CampaignRequirement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_ServerWorkEnvironment_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.PreConstruct");

	UTOOLTIP_ServerWorkEnvironment_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_ServerWorkEnvironment_C::ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment");

	UTOOLTIP_ServerWorkEnvironment_C_ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
