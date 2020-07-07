// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_CommunityRewardResource_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CommunityRewardResource.UI_CommunityRewardResource_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CommunityRewardResource_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CommunityRewardResource.UI_CommunityRewardResource_C.PreConstruct");

	UUI_CommunityRewardResource_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CommunityRewardResource.UI_CommunityRewardResource_C.ExecuteUbergraph_UI_CommunityRewardResource
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CommunityRewardResource_C::ExecuteUbergraph_UI_CommunityRewardResource(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CommunityRewardResource.UI_CommunityRewardResource_C.ExecuteUbergraph_UI_CommunityRewardResource");

	UUI_CommunityRewardResource_C_ExecuteUbergraph_UI_CommunityRewardResource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
