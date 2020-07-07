// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LoreScreen_Master_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoreScreen_Master.LoreScreen_Master_C.OnShown
// (BlueprintCallable, BlueprintEvent)

void ULoreScreen_Master_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Master.LoreScreen_Master_C.OnShown");

	ULoreScreen_Master_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Master.LoreScreen_Master_C.RefreshContent
// (BlueprintCallable, BlueprintEvent)

void ULoreScreen_Master_C::RefreshContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Master.LoreScreen_Master_C.RefreshContent");

	ULoreScreen_Master_C_RefreshContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Master.LoreScreen_Master_C.PlayIntroAnim
// (BlueprintCallable, BlueprintEvent)

void ULoreScreen_Master_C::PlayIntroAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Master.LoreScreen_Master_C.PlayIntroAnim");

	ULoreScreen_Master_C_PlayIntroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_Master.LoreScreen_Master_C.ExecuteUbergraph_LoreScreen_Master
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_Master_C::ExecuteUbergraph_LoreScreen_Master(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_Master.LoreScreen_Master_C.ExecuteUbergraph_LoreScreen_Master");

	ULoreScreen_Master_C_ExecuteUbergraph_LoreScreen_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
